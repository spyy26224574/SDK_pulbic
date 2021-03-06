    /* inffixed.h -- table for decoding fixed codes
     * Generated automatically by makefixed().
     * Copyright (C) 1995-2003 Mark Adler
     * For conditions of distribution and use, see copyright notice in zlib.h
     */

    /* WARNING: this file should *not* be used by applications. It
       is part of the implementation of the compression library and
       is subject to change. Applications should only use zlib.h.
     */

static const code lenfix[512] = {
    {(    0 << 16) | (96 << 8) | 7}, {(   80 << 16) | ( 0 << 8) | 8}, {(   16 << 16) | ( 0 << 8) | 8}, {(  115 << 16) | (20 << 8) | 8},
    {(   31 << 16) | (18 << 8) | 7}, {(  112 << 16) | ( 0 << 8) | 8}, {(   48 << 16) | ( 0 << 8) | 8}, {(  192 << 16) | ( 0 << 8) | 9},
    {(   10 << 16) | (16 << 8) | 7}, {(   96 << 16) | ( 0 << 8) | 8}, {(   32 << 16) | ( 0 << 8) | 8}, {(  160 << 16) | ( 0 << 8) | 9},
    {(    0 << 16) | ( 0 << 8) | 8}, {(  128 << 16) | ( 0 << 8) | 8}, {(   64 << 16) | ( 0 << 8) | 8}, {(  224 << 16) | ( 0 << 8) | 9},
    {(    6 << 16) | (16 << 8) | 7}, {(   88 << 16) | ( 0 << 8) | 8}, {(   24 << 16) | ( 0 << 8) | 8}, {(  144 << 16) | ( 0 << 8) | 9},
    {(   59 << 16) | (19 << 8) | 7}, {(  120 << 16) | ( 0 << 8) | 8}, {(   56 << 16) | ( 0 << 8) | 8}, {(  208 << 16) | ( 0 << 8) | 9},
    {(   17 << 16) | (17 << 8) | 7}, {(  104 << 16) | ( 0 << 8) | 8}, {(   40 << 16) | ( 0 << 8) | 8}, {(  176 << 16) | ( 0 << 8) | 9},
    {(    8 << 16) | ( 0 << 8) | 8}, {(  136 << 16) | ( 0 << 8) | 8}, {(   72 << 16) | ( 0 << 8) | 8}, {(  240 << 16) | ( 0 << 8) | 9},
    {(    4 << 16) | (16 << 8) | 7}, {(   84 << 16) | ( 0 << 8) | 8}, {(   20 << 16) | ( 0 << 8) | 8}, {(  227 << 16) | (21 << 8) | 8},
    {(   43 << 16) | (19 << 8) | 7}, {(  116 << 16) | ( 0 << 8) | 8}, {(   52 << 16) | ( 0 << 8) | 8}, {(  200 << 16) | ( 0 << 8) | 9},
    {(   13 << 16) | (17 << 8) | 7}, {(  100 << 16) | ( 0 << 8) | 8}, {(   36 << 16) | ( 0 << 8) | 8}, {(  168 << 16) | ( 0 << 8) | 9},
    {(    4 << 16) | ( 0 << 8) | 8}, {(  132 << 16) | ( 0 << 8) | 8}, {(   68 << 16) | ( 0 << 8) | 8}, {(  232 << 16) | ( 0 << 8) | 9},
    {(    8 << 16) | (16 << 8) | 7}, {(   92 << 16) | ( 0 << 8) | 8}, {(   28 << 16) | ( 0 << 8) | 8}, {(  152 << 16) | ( 0 << 8) | 9},
    {(   83 << 16) | (20 << 8) | 7}, {(  124 << 16) | ( 0 << 8) | 8}, {(   60 << 16) | ( 0 << 8) | 8}, {(  216 << 16) | ( 0 << 8) | 9},
    {(   23 << 16) | (18 << 8) | 7}, {(  108 << 16) | ( 0 << 8) | 8}, {(   44 << 16) | ( 0 << 8) | 8}, {(  184 << 16) | ( 0 << 8) | 9},
    {(   12 << 16) | ( 0 << 8) | 8}, {(  140 << 16) | ( 0 << 8) | 8}, {(   76 << 16) | ( 0 << 8) | 8}, {(  248 << 16) | ( 0 << 8) | 9},
    {(    3 << 16) | (16 << 8) | 7}, {(   82 << 16) | ( 0 << 8) | 8}, {(   18 << 16) | ( 0 << 8) | 8}, {(  163 << 16) | (21 << 8) | 8},
    {(   35 << 16) | (19 << 8) | 7}, {(  114 << 16) | ( 0 << 8) | 8}, {(   50 << 16) | ( 0 << 8) | 8}, {(  196 << 16) | ( 0 << 8) | 9},
    {(   11 << 16) | (17 << 8) | 7}, {(   98 << 16) | ( 0 << 8) | 8}, {(   34 << 16) | ( 0 << 8) | 8}, {(  164 << 16) | ( 0 << 8) | 9},
    {(    2 << 16) | ( 0 << 8) | 8}, {(  130 << 16) | ( 0 << 8) | 8}, {(   66 << 16) | ( 0 << 8) | 8}, {(  228 << 16) | ( 0 << 8) | 9},
    {(    7 << 16) | (16 << 8) | 7}, {(   90 << 16) | ( 0 << 8) | 8}, {(   26 << 16) | ( 0 << 8) | 8}, {(  148 << 16) | ( 0 << 8) | 9},
    {(   67 << 16) | (20 << 8) | 7}, {(  122 << 16) | ( 0 << 8) | 8}, {(   58 << 16) | ( 0 << 8) | 8}, {(  212 << 16) | ( 0 << 8) | 9},
    {(   19 << 16) | (18 << 8) | 7}, {(  106 << 16) | ( 0 << 8) | 8}, {(   42 << 16) | ( 0 << 8) | 8}, {(  180 << 16) | ( 0 << 8) | 9},
    {(   10 << 16) | ( 0 << 8) | 8}, {(  138 << 16) | ( 0 << 8) | 8}, {(   74 << 16) | ( 0 << 8) | 8}, {(  244 << 16) | ( 0 << 8) | 9},
    {(    5 << 16) | (16 << 8) | 7}, {(   86 << 16) | ( 0 << 8) | 8}, {(   22 << 16) | ( 0 << 8) | 8}, {(    0 << 16) | (64 << 8) | 8},
    {(   51 << 16) | (19 << 8) | 7}, {(  118 << 16) | ( 0 << 8) | 8}, {(   54 << 16) | ( 0 << 8) | 8}, {(  204 << 16) | ( 0 << 8) | 9},
    {(   15 << 16) | (17 << 8) | 7}, {(  102 << 16) | ( 0 << 8) | 8}, {(   38 << 16) | ( 0 << 8) | 8}, {(  172 << 16) | ( 0 << 8) | 9},
    {(    6 << 16) | ( 0 << 8) | 8}, {(  134 << 16) | ( 0 << 8) | 8}, {(   70 << 16) | ( 0 << 8) | 8}, {(  236 << 16) | ( 0 << 8) | 9},
    {(    9 << 16) | (16 << 8) | 7}, {(   94 << 16) | ( 0 << 8) | 8}, {(   30 << 16) | ( 0 << 8) | 8}, {(  156 << 16) | ( 0 << 8) | 9},
    {(   99 << 16) | (20 << 8) | 7}, {(  126 << 16) | ( 0 << 8) | 8}, {(   62 << 16) | ( 0 << 8) | 8}, {(  220 << 16) | ( 0 << 8) | 9},
    {(   27 << 16) | (18 << 8) | 7}, {(  110 << 16) | ( 0 << 8) | 8}, {(   46 << 16) | ( 0 << 8) | 8}, {(  188 << 16) | ( 0 << 8) | 9},
    {(   14 << 16) | ( 0 << 8) | 8}, {(  142 << 16) | ( 0 << 8) | 8}, {(   78 << 16) | ( 0 << 8) | 8}, {(  252 << 16) | ( 0 << 8) | 9},
    {(    0 << 16) | (96 << 8) | 7}, {(   81 << 16) | ( 0 << 8) | 8}, {(   17 << 16) | ( 0 << 8) | 8}, {(  131 << 16) | (21 << 8) | 8},
    {(   31 << 16) | (18 << 8) | 7}, {(  113 << 16) | ( 0 << 8) | 8}, {(   49 << 16) | ( 0 << 8) | 8}, {(  194 << 16) | ( 0 << 8) | 9},
    {(   10 << 16) | (16 << 8) | 7}, {(   97 << 16) | ( 0 << 8) | 8}, {(   33 << 16) | ( 0 << 8) | 8}, {(  162 << 16) | ( 0 << 8) | 9},
    {(    1 << 16) | ( 0 << 8) | 8}, {(  129 << 16) | ( 0 << 8) | 8}, {(   65 << 16) | ( 0 << 8) | 8}, {(  226 << 16) | ( 0 << 8) | 9},
    {(    6 << 16) | (16 << 8) | 7}, {(   89 << 16) | ( 0 << 8) | 8}, {(   25 << 16) | ( 0 << 8) | 8}, {(  146 << 16) | ( 0 << 8) | 9},
    {(   59 << 16) | (19 << 8) | 7}, {(  121 << 16) | ( 0 << 8) | 8}, {(   57 << 16) | ( 0 << 8) | 8}, {(  210 << 16) | ( 0 << 8) | 9},
    {(   17 << 16) | (17 << 8) | 7}, {(  105 << 16) | ( 0 << 8) | 8}, {(   41 << 16) | ( 0 << 8) | 8}, {(  178 << 16) | ( 0 << 8) | 9},
    {(    9 << 16) | ( 0 << 8) | 8}, {(  137 << 16) | ( 0 << 8) | 8}, {(   73 << 16) | ( 0 << 8) | 8}, {(  242 << 16) | ( 0 << 8) | 9},
    {(    4 << 16) | (16 << 8) | 7}, {(   85 << 16) | ( 0 << 8) | 8}, {(   21 << 16) | ( 0 << 8) | 8}, {(  258 << 16) | (16 << 8) | 8},
    {(   43 << 16) | (19 << 8) | 7}, {(  117 << 16) | ( 0 << 8) | 8}, {(   53 << 16) | ( 0 << 8) | 8}, {(  202 << 16) | ( 0 << 8) | 9},
    {(   13 << 16) | (17 << 8) | 7}, {(  101 << 16) | ( 0 << 8) | 8}, {(   37 << 16) | ( 0 << 8) | 8}, {(  170 << 16) | ( 0 << 8) | 9},
    {(    5 << 16) | ( 0 << 8) | 8}, {(  133 << 16) | ( 0 << 8) | 8}, {(   69 << 16) | ( 0 << 8) | 8}, {(  234 << 16) | ( 0 << 8) | 9},
    {(    8 << 16) | (16 << 8) | 7}, {(   93 << 16) | ( 0 << 8) | 8}, {(   29 << 16) | ( 0 << 8) | 8}, {(  154 << 16) | ( 0 << 8) | 9},
    {(   83 << 16) | (20 << 8) | 7}, {(  125 << 16) | ( 0 << 8) | 8}, {(   61 << 16) | ( 0 << 8) | 8}, {(  218 << 16) | ( 0 << 8) | 9},
    {(   23 << 16) | (18 << 8) | 7}, {(  109 << 16) | ( 0 << 8) | 8}, {(   45 << 16) | ( 0 << 8) | 8}, {(  186 << 16) | ( 0 << 8) | 9},
    {(   13 << 16) | ( 0 << 8) | 8}, {(  141 << 16) | ( 0 << 8) | 8}, {(   77 << 16) | ( 0 << 8) | 8}, {(  250 << 16) | ( 0 << 8) | 9},
    {(    3 << 16) | (16 << 8) | 7}, {(   83 << 16) | ( 0 << 8) | 8}, {(   19 << 16) | ( 0 << 8) | 8}, {(  195 << 16) | (21 << 8) | 8},
    {(   35 << 16) | (19 << 8) | 7}, {(  115 << 16) | ( 0 << 8) | 8}, {(   51 << 16) | ( 0 << 8) | 8}, {(  198 << 16) | ( 0 << 8) | 9},
    {(   11 << 16) | (17 << 8) | 7}, {(   99 << 16) | ( 0 << 8) | 8}, {(   35 << 16) | ( 0 << 8) | 8}, {(  166 << 16) | ( 0 << 8) | 9},
    {(    3 << 16) | ( 0 << 8) | 8}, {(  131 << 16) | ( 0 << 8) | 8}, {(   67 << 16) | ( 0 << 8) | 8}, {(  230 << 16) | ( 0 << 8) | 9},
    {(    7 << 16) | (16 << 8) | 7}, {(   91 << 16) | ( 0 << 8) | 8}, {(   27 << 16) | ( 0 << 8) | 8}, {(  150 << 16) | ( 0 << 8) | 9},
    {(   67 << 16) | (20 << 8) | 7}, {(  123 << 16) | ( 0 << 8) | 8}, {(   59 << 16) | ( 0 << 8) | 8}, {(  214 << 16) | ( 0 << 8) | 9},
    {(   19 << 16) | (18 << 8) | 7}, {(  107 << 16) | ( 0 << 8) | 8}, {(   43 << 16) | ( 0 << 8) | 8}, {(  182 << 16) | ( 0 << 8) | 9},
    {(   11 << 16) | ( 0 << 8) | 8}, {(  139 << 16) | ( 0 << 8) | 8}, {(   75 << 16) | ( 0 << 8) | 8}, {(  246 << 16) | ( 0 << 8) | 9},
    {(    5 << 16) | (16 << 8) | 7}, {(   87 << 16) | ( 0 << 8) | 8}, {(   23 << 16) | ( 0 << 8) | 8}, {(    0 << 16) | (64 << 8) | 8},
    {(   51 << 16) | (19 << 8) | 7}, {(  119 << 16) | ( 0 << 8) | 8}, {(   55 << 16) | ( 0 << 8) | 8}, {(  206 << 16) | ( 0 << 8) | 9},
    {(   15 << 16) | (17 << 8) | 7}, {(  103 << 16) | ( 0 << 8) | 8}, {(   39 << 16) | ( 0 << 8) | 8}, {(  174 << 16) | ( 0 << 8) | 9},
    {(    7 << 16) | ( 0 << 8) | 8}, {(  135 << 16) | ( 0 << 8) | 8}, {(   71 << 16) | ( 0 << 8) | 8}, {(  238 << 16) | ( 0 << 8) | 9},
    {(    9 << 16) | (16 << 8) | 7}, {(   95 << 16) | ( 0 << 8) | 8}, {(   31 << 16) | ( 0 << 8) | 8}, {(  158 << 16) | ( 0 << 8) | 9},
    {(   99 << 16) | (20 << 8) | 7}, {(  127 << 16) | ( 0 << 8) | 8}, {(   63 << 16) | ( 0 << 8) | 8}, {(  222 << 16) | ( 0 << 8) | 9},
    {(   27 << 16) | (18 << 8) | 7}, {(  111 << 16) | ( 0 << 8) | 8}, {(   47 << 16) | ( 0 << 8) | 8}, {(  190 << 16) | ( 0 << 8) | 9},
    {(   15 << 16) | ( 0 << 8) | 8}, {(  143 << 16) | ( 0 << 8) | 8}, {(   79 << 16) | ( 0 << 8) | 8}, {(  254 << 16) | ( 0 << 8) | 9},
    {(    0 << 16) | (96 << 8) | 7}, {(   80 << 16) | ( 0 << 8) | 8}, {(   16 << 16) | ( 0 << 8) | 8}, {(  115 << 16) | (20 << 8) | 8},
    {(   31 << 16) | (18 << 8) | 7}, {(  112 << 16) | ( 0 << 8) | 8}, {(   48 << 16) | ( 0 << 8) | 8}, {(  193 << 16) | ( 0 << 8) | 9},
    {(   10 << 16) | (16 << 8) | 7}, {(   96 << 16) | ( 0 << 8) | 8}, {(   32 << 16) | ( 0 << 8) | 8}, {(  161 << 16) | ( 0 << 8) | 9},
    {(    0 << 16) | ( 0 << 8) | 8}, {(  128 << 16) | ( 0 << 8) | 8}, {(   64 << 16) | ( 0 << 8) | 8}, {(  225 << 16) | ( 0 << 8) | 9},
    {(    6 << 16) | (16 << 8) | 7}, {(   88 << 16) | ( 0 << 8) | 8}, {(   24 << 16) | ( 0 << 8) | 8}, {(  145 << 16) | ( 0 << 8) | 9},
    {(   59 << 16) | (19 << 8) | 7}, {(  120 << 16) | ( 0 << 8) | 8}, {(   56 << 16) | ( 0 << 8) | 8}, {(  209 << 16) | ( 0 << 8) | 9},
    {(   17 << 16) | (17 << 8) | 7}, {(  104 << 16) | ( 0 << 8) | 8}, {(   40 << 16) | ( 0 << 8) | 8}, {(  177 << 16) | ( 0 << 8) | 9},
    {(    8 << 16) | ( 0 << 8) | 8}, {(  136 << 16) | ( 0 << 8) | 8}, {(   72 << 16) | ( 0 << 8) | 8}, {(  241 << 16) | ( 0 << 8) | 9},
    {(    4 << 16) | (16 << 8) | 7}, {(   84 << 16) | ( 0 << 8) | 8}, {(   20 << 16) | ( 0 << 8) | 8}, {(  227 << 16) | (21 << 8) | 8},
    {(   43 << 16) | (19 << 8) | 7}, {(  116 << 16) | ( 0 << 8) | 8}, {(   52 << 16) | ( 0 << 8) | 8}, {(  201 << 16) | ( 0 << 8) | 9},
    {(   13 << 16) | (17 << 8) | 7}, {(  100 << 16) | ( 0 << 8) | 8}, {(   36 << 16) | ( 0 << 8) | 8}, {(  169 << 16) | ( 0 << 8) | 9},
    {(    4 << 16) | ( 0 << 8) | 8}, {(  132 << 16) | ( 0 << 8) | 8}, {(   68 << 16) | ( 0 << 8) | 8}, {(  233 << 16) | ( 0 << 8) | 9},
    {(    8 << 16) | (16 << 8) | 7}, {(   92 << 16) | ( 0 << 8) | 8}, {(   28 << 16) | ( 0 << 8) | 8}, {(  153 << 16) | ( 0 << 8) | 9},
    {(   83 << 16) | (20 << 8) | 7}, {(  124 << 16) | ( 0 << 8) | 8}, {(   60 << 16) | ( 0 << 8) | 8}, {(  217 << 16) | ( 0 << 8) | 9},
    {(   23 << 16) | (18 << 8) | 7}, {(  108 << 16) | ( 0 << 8) | 8}, {(   44 << 16) | ( 0 << 8) | 8}, {(  185 << 16) | ( 0 << 8) | 9},
    {(   12 << 16) | ( 0 << 8) | 8}, {(  140 << 16) | ( 0 << 8) | 8}, {(   76 << 16) | ( 0 << 8) | 8}, {(  249 << 16) | ( 0 << 8) | 9},
    {(    3 << 16) | (16 << 8) | 7}, {(   82 << 16) | ( 0 << 8) | 8}, {(   18 << 16) | ( 0 << 8) | 8}, {(  163 << 16) | (21 << 8) | 8},
    {(   35 << 16) | (19 << 8) | 7}, {(  114 << 16) | ( 0 << 8) | 8}, {(   50 << 16) | ( 0 << 8) | 8}, {(  197 << 16) | ( 0 << 8) | 9},
    {(   11 << 16) | (17 << 8) | 7}, {(   98 << 16) | ( 0 << 8) | 8}, {(   34 << 16) | ( 0 << 8) | 8}, {(  165 << 16) | ( 0 << 8) | 9},
    {(    2 << 16) | ( 0 << 8) | 8}, {(  130 << 16) | ( 0 << 8) | 8}, {(   66 << 16) | ( 0 << 8) | 8}, {(  229 << 16) | ( 0 << 8) | 9},
    {(    7 << 16) | (16 << 8) | 7}, {(   90 << 16) | ( 0 << 8) | 8}, {(   26 << 16) | ( 0 << 8) | 8}, {(  149 << 16) | ( 0 << 8) | 9},
    {(   67 << 16) | (20 << 8) | 7}, {(  122 << 16) | ( 0 << 8) | 8}, {(   58 << 16) | ( 0 << 8) | 8}, {(  213 << 16) | ( 0 << 8) | 9},
    {(   19 << 16) | (18 << 8) | 7}, {(  106 << 16) | ( 0 << 8) | 8}, {(   42 << 16) | ( 0 << 8) | 8}, {(  181 << 16) | ( 0 << 8) | 9},
    {(   10 << 16) | ( 0 << 8) | 8}, {(  138 << 16) | ( 0 << 8) | 8}, {(   74 << 16) | ( 0 << 8) | 8}, {(  245 << 16) | ( 0 << 8) | 9},
    {(    5 << 16) | (16 << 8) | 7}, {(   86 << 16) | ( 0 << 8) | 8}, {(   22 << 16) | ( 0 << 8) | 8}, {(    0 << 16) | (64 << 8) | 8},
    {(   51 << 16) | (19 << 8) | 7}, {(  118 << 16) | ( 0 << 8) | 8}, {(   54 << 16) | ( 0 << 8) | 8}, {(  205 << 16) | ( 0 << 8) | 9},
    {(   15 << 16) | (17 << 8) | 7}, {(  102 << 16) | ( 0 << 8) | 8}, {(   38 << 16) | ( 0 << 8) | 8}, {(  173 << 16) | ( 0 << 8) | 9},
    {(    6 << 16) | ( 0 << 8) | 8}, {(  134 << 16) | ( 0 << 8) | 8}, {(   70 << 16) | ( 0 << 8) | 8}, {(  237 << 16) | ( 0 << 8) | 9},
    {(    9 << 16) | (16 << 8) | 7}, {(   94 << 16) | ( 0 << 8) | 8}, {(   30 << 16) | ( 0 << 8) | 8}, {(  157 << 16) | ( 0 << 8) | 9},
    {(   99 << 16) | (20 << 8) | 7}, {(  126 << 16) | ( 0 << 8) | 8}, {(   62 << 16) | ( 0 << 8) | 8}, {(  221 << 16) | ( 0 << 8) | 9},
    {(   27 << 16) | (18 << 8) | 7}, {(  110 << 16) | ( 0 << 8) | 8}, {(   46 << 16) | ( 0 << 8) | 8}, {(  189 << 16) | ( 0 << 8) | 9},
    {(   14 << 16) | ( 0 << 8) | 8}, {(  142 << 16) | ( 0 << 8) | 8}, {(   78 << 16) | ( 0 << 8) | 8}, {(  253 << 16) | ( 0 << 8) | 9},
    {(    0 << 16) | (96 << 8) | 7}, {(   81 << 16) | ( 0 << 8) | 8}, {(   17 << 16) | ( 0 << 8) | 8}, {(  131 << 16) | (21 << 8) | 8},
    {(   31 << 16) | (18 << 8) | 7}, {(  113 << 16) | ( 0 << 8) | 8}, {(   49 << 16) | ( 0 << 8) | 8}, {(  195 << 16) | ( 0 << 8) | 9},
    {(   10 << 16) | (16 << 8) | 7}, {(   97 << 16) | ( 0 << 8) | 8}, {(   33 << 16) | ( 0 << 8) | 8}, {(  163 << 16) | ( 0 << 8) | 9},
    {(    1 << 16) | ( 0 << 8) | 8}, {(  129 << 16) | ( 0 << 8) | 8}, {(   65 << 16) | ( 0 << 8) | 8}, {(  227 << 16) | ( 0 << 8) | 9},
    {(    6 << 16) | (16 << 8) | 7}, {(   89 << 16) | ( 0 << 8) | 8}, {(   25 << 16) | ( 0 << 8) | 8}, {(  147 << 16) | ( 0 << 8) | 9},
    {(   59 << 16) | (19 << 8) | 7}, {(  121 << 16) | ( 0 << 8) | 8}, {(   57 << 16) | ( 0 << 8) | 8}, {(  211 << 16) | ( 0 << 8) | 9},
    {(   17 << 16) | (17 << 8) | 7}, {(  105 << 16) | ( 0 << 8) | 8}, {(   41 << 16) | ( 0 << 8) | 8}, {(  179 << 16) | ( 0 << 8) | 9},
    {(    9 << 16) | ( 0 << 8) | 8}, {(  137 << 16) | ( 0 << 8) | 8}, {(   73 << 16) | ( 0 << 8) | 8}, {(  243 << 16) | ( 0 << 8) | 9},
    {(    4 << 16) | (16 << 8) | 7}, {(   85 << 16) | ( 0 << 8) | 8}, {(   21 << 16) | ( 0 << 8) | 8}, {(  258 << 16) | (16 << 8) | 8},
    {(   43 << 16) | (19 << 8) | 7}, {(  117 << 16) | ( 0 << 8) | 8}, {(   53 << 16) | ( 0 << 8) | 8}, {(  203 << 16) | ( 0 << 8) | 9},
    {(   13 << 16) | (17 << 8) | 7}, {(  101 << 16) | ( 0 << 8) | 8}, {(   37 << 16) | ( 0 << 8) | 8}, {(  171 << 16) | ( 0 << 8) | 9},
    {(    5 << 16) | ( 0 << 8) | 8}, {(  133 << 16) | ( 0 << 8) | 8}, {(   69 << 16) | ( 0 << 8) | 8}, {(  235 << 16) | ( 0 << 8) | 9},
    {(    8 << 16) | (16 << 8) | 7}, {(   93 << 16) | ( 0 << 8) | 8}, {(   29 << 16) | ( 0 << 8) | 8}, {(  155 << 16) | ( 0 << 8) | 9},
    {(   83 << 16) | (20 << 8) | 7}, {(  125 << 16) | ( 0 << 8) | 8}, {(   61 << 16) | ( 0 << 8) | 8}, {(  219 << 16) | ( 0 << 8) | 9},
    {(   23 << 16) | (18 << 8) | 7}, {(  109 << 16) | ( 0 << 8) | 8}, {(   45 << 16) | ( 0 << 8) | 8}, {(  187 << 16) | ( 0 << 8) | 9},
    {(   13 << 16) | ( 0 << 8) | 8}, {(  141 << 16) | ( 0 << 8) | 8}, {(   77 << 16) | ( 0 << 8) | 8}, {(  251 << 16) | ( 0 << 8) | 9},
    {(    3 << 16) | (16 << 8) | 7}, {(   83 << 16) | ( 0 << 8) | 8}, {(   19 << 16) | ( 0 << 8) | 8}, {(  195 << 16) | (21 << 8) | 8},
    {(   35 << 16) | (19 << 8) | 7}, {(  115 << 16) | ( 0 << 8) | 8}, {(   51 << 16) | ( 0 << 8) | 8}, {(  199 << 16) | ( 0 << 8) | 9},
    {(   11 << 16) | (17 << 8) | 7}, {(   99 << 16) | ( 0 << 8) | 8}, {(   35 << 16) | ( 0 << 8) | 8}, {(  167 << 16) | ( 0 << 8) | 9},
    {(    3 << 16) | ( 0 << 8) | 8}, {(  131 << 16) | ( 0 << 8) | 8}, {(   67 << 16) | ( 0 << 8) | 8}, {(  231 << 16) | ( 0 << 8) | 9},
    {(    7 << 16) | (16 << 8) | 7}, {(   91 << 16) | ( 0 << 8) | 8}, {(   27 << 16) | ( 0 << 8) | 8}, {(  151 << 16) | ( 0 << 8) | 9},
    {(   67 << 16) | (20 << 8) | 7}, {(  123 << 16) | ( 0 << 8) | 8}, {(   59 << 16) | ( 0 << 8) | 8}, {(  215 << 16) | ( 0 << 8) | 9},
    {(   19 << 16) | (18 << 8) | 7}, {(  107 << 16) | ( 0 << 8) | 8}, {(   43 << 16) | ( 0 << 8) | 8}, {(  183 << 16) | ( 0 << 8) | 9},
    {(   11 << 16) | ( 0 << 8) | 8}, {(  139 << 16) | ( 0 << 8) | 8}, {(   75 << 16) | ( 0 << 8) | 8}, {(  247 << 16) | ( 0 << 8) | 9},
    {(    5 << 16) | (16 << 8) | 7}, {(   87 << 16) | ( 0 << 8) | 8}, {(   23 << 16) | ( 0 << 8) | 8}, {(    0 << 16) | (64 << 8) | 8},
    {(   51 << 16) | (19 << 8) | 7}, {(  119 << 16) | ( 0 << 8) | 8}, {(   55 << 16) | ( 0 << 8) | 8}, {(  207 << 16) | ( 0 << 8) | 9},
    {(   15 << 16) | (17 << 8) | 7}, {(  103 << 16) | ( 0 << 8) | 8}, {(   39 << 16) | ( 0 << 8) | 8}, {(  175 << 16) | ( 0 << 8) | 9},
    {(    7 << 16) | ( 0 << 8) | 8}, {(  135 << 16) | ( 0 << 8) | 8}, {(   71 << 16) | ( 0 << 8) | 8}, {(  239 << 16) | ( 0 << 8) | 9},
    {(    9 << 16) | (16 << 8) | 7}, {(   95 << 16) | ( 0 << 8) | 8}, {(   31 << 16) | ( 0 << 8) | 8}, {(  159 << 16) | ( 0 << 8) | 9},
    {(   99 << 16) | (20 << 8) | 7}, {(  127 << 16) | ( 0 << 8) | 8}, {(   63 << 16) | ( 0 << 8) | 8}, {(  223 << 16) | ( 0 << 8) | 9},
    {(   27 << 16) | (18 << 8) | 7}, {(  111 << 16) | ( 0 << 8) | 8}, {(   47 << 16) | ( 0 << 8) | 8}, {(  191 << 16) | ( 0 << 8) | 9},
    {(   15 << 16) | ( 0 << 8) | 8}, {(  143 << 16) | ( 0 << 8) | 8}, {(   79 << 16) | ( 0 << 8) | 8}, {(  255 << 16) | ( 0 << 8) | 9},
};

static const code distfix[32] = {
    {(    1 << 16) | (16 << 8) | 5}, {(  257 << 16) | (23 << 8) | 5}, {(   17 << 16) | (19 << 8) | 5}, {( 4097 << 16) | (27 << 8) | 5},
    {(    5 << 16) | (17 << 8) | 5}, {( 1025 << 16) | (25 << 8) | 5}, {(   65 << 16) | (21 << 8) | 5}, {(16385 << 16) | (29 << 8) | 5},
    {(    3 << 16) | (16 << 8) | 5}, {(  513 << 16) | (24 << 8) | 5}, {(   33 << 16) | (20 << 8) | 5}, {( 8193 << 16) | (28 << 8) | 5},
    {(    9 << 16) | (18 << 8) | 5}, {( 2049 << 16) | (26 << 8) | 5}, {(  129 << 16) | (22 << 8) | 5}, {(    0 << 16) | (64 << 8) | 5},
    {(    2 << 16) | (16 << 8) | 5}, {(  385 << 16) | (23 << 8) | 5}, {(   25 << 16) | (19 << 8) | 5}, {( 6145 << 16) | (27 << 8) | 5},
    {(    7 << 16) | (17 << 8) | 5}, {( 1537 << 16) | (25 << 8) | 5}, {(   97 << 16) | (21 << 8) | 5}, {(24577 << 16) | (29 << 8) | 5},
    {(    4 << 16) | (16 << 8) | 5}, {(  769 << 16) | (24 << 8) | 5}, {(   49 << 16) | (20 << 8) | 5}, {(12289 << 16) | (28 << 8) | 5},
    {(   13 << 16) | (18 << 8) | 5}, {( 3073 << 16) | (26 << 8) | 5}, {(  193 << 16) | (22 << 8) | 5}, {(    0 << 16) | (64 << 8) | 5},
};

