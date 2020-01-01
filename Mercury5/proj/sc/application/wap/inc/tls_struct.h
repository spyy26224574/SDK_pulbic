
#ifndef __TLS_STRUCT_H__
#define __TLS_STRUCT_H__

#ifdef __cplusplus
extern "C" {
#endif

/** ssl data buffer definition */
typedef struct
{
    uint8_t * buf; /**< the data in the buffer */
    uint32_t len;  /**< the length of data */
}T_SSL_Buf;

/** ssl text record definition */
typedef struct
{
    uint8_t*   plaintext;          /**< the plaintext is visible to anyone */
    uint32_t   plaintext_max_len;  /**< the maximum length of plaintext ssl supports */
    uint32_t   plaintext_len;      /**< the length of plaintext in record */
    uint32_t   plaintext_offset;   /**< the offset of plaintext in record */
    uint32_t   plaintext_left;     /**< the length of left plaintext in record */
    uint8_t*   compresstext;       /**< the compresstext compressed from plaintext */
    uint32_t   compresstext_len;   /**< the length of compresstext in record */
    uint8_t*   ciphertext;         /**< the ciphertext encrypted from compresstext */
    uint32_t   ciphertext_offset;  /**< the offset of ciphertext in recore */
    uint32_t   ciphertext_left;    /**< the length of left ciphertext in record */
}T_SSL_Rec;

/** handshake queue definition */
typedef struct
{
     T_SSL_List handshake_queue;   /**< the list of handshake pkt */
     struct node_st * tail;        /**< the tail of handshake queue */
}T_SSL_Que;

/** handshake pkt definition */
typedef struct
{
    T_SSL_Node hs_node;   /**< the node for insert to handshake queue */
    int8_t    pkt_state;  /**< the pkt state in receiving */
    int8_t    unUsed[3];
    int32_t   mt_type;    /**< the type of handshake pkt */
    uint32_t  pkt_len;    /**< the length of handshake pkt */
    uint8_t*  pkt;        /**< the handshake pkt */
    uint32_t  hs_offset;  /**< the offset of pkt */
}T_SSL_HsPkt;

/** receive buffer definition */
typedef struct
{
    uint8_t * buf;          /**< the data received */
    uint32_t  wptr;         /**< the position of write data */
    uint32_t  rptr;         /**< the position of read data */
    uint32_t  not_read_len; /**< the length of data in buffer */
    uint32_t  pkt_num;      /**< how many pkts in recv buffer not read */
    uint32_t  max_len;      /**< the maximum length of data receive buffer supports */
}T_SSL_RecvBuf;

/** the array format cipher suites like {0x00,0x04} */
typedef int8_t T_SSL_CS[2];

/** cipher suite negotiated in one connection definition */
typedef struct
{
    T_SSL_CS hs_cipher_suite; /**< the cipher suite negotiated by handshake */
    int16_t  unUsed;
    int32_t  sym_alg_type;    /**< the symmetric cryptograpy */
    int32_t  md_type;         /**< the md cryptograpy  */
    int32_t  pkey_type;       /**< the public key cryptograpy */
    int32_t  cipher_type;     /**< the type of encryption(block/stream encryption) */
}T_SSL_ConnCipher;

/** compress context definition */
typedef struct
{
    int8_t * CompressMethodList;  /**< the list of compress method */
    int32_t len;                  /**< the length of compress method */
}T_SSL_Compress;

/** the cryptograpy definition */
typedef struct
{
    int32_t  sym_alg_type;  /**< the symmetric cryptograpy */
    int32_t  md_type;       /**< the md cryptograpy  */
    int32_t  pkey;          /**< the public key cryptograpy */
    T_SSL_CS cipher_suite;  /**< the cipher suite  */
    int16_t  unUsed;
}T_SSL_CipherAlg;

/** the state of a connection */
typedef struct
{
    int32_t current_state;                   /**< the current state of connection */
    uint8_t read_sequence[8];                /**< the read sequence number */
    uint8_t read_mac_secret[ALG_MD_SIZE];    /**< the read MAC secret key */
    uint8_t write_sequence[8];               /**< the write sequence number */
    uint8_t write_mac_secret[ALG_MD_SIZE];   /**< the write MAC secret key */
    uint8_t server_random[SSL_RANDOM_SIZE];  /**< the random generated by server */
    uint8_t client_random[SSL_RANDOM_SIZE];  /**< the random generated by client */
    int32_t key_block_len;                   /**< the length of key block  */
    uint8_t* key_block;                      /**< key block */
    uint32_t last_active_time;               /**< the active lime of this connection last time */
    uint8_t alert_fragment[2];               /**< the alert messages */
    int8_t   enc_dec_flag;                   /**< the flag of encryption and decryption  */
    int8_t   unUsed;

}T_SSL_ConnState;

/* the structrue for recording not verify server */
typedef struct
{
    T_SSL_Node ssl_verify_node;
    int8_t *record_server_name;  /** the name of server */
    uint8_t server_cert_SHA_hash[ALG_SHA_DIGEST_LEN];  /**< the SHA hash of server cert */
}T_SSL_Verify;

struct dssl_session_st;

/** the connection context definition */
typedef struct
{
    T_SSL_Node        ssl_connect_node;           /**< the node for insert to connection list */
    int32_t           ssl_socket_is_connected;    /**< whether the socket layer is connected or not*/
    int32_t           ssl_connect_is_close;       /**< whether the connection is closed or not */
    int32_t           ssl_connect_is_destroy;     /**< whether the connection is destroy or not */
    int32_t           ssl_connect_id;             /**< the socket this connection uses */
    T_SSL_ConnCipher  ssl_connect_cipher;         /**< the cipher suite negotiated trough handshake */
    T_ALG_CipherCtx   symmtric_alg_read_ctx;      /**< the symmetric algorith for read data */
    T_ALG_CipherCtx   symmtric_alg_write_ctx;     /**< the symmetric algorithm for write data */
    T_ALG_MdCtx       md_read_ctx;                /**< the md alogrithm for read data */
    T_ALG_MdCtx       md_write_ctx;               /**< the md alogrithm for write data */
    T_SSL_ConnState   ssl_connect_state;          /**< the state of this connection */
    T_SSL_Que         handshake_que;              /**< the handshake queue belong to this connectiion */
    uint32_t          app_remain_len;             /**< the length of remain application data hasn't read */
    uint32_t          hs_remain_len;              /**< the length of remain handshake data hasn't read */
    T_SSL_RecvBuf     ssl_rbuf;                   /**< the receive buffer of this connection */
    T_SSL_Rec         ssl_wrec;                   /**< the write record of this connection */
    T_SSL_Rec         ssl_rrec;                   /**< the read record of this connection */
    uint8_t*          ssl_remain_data;            /**< the data saved when closing this connection */
    int32_t           ssl_remain_len;             /**< the length of left data in this closed connection */
    uint32_t          read_count;                 /**< the total length of data when closing this connection */
    int32_t           is_wait_for_user_resopnse;  /**< the flag to indicate if ssl wait for user response when auth server failed */
    struct dssl_session_st* pst_connect_session;  /**< the session which contains this connection */
}T_SSL_Conn;

/** the session context definition */
typedef struct dssl_session_st
{
    T_SSL_Node node;                             /**< the node for insert to session list */
    uint32_t ssl_version;                        /**< the version SSL supports */
    uint8_t master_key[SSL_MASTER_KEY_LEN];      /**< the master key of this session */
    int32_t master_key_len;                      /**< the length of master key */
    uint8_t session_id[SSL_SESS_ID_LEN];         /**< the id of this session */
    int32_t resumable;                           /**< the resumable flag of this session */
    int32_t is_resume_ok;                        /**< whether session resume ok */
    uint32_t establish_time;                     /**< the establishment time of this session */
    T_ALG_MdCtx    md5_ctx;                      /**< the MD5 algorithm SSL uses */
    T_ALG_MdCtx    sha1_ctx;                     /**< the SHA1 algorithm SSL uses */
    T_ALG_MdCtx    tmp_ctx_md5;                  /**< the backup of md5_ctx */
    T_ALG_MdCtx    tmp_ctx_sha1;                 /**< the backup of sha1_ctx */
    T_SSL_sockaddr_in server_addr;               /**< the server's ip address */
    int8_t *server_name;                         /**< the SSL server name */
    int32_t user_accept_server;                  /**< if user accept server name */
    T_CERT_Obj*    ssl_server_cert;              /**< the server's certificate */
    T_ALG_PubKey*  server_pkey;                  /**< the server's public key */
    uint32_t   bufsize;                          /**< the buffer size for this session */
    int32_t    new_session;                      /**< is this a new session  */
    int32_t    error_num;                        /**< the error number occured in this session */
    int32_t    max_err_num;                      /**< the maximum error number of this session allows */
    T_SSL_List ssl_connect_list;                 /**< the list for all connections belong to this session */
    int8_t verify_failed_reason;                 /**< the reason of verify server failed */
    int8_t unUsed[3];

}T_SSL_Sess;

#ifdef __cplusplus
}
#endif

#endif /* __TLS_STRUCT_H__ */