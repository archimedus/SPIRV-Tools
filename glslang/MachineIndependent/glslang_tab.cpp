/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 69 "MachineIndependent/glslang.y"


/* Based on:
ANSI C Yacc grammar

In 1985, Jeff Lee published his Yacc grammar (which is accompanied by a
matching Lex specification) for the April 30, 1985 draft version of the
ANSI C standard.  Tom Stockfisch reposted it to net.sources in 1987; that
original, as mentioned in the answer to question 17.25 of the comp.lang.c
FAQ, can be ftp'ed from ftp.uu.net, file usenet/net.sources/ansi.c.grammar.Z.

I intend to keep this version as close to the current C Standard grammar as
possible; please let me know if you discover discrepancies.

Jutta Degener, 1995
*/

#include "SymbolTable.h"
#include "ParseHelper.h"
#include "../Public/ShaderLang.h"
#include "attribute.h"

using namespace glslang;


#line 97 "MachineIndependent/glslang_tab.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "glslang_tab.cpp.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CONST = 3,                      /* CONST  */
  YYSYMBOL_BOOL = 4,                       /* BOOL  */
  YYSYMBOL_INT = 5,                        /* INT  */
  YYSYMBOL_UINT = 6,                       /* UINT  */
  YYSYMBOL_FLOAT = 7,                      /* FLOAT  */
  YYSYMBOL_BVEC2 = 8,                      /* BVEC2  */
  YYSYMBOL_BVEC3 = 9,                      /* BVEC3  */
  YYSYMBOL_BVEC4 = 10,                     /* BVEC4  */
  YYSYMBOL_IVEC2 = 11,                     /* IVEC2  */
  YYSYMBOL_IVEC3 = 12,                     /* IVEC3  */
  YYSYMBOL_IVEC4 = 13,                     /* IVEC4  */
  YYSYMBOL_UVEC2 = 14,                     /* UVEC2  */
  YYSYMBOL_UVEC3 = 15,                     /* UVEC3  */
  YYSYMBOL_UVEC4 = 16,                     /* UVEC4  */
  YYSYMBOL_VEC2 = 17,                      /* VEC2  */
  YYSYMBOL_VEC3 = 18,                      /* VEC3  */
  YYSYMBOL_VEC4 = 19,                      /* VEC4  */
  YYSYMBOL_MAT2 = 20,                      /* MAT2  */
  YYSYMBOL_MAT3 = 21,                      /* MAT3  */
  YYSYMBOL_MAT4 = 22,                      /* MAT4  */
  YYSYMBOL_MAT2X2 = 23,                    /* MAT2X2  */
  YYSYMBOL_MAT2X3 = 24,                    /* MAT2X3  */
  YYSYMBOL_MAT2X4 = 25,                    /* MAT2X4  */
  YYSYMBOL_MAT3X2 = 26,                    /* MAT3X2  */
  YYSYMBOL_MAT3X3 = 27,                    /* MAT3X3  */
  YYSYMBOL_MAT3X4 = 28,                    /* MAT3X4  */
  YYSYMBOL_MAT4X2 = 29,                    /* MAT4X2  */
  YYSYMBOL_MAT4X3 = 30,                    /* MAT4X3  */
  YYSYMBOL_MAT4X4 = 31,                    /* MAT4X4  */
  YYSYMBOL_SAMPLER2D = 32,                 /* SAMPLER2D  */
  YYSYMBOL_SAMPLER3D = 33,                 /* SAMPLER3D  */
  YYSYMBOL_SAMPLERCUBE = 34,               /* SAMPLERCUBE  */
  YYSYMBOL_SAMPLER2DSHADOW = 35,           /* SAMPLER2DSHADOW  */
  YYSYMBOL_SAMPLERCUBESHADOW = 36,         /* SAMPLERCUBESHADOW  */
  YYSYMBOL_SAMPLER2DARRAY = 37,            /* SAMPLER2DARRAY  */
  YYSYMBOL_SAMPLER2DARRAYSHADOW = 38,      /* SAMPLER2DARRAYSHADOW  */
  YYSYMBOL_ISAMPLER2D = 39,                /* ISAMPLER2D  */
  YYSYMBOL_ISAMPLER3D = 40,                /* ISAMPLER3D  */
  YYSYMBOL_ISAMPLERCUBE = 41,              /* ISAMPLERCUBE  */
  YYSYMBOL_ISAMPLER2DARRAY = 42,           /* ISAMPLER2DARRAY  */
  YYSYMBOL_USAMPLER2D = 43,                /* USAMPLER2D  */
  YYSYMBOL_USAMPLER3D = 44,                /* USAMPLER3D  */
  YYSYMBOL_USAMPLERCUBE = 45,              /* USAMPLERCUBE  */
  YYSYMBOL_USAMPLER2DARRAY = 46,           /* USAMPLER2DARRAY  */
  YYSYMBOL_SAMPLER = 47,                   /* SAMPLER  */
  YYSYMBOL_SAMPLERSHADOW = 48,             /* SAMPLERSHADOW  */
  YYSYMBOL_TEXTURE2D = 49,                 /* TEXTURE2D  */
  YYSYMBOL_TEXTURE3D = 50,                 /* TEXTURE3D  */
  YYSYMBOL_TEXTURECUBE = 51,               /* TEXTURECUBE  */
  YYSYMBOL_TEXTURE2DARRAY = 52,            /* TEXTURE2DARRAY  */
  YYSYMBOL_ITEXTURE2D = 53,                /* ITEXTURE2D  */
  YYSYMBOL_ITEXTURE3D = 54,                /* ITEXTURE3D  */
  YYSYMBOL_ITEXTURECUBE = 55,              /* ITEXTURECUBE  */
  YYSYMBOL_ITEXTURE2DARRAY = 56,           /* ITEXTURE2DARRAY  */
  YYSYMBOL_UTEXTURE2D = 57,                /* UTEXTURE2D  */
  YYSYMBOL_UTEXTURE3D = 58,                /* UTEXTURE3D  */
  YYSYMBOL_UTEXTURECUBE = 59,              /* UTEXTURECUBE  */
  YYSYMBOL_UTEXTURE2DARRAY = 60,           /* UTEXTURE2DARRAY  */
  YYSYMBOL_ATTRIBUTE = 61,                 /* ATTRIBUTE  */
  YYSYMBOL_VARYING = 62,                   /* VARYING  */
  YYSYMBOL_FLOAT16_T = 63,                 /* FLOAT16_T  */
  YYSYMBOL_FLOAT32_T = 64,                 /* FLOAT32_T  */
  YYSYMBOL_DOUBLE = 65,                    /* DOUBLE  */
  YYSYMBOL_FLOAT64_T = 66,                 /* FLOAT64_T  */
  YYSYMBOL_INT64_T = 67,                   /* INT64_T  */
  YYSYMBOL_UINT64_T = 68,                  /* UINT64_T  */
  YYSYMBOL_INT32_T = 69,                   /* INT32_T  */
  YYSYMBOL_UINT32_T = 70,                  /* UINT32_T  */
  YYSYMBOL_INT16_T = 71,                   /* INT16_T  */
  YYSYMBOL_UINT16_T = 72,                  /* UINT16_T  */
  YYSYMBOL_INT8_T = 73,                    /* INT8_T  */
  YYSYMBOL_UINT8_T = 74,                   /* UINT8_T  */
  YYSYMBOL_I64VEC2 = 75,                   /* I64VEC2  */
  YYSYMBOL_I64VEC3 = 76,                   /* I64VEC3  */
  YYSYMBOL_I64VEC4 = 77,                   /* I64VEC4  */
  YYSYMBOL_U64VEC2 = 78,                   /* U64VEC2  */
  YYSYMBOL_U64VEC3 = 79,                   /* U64VEC3  */
  YYSYMBOL_U64VEC4 = 80,                   /* U64VEC4  */
  YYSYMBOL_I32VEC2 = 81,                   /* I32VEC2  */
  YYSYMBOL_I32VEC3 = 82,                   /* I32VEC3  */
  YYSYMBOL_I32VEC4 = 83,                   /* I32VEC4  */
  YYSYMBOL_U32VEC2 = 84,                   /* U32VEC2  */
  YYSYMBOL_U32VEC3 = 85,                   /* U32VEC3  */
  YYSYMBOL_U32VEC4 = 86,                   /* U32VEC4  */
  YYSYMBOL_I16VEC2 = 87,                   /* I16VEC2  */
  YYSYMBOL_I16VEC3 = 88,                   /* I16VEC3  */
  YYSYMBOL_I16VEC4 = 89,                   /* I16VEC4  */
  YYSYMBOL_U16VEC2 = 90,                   /* U16VEC2  */
  YYSYMBOL_U16VEC3 = 91,                   /* U16VEC3  */
  YYSYMBOL_U16VEC4 = 92,                   /* U16VEC4  */
  YYSYMBOL_I8VEC2 = 93,                    /* I8VEC2  */
  YYSYMBOL_I8VEC3 = 94,                    /* I8VEC3  */
  YYSYMBOL_I8VEC4 = 95,                    /* I8VEC4  */
  YYSYMBOL_U8VEC2 = 96,                    /* U8VEC2  */
  YYSYMBOL_U8VEC3 = 97,                    /* U8VEC3  */
  YYSYMBOL_U8VEC4 = 98,                    /* U8VEC4  */
  YYSYMBOL_DVEC2 = 99,                     /* DVEC2  */
  YYSYMBOL_DVEC3 = 100,                    /* DVEC3  */
  YYSYMBOL_DVEC4 = 101,                    /* DVEC4  */
  YYSYMBOL_DMAT2 = 102,                    /* DMAT2  */
  YYSYMBOL_DMAT3 = 103,                    /* DMAT3  */
  YYSYMBOL_DMAT4 = 104,                    /* DMAT4  */
  YYSYMBOL_F16VEC2 = 105,                  /* F16VEC2  */
  YYSYMBOL_F16VEC3 = 106,                  /* F16VEC3  */
  YYSYMBOL_F16VEC4 = 107,                  /* F16VEC4  */
  YYSYMBOL_F16MAT2 = 108,                  /* F16MAT2  */
  YYSYMBOL_F16MAT3 = 109,                  /* F16MAT3  */
  YYSYMBOL_F16MAT4 = 110,                  /* F16MAT4  */
  YYSYMBOL_F32VEC2 = 111,                  /* F32VEC2  */
  YYSYMBOL_F32VEC3 = 112,                  /* F32VEC3  */
  YYSYMBOL_F32VEC4 = 113,                  /* F32VEC4  */
  YYSYMBOL_F32MAT2 = 114,                  /* F32MAT2  */
  YYSYMBOL_F32MAT3 = 115,                  /* F32MAT3  */
  YYSYMBOL_F32MAT4 = 116,                  /* F32MAT4  */
  YYSYMBOL_F64VEC2 = 117,                  /* F64VEC2  */
  YYSYMBOL_F64VEC3 = 118,                  /* F64VEC3  */
  YYSYMBOL_F64VEC4 = 119,                  /* F64VEC4  */
  YYSYMBOL_F64MAT2 = 120,                  /* F64MAT2  */
  YYSYMBOL_F64MAT3 = 121,                  /* F64MAT3  */
  YYSYMBOL_F64MAT4 = 122,                  /* F64MAT4  */
  YYSYMBOL_DMAT2X2 = 123,                  /* DMAT2X2  */
  YYSYMBOL_DMAT2X3 = 124,                  /* DMAT2X3  */
  YYSYMBOL_DMAT2X4 = 125,                  /* DMAT2X4  */
  YYSYMBOL_DMAT3X2 = 126,                  /* DMAT3X2  */
  YYSYMBOL_DMAT3X3 = 127,                  /* DMAT3X3  */
  YYSYMBOL_DMAT3X4 = 128,                  /* DMAT3X4  */
  YYSYMBOL_DMAT4X2 = 129,                  /* DMAT4X2  */
  YYSYMBOL_DMAT4X3 = 130,                  /* DMAT4X3  */
  YYSYMBOL_DMAT4X4 = 131,                  /* DMAT4X4  */
  YYSYMBOL_F16MAT2X2 = 132,                /* F16MAT2X2  */
  YYSYMBOL_F16MAT2X3 = 133,                /* F16MAT2X3  */
  YYSYMBOL_F16MAT2X4 = 134,                /* F16MAT2X4  */
  YYSYMBOL_F16MAT3X2 = 135,                /* F16MAT3X2  */
  YYSYMBOL_F16MAT3X3 = 136,                /* F16MAT3X3  */
  YYSYMBOL_F16MAT3X4 = 137,                /* F16MAT3X4  */
  YYSYMBOL_F16MAT4X2 = 138,                /* F16MAT4X2  */
  YYSYMBOL_F16MAT4X3 = 139,                /* F16MAT4X3  */
  YYSYMBOL_F16MAT4X4 = 140,                /* F16MAT4X4  */
  YYSYMBOL_F32MAT2X2 = 141,                /* F32MAT2X2  */
  YYSYMBOL_F32MAT2X3 = 142,                /* F32MAT2X3  */
  YYSYMBOL_F32MAT2X4 = 143,                /* F32MAT2X4  */
  YYSYMBOL_F32MAT3X2 = 144,                /* F32MAT3X2  */
  YYSYMBOL_F32MAT3X3 = 145,                /* F32MAT3X3  */
  YYSYMBOL_F32MAT3X4 = 146,                /* F32MAT3X4  */
  YYSYMBOL_F32MAT4X2 = 147,                /* F32MAT4X2  */
  YYSYMBOL_F32MAT4X3 = 148,                /* F32MAT4X3  */
  YYSYMBOL_F32MAT4X4 = 149,                /* F32MAT4X4  */
  YYSYMBOL_F64MAT2X2 = 150,                /* F64MAT2X2  */
  YYSYMBOL_F64MAT2X3 = 151,                /* F64MAT2X3  */
  YYSYMBOL_F64MAT2X4 = 152,                /* F64MAT2X4  */
  YYSYMBOL_F64MAT3X2 = 153,                /* F64MAT3X2  */
  YYSYMBOL_F64MAT3X3 = 154,                /* F64MAT3X3  */
  YYSYMBOL_F64MAT3X4 = 155,                /* F64MAT3X4  */
  YYSYMBOL_F64MAT4X2 = 156,                /* F64MAT4X2  */
  YYSYMBOL_F64MAT4X3 = 157,                /* F64MAT4X3  */
  YYSYMBOL_F64MAT4X4 = 158,                /* F64MAT4X4  */
  YYSYMBOL_ATOMIC_UINT = 159,              /* ATOMIC_UINT  */
  YYSYMBOL_ACCSTRUCTNV = 160,              /* ACCSTRUCTNV  */
  YYSYMBOL_ACCSTRUCTEXT = 161,             /* ACCSTRUCTEXT  */
  YYSYMBOL_RAYQUERYEXT = 162,              /* RAYQUERYEXT  */
  YYSYMBOL_FCOOPMATNV = 163,               /* FCOOPMATNV  */
  YYSYMBOL_ICOOPMATNV = 164,               /* ICOOPMATNV  */
  YYSYMBOL_UCOOPMATNV = 165,               /* UCOOPMATNV  */
  YYSYMBOL_COOPMAT = 166,                  /* COOPMAT  */
  YYSYMBOL_HITOBJECTNV = 167,              /* HITOBJECTNV  */
  YYSYMBOL_HITOBJECTATTRNV = 168,          /* HITOBJECTATTRNV  */
  YYSYMBOL_SAMPLERCUBEARRAY = 169,         /* SAMPLERCUBEARRAY  */
  YYSYMBOL_SAMPLERCUBEARRAYSHADOW = 170,   /* SAMPLERCUBEARRAYSHADOW  */
  YYSYMBOL_ISAMPLERCUBEARRAY = 171,        /* ISAMPLERCUBEARRAY  */
  YYSYMBOL_USAMPLERCUBEARRAY = 172,        /* USAMPLERCUBEARRAY  */
  YYSYMBOL_SAMPLER1D = 173,                /* SAMPLER1D  */
  YYSYMBOL_SAMPLER1DARRAY = 174,           /* SAMPLER1DARRAY  */
  YYSYMBOL_SAMPLER1DARRAYSHADOW = 175,     /* SAMPLER1DARRAYSHADOW  */
  YYSYMBOL_ISAMPLER1D = 176,               /* ISAMPLER1D  */
  YYSYMBOL_SAMPLER1DSHADOW = 177,          /* SAMPLER1DSHADOW  */
  YYSYMBOL_SAMPLER2DRECT = 178,            /* SAMPLER2DRECT  */
  YYSYMBOL_SAMPLER2DRECTSHADOW = 179,      /* SAMPLER2DRECTSHADOW  */
  YYSYMBOL_ISAMPLER2DRECT = 180,           /* ISAMPLER2DRECT  */
  YYSYMBOL_USAMPLER2DRECT = 181,           /* USAMPLER2DRECT  */
  YYSYMBOL_SAMPLERBUFFER = 182,            /* SAMPLERBUFFER  */
  YYSYMBOL_ISAMPLERBUFFER = 183,           /* ISAMPLERBUFFER  */
  YYSYMBOL_USAMPLERBUFFER = 184,           /* USAMPLERBUFFER  */
  YYSYMBOL_SAMPLER2DMS = 185,              /* SAMPLER2DMS  */
  YYSYMBOL_ISAMPLER2DMS = 186,             /* ISAMPLER2DMS  */
  YYSYMBOL_USAMPLER2DMS = 187,             /* USAMPLER2DMS  */
  YYSYMBOL_SAMPLER2DMSARRAY = 188,         /* SAMPLER2DMSARRAY  */
  YYSYMBOL_ISAMPLER2DMSARRAY = 189,        /* ISAMPLER2DMSARRAY  */
  YYSYMBOL_USAMPLER2DMSARRAY = 190,        /* USAMPLER2DMSARRAY  */
  YYSYMBOL_SAMPLEREXTERNALOES = 191,       /* SAMPLEREXTERNALOES  */
  YYSYMBOL_SAMPLEREXTERNAL2DY2YEXT = 192,  /* SAMPLEREXTERNAL2DY2YEXT  */
  YYSYMBOL_ISAMPLER1DARRAY = 193,          /* ISAMPLER1DARRAY  */
  YYSYMBOL_USAMPLER1D = 194,               /* USAMPLER1D  */
  YYSYMBOL_USAMPLER1DARRAY = 195,          /* USAMPLER1DARRAY  */
  YYSYMBOL_F16SAMPLER1D = 196,             /* F16SAMPLER1D  */
  YYSYMBOL_F16SAMPLER2D = 197,             /* F16SAMPLER2D  */
  YYSYMBOL_F16SAMPLER3D = 198,             /* F16SAMPLER3D  */
  YYSYMBOL_F16SAMPLER2DRECT = 199,         /* F16SAMPLER2DRECT  */
  YYSYMBOL_F16SAMPLERCUBE = 200,           /* F16SAMPLERCUBE  */
  YYSYMBOL_F16SAMPLER1DARRAY = 201,        /* F16SAMPLER1DARRAY  */
  YYSYMBOL_F16SAMPLER2DARRAY = 202,        /* F16SAMPLER2DARRAY  */
  YYSYMBOL_F16SAMPLERCUBEARRAY = 203,      /* F16SAMPLERCUBEARRAY  */
  YYSYMBOL_F16SAMPLERBUFFER = 204,         /* F16SAMPLERBUFFER  */
  YYSYMBOL_F16SAMPLER2DMS = 205,           /* F16SAMPLER2DMS  */
  YYSYMBOL_F16SAMPLER2DMSARRAY = 206,      /* F16SAMPLER2DMSARRAY  */
  YYSYMBOL_F16SAMPLER1DSHADOW = 207,       /* F16SAMPLER1DSHADOW  */
  YYSYMBOL_F16SAMPLER2DSHADOW = 208,       /* F16SAMPLER2DSHADOW  */
  YYSYMBOL_F16SAMPLER1DARRAYSHADOW = 209,  /* F16SAMPLER1DARRAYSHADOW  */
  YYSYMBOL_F16SAMPLER2DARRAYSHADOW = 210,  /* F16SAMPLER2DARRAYSHADOW  */
  YYSYMBOL_F16SAMPLER2DRECTSHADOW = 211,   /* F16SAMPLER2DRECTSHADOW  */
  YYSYMBOL_F16SAMPLERCUBESHADOW = 212,     /* F16SAMPLERCUBESHADOW  */
  YYSYMBOL_F16SAMPLERCUBEARRAYSHADOW = 213, /* F16SAMPLERCUBEARRAYSHADOW  */
  YYSYMBOL_IMAGE1D = 214,                  /* IMAGE1D  */
  YYSYMBOL_IIMAGE1D = 215,                 /* IIMAGE1D  */
  YYSYMBOL_UIMAGE1D = 216,                 /* UIMAGE1D  */
  YYSYMBOL_IMAGE2D = 217,                  /* IMAGE2D  */
  YYSYMBOL_IIMAGE2D = 218,                 /* IIMAGE2D  */
  YYSYMBOL_UIMAGE2D = 219,                 /* UIMAGE2D  */
  YYSYMBOL_IMAGE3D = 220,                  /* IMAGE3D  */
  YYSYMBOL_IIMAGE3D = 221,                 /* IIMAGE3D  */
  YYSYMBOL_UIMAGE3D = 222,                 /* UIMAGE3D  */
  YYSYMBOL_IMAGE2DRECT = 223,              /* IMAGE2DRECT  */
  YYSYMBOL_IIMAGE2DRECT = 224,             /* IIMAGE2DRECT  */
  YYSYMBOL_UIMAGE2DRECT = 225,             /* UIMAGE2DRECT  */
  YYSYMBOL_IMAGECUBE = 226,                /* IMAGECUBE  */
  YYSYMBOL_IIMAGECUBE = 227,               /* IIMAGECUBE  */
  YYSYMBOL_UIMAGECUBE = 228,               /* UIMAGECUBE  */
  YYSYMBOL_IMAGEBUFFER = 229,              /* IMAGEBUFFER  */
  YYSYMBOL_IIMAGEBUFFER = 230,             /* IIMAGEBUFFER  */
  YYSYMBOL_UIMAGEBUFFER = 231,             /* UIMAGEBUFFER  */
  YYSYMBOL_IMAGE1DARRAY = 232,             /* IMAGE1DARRAY  */
  YYSYMBOL_IIMAGE1DARRAY = 233,            /* IIMAGE1DARRAY  */
  YYSYMBOL_UIMAGE1DARRAY = 234,            /* UIMAGE1DARRAY  */
  YYSYMBOL_IMAGE2DARRAY = 235,             /* IMAGE2DARRAY  */
  YYSYMBOL_IIMAGE2DARRAY = 236,            /* IIMAGE2DARRAY  */
  YYSYMBOL_UIMAGE2DARRAY = 237,            /* UIMAGE2DARRAY  */
  YYSYMBOL_IMAGECUBEARRAY = 238,           /* IMAGECUBEARRAY  */
  YYSYMBOL_IIMAGECUBEARRAY = 239,          /* IIMAGECUBEARRAY  */
  YYSYMBOL_UIMAGECUBEARRAY = 240,          /* UIMAGECUBEARRAY  */
  YYSYMBOL_IMAGE2DMS = 241,                /* IMAGE2DMS  */
  YYSYMBOL_IIMAGE2DMS = 242,               /* IIMAGE2DMS  */
  YYSYMBOL_UIMAGE2DMS = 243,               /* UIMAGE2DMS  */
  YYSYMBOL_IMAGE2DMSARRAY = 244,           /* IMAGE2DMSARRAY  */
  YYSYMBOL_IIMAGE2DMSARRAY = 245,          /* IIMAGE2DMSARRAY  */
  YYSYMBOL_UIMAGE2DMSARRAY = 246,          /* UIMAGE2DMSARRAY  */
  YYSYMBOL_F16IMAGE1D = 247,               /* F16IMAGE1D  */
  YYSYMBOL_F16IMAGE2D = 248,               /* F16IMAGE2D  */
  YYSYMBOL_F16IMAGE3D = 249,               /* F16IMAGE3D  */
  YYSYMBOL_F16IMAGE2DRECT = 250,           /* F16IMAGE2DRECT  */
  YYSYMBOL_F16IMAGECUBE = 251,             /* F16IMAGECUBE  */
  YYSYMBOL_F16IMAGE1DARRAY = 252,          /* F16IMAGE1DARRAY  */
  YYSYMBOL_F16IMAGE2DARRAY = 253,          /* F16IMAGE2DARRAY  */
  YYSYMBOL_F16IMAGECUBEARRAY = 254,        /* F16IMAGECUBEARRAY  */
  YYSYMBOL_F16IMAGEBUFFER = 255,           /* F16IMAGEBUFFER  */
  YYSYMBOL_F16IMAGE2DMS = 256,             /* F16IMAGE2DMS  */
  YYSYMBOL_F16IMAGE2DMSARRAY = 257,        /* F16IMAGE2DMSARRAY  */
  YYSYMBOL_I64IMAGE1D = 258,               /* I64IMAGE1D  */
  YYSYMBOL_U64IMAGE1D = 259,               /* U64IMAGE1D  */
  YYSYMBOL_I64IMAGE2D = 260,               /* I64IMAGE2D  */
  YYSYMBOL_U64IMAGE2D = 261,               /* U64IMAGE2D  */
  YYSYMBOL_I64IMAGE3D = 262,               /* I64IMAGE3D  */
  YYSYMBOL_U64IMAGE3D = 263,               /* U64IMAGE3D  */
  YYSYMBOL_I64IMAGE2DRECT = 264,           /* I64IMAGE2DRECT  */
  YYSYMBOL_U64IMAGE2DRECT = 265,           /* U64IMAGE2DRECT  */
  YYSYMBOL_I64IMAGECUBE = 266,             /* I64IMAGECUBE  */
  YYSYMBOL_U64IMAGECUBE = 267,             /* U64IMAGECUBE  */
  YYSYMBOL_I64IMAGEBUFFER = 268,           /* I64IMAGEBUFFER  */
  YYSYMBOL_U64IMAGEBUFFER = 269,           /* U64IMAGEBUFFER  */
  YYSYMBOL_I64IMAGE1DARRAY = 270,          /* I64IMAGE1DARRAY  */
  YYSYMBOL_U64IMAGE1DARRAY = 271,          /* U64IMAGE1DARRAY  */
  YYSYMBOL_I64IMAGE2DARRAY = 272,          /* I64IMAGE2DARRAY  */
  YYSYMBOL_U64IMAGE2DARRAY = 273,          /* U64IMAGE2DARRAY  */
  YYSYMBOL_I64IMAGECUBEARRAY = 274,        /* I64IMAGECUBEARRAY  */
  YYSYMBOL_U64IMAGECUBEARRAY = 275,        /* U64IMAGECUBEARRAY  */
  YYSYMBOL_I64IMAGE2DMS = 276,             /* I64IMAGE2DMS  */
  YYSYMBOL_U64IMAGE2DMS = 277,             /* U64IMAGE2DMS  */
  YYSYMBOL_I64IMAGE2DMSARRAY = 278,        /* I64IMAGE2DMSARRAY  */
  YYSYMBOL_U64IMAGE2DMSARRAY = 279,        /* U64IMAGE2DMSARRAY  */
  YYSYMBOL_TEXTURECUBEARRAY = 280,         /* TEXTURECUBEARRAY  */
  YYSYMBOL_ITEXTURECUBEARRAY = 281,        /* ITEXTURECUBEARRAY  */
  YYSYMBOL_UTEXTURECUBEARRAY = 282,        /* UTEXTURECUBEARRAY  */
  YYSYMBOL_TEXTURE1D = 283,                /* TEXTURE1D  */
  YYSYMBOL_ITEXTURE1D = 284,               /* ITEXTURE1D  */
  YYSYMBOL_UTEXTURE1D = 285,               /* UTEXTURE1D  */
  YYSYMBOL_TEXTURE1DARRAY = 286,           /* TEXTURE1DARRAY  */
  YYSYMBOL_ITEXTURE1DARRAY = 287,          /* ITEXTURE1DARRAY  */
  YYSYMBOL_UTEXTURE1DARRAY = 288,          /* UTEXTURE1DARRAY  */
  YYSYMBOL_TEXTURE2DRECT = 289,            /* TEXTURE2DRECT  */
  YYSYMBOL_ITEXTURE2DRECT = 290,           /* ITEXTURE2DRECT  */
  YYSYMBOL_UTEXTURE2DRECT = 291,           /* UTEXTURE2DRECT  */
  YYSYMBOL_TEXTUREBUFFER = 292,            /* TEXTUREBUFFER  */
  YYSYMBOL_ITEXTUREBUFFER = 293,           /* ITEXTUREBUFFER  */
  YYSYMBOL_UTEXTUREBUFFER = 294,           /* UTEXTUREBUFFER  */
  YYSYMBOL_TEXTURE2DMS = 295,              /* TEXTURE2DMS  */
  YYSYMBOL_ITEXTURE2DMS = 296,             /* ITEXTURE2DMS  */
  YYSYMBOL_UTEXTURE2DMS = 297,             /* UTEXTURE2DMS  */
  YYSYMBOL_TEXTURE2DMSARRAY = 298,         /* TEXTURE2DMSARRAY  */
  YYSYMBOL_ITEXTURE2DMSARRAY = 299,        /* ITEXTURE2DMSARRAY  */
  YYSYMBOL_UTEXTURE2DMSARRAY = 300,        /* UTEXTURE2DMSARRAY  */
  YYSYMBOL_F16TEXTURE1D = 301,             /* F16TEXTURE1D  */
  YYSYMBOL_F16TEXTURE2D = 302,             /* F16TEXTURE2D  */
  YYSYMBOL_F16TEXTURE3D = 303,             /* F16TEXTURE3D  */
  YYSYMBOL_F16TEXTURE2DRECT = 304,         /* F16TEXTURE2DRECT  */
  YYSYMBOL_F16TEXTURECUBE = 305,           /* F16TEXTURECUBE  */
  YYSYMBOL_F16TEXTURE1DARRAY = 306,        /* F16TEXTURE1DARRAY  */
  YYSYMBOL_F16TEXTURE2DARRAY = 307,        /* F16TEXTURE2DARRAY  */
  YYSYMBOL_F16TEXTURECUBEARRAY = 308,      /* F16TEXTURECUBEARRAY  */
  YYSYMBOL_F16TEXTUREBUFFER = 309,         /* F16TEXTUREBUFFER  */
  YYSYMBOL_F16TEXTURE2DMS = 310,           /* F16TEXTURE2DMS  */
  YYSYMBOL_F16TEXTURE2DMSARRAY = 311,      /* F16TEXTURE2DMSARRAY  */
  YYSYMBOL_SUBPASSINPUT = 312,             /* SUBPASSINPUT  */
  YYSYMBOL_SUBPASSINPUTMS = 313,           /* SUBPASSINPUTMS  */
  YYSYMBOL_ISUBPASSINPUT = 314,            /* ISUBPASSINPUT  */
  YYSYMBOL_ISUBPASSINPUTMS = 315,          /* ISUBPASSINPUTMS  */
  YYSYMBOL_USUBPASSINPUT = 316,            /* USUBPASSINPUT  */
  YYSYMBOL_USUBPASSINPUTMS = 317,          /* USUBPASSINPUTMS  */
  YYSYMBOL_F16SUBPASSINPUT = 318,          /* F16SUBPASSINPUT  */
  YYSYMBOL_F16SUBPASSINPUTMS = 319,        /* F16SUBPASSINPUTMS  */
  YYSYMBOL_SPIRV_INSTRUCTION = 320,        /* SPIRV_INSTRUCTION  */
  YYSYMBOL_SPIRV_EXECUTION_MODE = 321,     /* SPIRV_EXECUTION_MODE  */
  YYSYMBOL_SPIRV_EXECUTION_MODE_ID = 322,  /* SPIRV_EXECUTION_MODE_ID  */
  YYSYMBOL_SPIRV_DECORATE = 323,           /* SPIRV_DECORATE  */
  YYSYMBOL_SPIRV_DECORATE_ID = 324,        /* SPIRV_DECORATE_ID  */
  YYSYMBOL_SPIRV_DECORATE_STRING = 325,    /* SPIRV_DECORATE_STRING  */
  YYSYMBOL_SPIRV_TYPE = 326,               /* SPIRV_TYPE  */
  YYSYMBOL_SPIRV_STORAGE_CLASS = 327,      /* SPIRV_STORAGE_CLASS  */
  YYSYMBOL_SPIRV_BY_REFERENCE = 328,       /* SPIRV_BY_REFERENCE  */
  YYSYMBOL_SPIRV_LITERAL = 329,            /* SPIRV_LITERAL  */
  YYSYMBOL_ATTACHMENTEXT = 330,            /* ATTACHMENTEXT  */
  YYSYMBOL_IATTACHMENTEXT = 331,           /* IATTACHMENTEXT  */
  YYSYMBOL_UATTACHMENTEXT = 332,           /* UATTACHMENTEXT  */
  YYSYMBOL_LEFT_OP = 333,                  /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 334,                 /* RIGHT_OP  */
  YYSYMBOL_INC_OP = 335,                   /* INC_OP  */
  YYSYMBOL_DEC_OP = 336,                   /* DEC_OP  */
  YYSYMBOL_LE_OP = 337,                    /* LE_OP  */
  YYSYMBOL_GE_OP = 338,                    /* GE_OP  */
  YYSYMBOL_EQ_OP = 339,                    /* EQ_OP  */
  YYSYMBOL_NE_OP = 340,                    /* NE_OP  */
  YYSYMBOL_AND_OP = 341,                   /* AND_OP  */
  YYSYMBOL_OR_OP = 342,                    /* OR_OP  */
  YYSYMBOL_XOR_OP = 343,                   /* XOR_OP  */
  YYSYMBOL_MUL_ASSIGN = 344,               /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 345,               /* DIV_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 346,               /* ADD_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 347,               /* MOD_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 348,              /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 349,             /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 350,               /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 351,               /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 352,                /* OR_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 353,               /* SUB_ASSIGN  */
  YYSYMBOL_STRING_LITERAL = 354,           /* STRING_LITERAL  */
  YYSYMBOL_LEFT_PAREN = 355,               /* LEFT_PAREN  */
  YYSYMBOL_RIGHT_PAREN = 356,              /* RIGHT_PAREN  */
  YYSYMBOL_LEFT_BRACKET = 357,             /* LEFT_BRACKET  */
  YYSYMBOL_RIGHT_BRACKET = 358,            /* RIGHT_BRACKET  */
  YYSYMBOL_LEFT_BRACE = 359,               /* LEFT_BRACE  */
  YYSYMBOL_RIGHT_BRACE = 360,              /* RIGHT_BRACE  */
  YYSYMBOL_DOT = 361,                      /* DOT  */
  YYSYMBOL_COMMA = 362,                    /* COMMA  */
  YYSYMBOL_COLON = 363,                    /* COLON  */
  YYSYMBOL_EQUAL = 364,                    /* EQUAL  */
  YYSYMBOL_SEMICOLON = 365,                /* SEMICOLON  */
  YYSYMBOL_BANG = 366,                     /* BANG  */
  YYSYMBOL_DASH = 367,                     /* DASH  */
  YYSYMBOL_TILDE = 368,                    /* TILDE  */
  YYSYMBOL_PLUS = 369,                     /* PLUS  */
  YYSYMBOL_STAR = 370,                     /* STAR  */
  YYSYMBOL_SLASH = 371,                    /* SLASH  */
  YYSYMBOL_PERCENT = 372,                  /* PERCENT  */
  YYSYMBOL_LEFT_ANGLE = 373,               /* LEFT_ANGLE  */
  YYSYMBOL_RIGHT_ANGLE = 374,              /* RIGHT_ANGLE  */
  YYSYMBOL_VERTICAL_BAR = 375,             /* VERTICAL_BAR  */
  YYSYMBOL_CARET = 376,                    /* CARET  */
  YYSYMBOL_AMPERSAND = 377,                /* AMPERSAND  */
  YYSYMBOL_QUESTION = 378,                 /* QUESTION  */
  YYSYMBOL_INVARIANT = 379,                /* INVARIANT  */
  YYSYMBOL_HIGH_PRECISION = 380,           /* HIGH_PRECISION  */
  YYSYMBOL_MEDIUM_PRECISION = 381,         /* MEDIUM_PRECISION  */
  YYSYMBOL_LOW_PRECISION = 382,            /* LOW_PRECISION  */
  YYSYMBOL_PRECISION = 383,                /* PRECISION  */
  YYSYMBOL_PACKED = 384,                   /* PACKED  */
  YYSYMBOL_RESOURCE = 385,                 /* RESOURCE  */
  YYSYMBOL_SUPERP = 386,                   /* SUPERP  */
  YYSYMBOL_FLOATCONSTANT = 387,            /* FLOATCONSTANT  */
  YYSYMBOL_INTCONSTANT = 388,              /* INTCONSTANT  */
  YYSYMBOL_UINTCONSTANT = 389,             /* UINTCONSTANT  */
  YYSYMBOL_BOOLCONSTANT = 390,             /* BOOLCONSTANT  */
  YYSYMBOL_IDENTIFIER = 391,               /* IDENTIFIER  */
  YYSYMBOL_TYPE_NAME = 392,                /* TYPE_NAME  */
  YYSYMBOL_CENTROID = 393,                 /* CENTROID  */
  YYSYMBOL_IN = 394,                       /* IN  */
  YYSYMBOL_OUT = 395,                      /* OUT  */
  YYSYMBOL_INOUT = 396,                    /* INOUT  */
  YYSYMBOL_STRUCT = 397,                   /* STRUCT  */
  YYSYMBOL_VOID = 398,                     /* VOID  */
  YYSYMBOL_WHILE = 399,                    /* WHILE  */
  YYSYMBOL_BREAK = 400,                    /* BREAK  */
  YYSYMBOL_CONTINUE = 401,                 /* CONTINUE  */
  YYSYMBOL_DO = 402,                       /* DO  */
  YYSYMBOL_ELSE = 403,                     /* ELSE  */
  YYSYMBOL_FOR = 404,                      /* FOR  */
  YYSYMBOL_IF = 405,                       /* IF  */
  YYSYMBOL_DISCARD = 406,                  /* DISCARD  */
  YYSYMBOL_RETURN = 407,                   /* RETURN  */
  YYSYMBOL_SWITCH = 408,                   /* SWITCH  */
  YYSYMBOL_CASE = 409,                     /* CASE  */
  YYSYMBOL_DEFAULT = 410,                  /* DEFAULT  */
  YYSYMBOL_TERMINATE_INVOCATION = 411,     /* TERMINATE_INVOCATION  */
  YYSYMBOL_TERMINATE_RAY = 412,            /* TERMINATE_RAY  */
  YYSYMBOL_IGNORE_INTERSECTION = 413,      /* IGNORE_INTERSECTION  */
  YYSYMBOL_UNIFORM = 414,                  /* UNIFORM  */
  YYSYMBOL_SHARED = 415,                   /* SHARED  */
  YYSYMBOL_BUFFER = 416,                   /* BUFFER  */
  YYSYMBOL_TILEIMAGEEXT = 417,             /* TILEIMAGEEXT  */
  YYSYMBOL_FLAT = 418,                     /* FLAT  */
  YYSYMBOL_SMOOTH = 419,                   /* SMOOTH  */
  YYSYMBOL_LAYOUT = 420,                   /* LAYOUT  */
  YYSYMBOL_DOUBLECONSTANT = 421,           /* DOUBLECONSTANT  */
  YYSYMBOL_INT16CONSTANT = 422,            /* INT16CONSTANT  */
  YYSYMBOL_UINT16CONSTANT = 423,           /* UINT16CONSTANT  */
  YYSYMBOL_FLOAT16CONSTANT = 424,          /* FLOAT16CONSTANT  */
  YYSYMBOL_INT32CONSTANT = 425,            /* INT32CONSTANT  */
  YYSYMBOL_UINT32CONSTANT = 426,           /* UINT32CONSTANT  */
  YYSYMBOL_INT64CONSTANT = 427,            /* INT64CONSTANT  */
  YYSYMBOL_UINT64CONSTANT = 428,           /* UINT64CONSTANT  */
  YYSYMBOL_SUBROUTINE = 429,               /* SUBROUTINE  */
  YYSYMBOL_DEMOTE = 430,                   /* DEMOTE  */
  YYSYMBOL_PAYLOADNV = 431,                /* PAYLOADNV  */
  YYSYMBOL_PAYLOADINNV = 432,              /* PAYLOADINNV  */
  YYSYMBOL_HITATTRNV = 433,                /* HITATTRNV  */
  YYSYMBOL_CALLDATANV = 434,               /* CALLDATANV  */
  YYSYMBOL_CALLDATAINNV = 435,             /* CALLDATAINNV  */
  YYSYMBOL_PAYLOADEXT = 436,               /* PAYLOADEXT  */
  YYSYMBOL_PAYLOADINEXT = 437,             /* PAYLOADINEXT  */
  YYSYMBOL_HITATTREXT = 438,               /* HITATTREXT  */
  YYSYMBOL_CALLDATAEXT = 439,              /* CALLDATAEXT  */
  YYSYMBOL_CALLDATAINEXT = 440,            /* CALLDATAINEXT  */
  YYSYMBOL_PATCH = 441,                    /* PATCH  */
  YYSYMBOL_SAMPLE = 442,                   /* SAMPLE  */
  YYSYMBOL_NONUNIFORM = 443,               /* NONUNIFORM  */
  YYSYMBOL_COHERENT = 444,                 /* COHERENT  */
  YYSYMBOL_VOLATILE = 445,                 /* VOLATILE  */
  YYSYMBOL_RESTRICT = 446,                 /* RESTRICT  */
  YYSYMBOL_READONLY = 447,                 /* READONLY  */
  YYSYMBOL_WRITEONLY = 448,                /* WRITEONLY  */
  YYSYMBOL_DEVICECOHERENT = 449,           /* DEVICECOHERENT  */
  YYSYMBOL_QUEUEFAMILYCOHERENT = 450,      /* QUEUEFAMILYCOHERENT  */
  YYSYMBOL_WORKGROUPCOHERENT = 451,        /* WORKGROUPCOHERENT  */
  YYSYMBOL_SUBGROUPCOHERENT = 452,         /* SUBGROUPCOHERENT  */
  YYSYMBOL_NONPRIVATE = 453,               /* NONPRIVATE  */
  YYSYMBOL_SHADERCALLCOHERENT = 454,       /* SHADERCALLCOHERENT  */
  YYSYMBOL_NOPERSPECTIVE = 455,            /* NOPERSPECTIVE  */
  YYSYMBOL_EXPLICITINTERPAMD = 456,        /* EXPLICITINTERPAMD  */
  YYSYMBOL_PERVERTEXEXT = 457,             /* PERVERTEXEXT  */
  YYSYMBOL_PERVERTEXNV = 458,              /* PERVERTEXNV  */
  YYSYMBOL_PERPRIMITIVENV = 459,           /* PERPRIMITIVENV  */
  YYSYMBOL_PERVIEWNV = 460,                /* PERVIEWNV  */
  YYSYMBOL_PERTASKNV = 461,                /* PERTASKNV  */
  YYSYMBOL_PERPRIMITIVEEXT = 462,          /* PERPRIMITIVEEXT  */
  YYSYMBOL_TASKPAYLOADWORKGROUPEXT = 463,  /* TASKPAYLOADWORKGROUPEXT  */
  YYSYMBOL_PRECISE = 464,                  /* PRECISE  */
  YYSYMBOL_YYACCEPT = 465,                 /* $accept  */
  YYSYMBOL_variable_identifier = 466,      /* variable_identifier  */
  YYSYMBOL_primary_expression = 467,       /* primary_expression  */
  YYSYMBOL_postfix_expression = 468,       /* postfix_expression  */
  YYSYMBOL_integer_expression = 469,       /* integer_expression  */
  YYSYMBOL_function_call = 470,            /* function_call  */
  YYSYMBOL_function_call_or_method = 471,  /* function_call_or_method  */
  YYSYMBOL_function_call_generic = 472,    /* function_call_generic  */
  YYSYMBOL_function_call_header_no_parameters = 473, /* function_call_header_no_parameters  */
  YYSYMBOL_function_call_header_with_parameters = 474, /* function_call_header_with_parameters  */
  YYSYMBOL_function_call_header = 475,     /* function_call_header  */
  YYSYMBOL_function_identifier = 476,      /* function_identifier  */
  YYSYMBOL_unary_expression = 477,         /* unary_expression  */
  YYSYMBOL_unary_operator = 478,           /* unary_operator  */
  YYSYMBOL_multiplicative_expression = 479, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 480,      /* additive_expression  */
  YYSYMBOL_shift_expression = 481,         /* shift_expression  */
  YYSYMBOL_relational_expression = 482,    /* relational_expression  */
  YYSYMBOL_equality_expression = 483,      /* equality_expression  */
  YYSYMBOL_and_expression = 484,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 485,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 486,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 487,   /* logical_and_expression  */
  YYSYMBOL_logical_xor_expression = 488,   /* logical_xor_expression  */
  YYSYMBOL_logical_or_expression = 489,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 490,   /* conditional_expression  */
  YYSYMBOL_491_1 = 491,                    /* $@1  */
  YYSYMBOL_assignment_expression = 492,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 493,      /* assignment_operator  */
  YYSYMBOL_expression = 494,               /* expression  */
  YYSYMBOL_constant_expression = 495,      /* constant_expression  */
  YYSYMBOL_declaration = 496,              /* declaration  */
  YYSYMBOL_block_structure = 497,          /* block_structure  */
  YYSYMBOL_498_2 = 498,                    /* $@2  */
  YYSYMBOL_identifier_list = 499,          /* identifier_list  */
  YYSYMBOL_function_prototype = 500,       /* function_prototype  */
  YYSYMBOL_function_declarator = 501,      /* function_declarator  */
  YYSYMBOL_function_header_with_parameters = 502, /* function_header_with_parameters  */
  YYSYMBOL_function_header = 503,          /* function_header  */
  YYSYMBOL_parameter_declarator = 504,     /* parameter_declarator  */
  YYSYMBOL_parameter_declaration = 505,    /* parameter_declaration  */
  YYSYMBOL_parameter_type_specifier = 506, /* parameter_type_specifier  */
  YYSYMBOL_init_declarator_list = 507,     /* init_declarator_list  */
  YYSYMBOL_single_declaration = 508,       /* single_declaration  */
  YYSYMBOL_fully_specified_type = 509,     /* fully_specified_type  */
  YYSYMBOL_invariant_qualifier = 510,      /* invariant_qualifier  */
  YYSYMBOL_interpolation_qualifier = 511,  /* interpolation_qualifier  */
  YYSYMBOL_layout_qualifier = 512,         /* layout_qualifier  */
  YYSYMBOL_layout_qualifier_id_list = 513, /* layout_qualifier_id_list  */
  YYSYMBOL_layout_qualifier_id = 514,      /* layout_qualifier_id  */
  YYSYMBOL_precise_qualifier = 515,        /* precise_qualifier  */
  YYSYMBOL_type_qualifier = 516,           /* type_qualifier  */
  YYSYMBOL_single_type_qualifier = 517,    /* single_type_qualifier  */
  YYSYMBOL_storage_qualifier = 518,        /* storage_qualifier  */
  YYSYMBOL_non_uniform_qualifier = 519,    /* non_uniform_qualifier  */
  YYSYMBOL_type_name_list = 520,           /* type_name_list  */
  YYSYMBOL_type_specifier = 521,           /* type_specifier  */
  YYSYMBOL_array_specifier = 522,          /* array_specifier  */
  YYSYMBOL_type_parameter_specifier_opt = 523, /* type_parameter_specifier_opt  */
  YYSYMBOL_type_parameter_specifier = 524, /* type_parameter_specifier  */
  YYSYMBOL_type_parameter_specifier_list = 525, /* type_parameter_specifier_list  */
  YYSYMBOL_type_specifier_nonarray = 526,  /* type_specifier_nonarray  */
  YYSYMBOL_precision_qualifier = 527,      /* precision_qualifier  */
  YYSYMBOL_struct_specifier = 528,         /* struct_specifier  */
  YYSYMBOL_529_3 = 529,                    /* $@3  */
  YYSYMBOL_530_4 = 530,                    /* $@4  */
  YYSYMBOL_struct_declaration_list = 531,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 532,       /* struct_declaration  */
  YYSYMBOL_struct_declarator_list = 533,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 534,        /* struct_declarator  */
  YYSYMBOL_initializer = 535,              /* initializer  */
  YYSYMBOL_initializer_list = 536,         /* initializer_list  */
  YYSYMBOL_declaration_statement = 537,    /* declaration_statement  */
  YYSYMBOL_statement = 538,                /* statement  */
  YYSYMBOL_simple_statement = 539,         /* simple_statement  */
  YYSYMBOL_demote_statement = 540,         /* demote_statement  */
  YYSYMBOL_compound_statement = 541,       /* compound_statement  */
  YYSYMBOL_542_5 = 542,                    /* $@5  */
  YYSYMBOL_543_6 = 543,                    /* $@6  */
  YYSYMBOL_statement_no_new_scope = 544,   /* statement_no_new_scope  */
  YYSYMBOL_statement_scoped = 545,         /* statement_scoped  */
  YYSYMBOL_546_7 = 546,                    /* $@7  */
  YYSYMBOL_547_8 = 547,                    /* $@8  */
  YYSYMBOL_compound_statement_no_new_scope = 548, /* compound_statement_no_new_scope  */
  YYSYMBOL_statement_list = 549,           /* statement_list  */
  YYSYMBOL_expression_statement = 550,     /* expression_statement  */
  YYSYMBOL_selection_statement = 551,      /* selection_statement  */
  YYSYMBOL_selection_statement_nonattributed = 552, /* selection_statement_nonattributed  */
  YYSYMBOL_selection_rest_statement = 553, /* selection_rest_statement  */
  YYSYMBOL_condition = 554,                /* condition  */
  YYSYMBOL_switch_statement = 555,         /* switch_statement  */
  YYSYMBOL_switch_statement_nonattributed = 556, /* switch_statement_nonattributed  */
  YYSYMBOL_557_9 = 557,                    /* $@9  */
  YYSYMBOL_switch_statement_list = 558,    /* switch_statement_list  */
  YYSYMBOL_case_label = 559,               /* case_label  */
  YYSYMBOL_iteration_statement = 560,      /* iteration_statement  */
  YYSYMBOL_iteration_statement_nonattributed = 561, /* iteration_statement_nonattributed  */
  YYSYMBOL_562_10 = 562,                   /* $@10  */
  YYSYMBOL_563_11 = 563,                   /* $@11  */
  YYSYMBOL_564_12 = 564,                   /* $@12  */
  YYSYMBOL_for_init_statement = 565,       /* for_init_statement  */
  YYSYMBOL_conditionopt = 566,             /* conditionopt  */
  YYSYMBOL_for_rest_statement = 567,       /* for_rest_statement  */
  YYSYMBOL_jump_statement = 568,           /* jump_statement  */
  YYSYMBOL_translation_unit = 569,         /* translation_unit  */
  YYSYMBOL_external_declaration = 570,     /* external_declaration  */
  YYSYMBOL_function_definition = 571,      /* function_definition  */
  YYSYMBOL_572_13 = 572,                   /* $@13  */
  YYSYMBOL_attribute = 573,                /* attribute  */
  YYSYMBOL_attribute_list = 574,           /* attribute_list  */
  YYSYMBOL_single_attribute = 575,         /* single_attribute  */
  YYSYMBOL_spirv_requirements_list = 576,  /* spirv_requirements_list  */
  YYSYMBOL_spirv_requirements_parameter = 577, /* spirv_requirements_parameter  */
  YYSYMBOL_spirv_extension_list = 578,     /* spirv_extension_list  */
  YYSYMBOL_spirv_capability_list = 579,    /* spirv_capability_list  */
  YYSYMBOL_spirv_execution_mode_qualifier = 580, /* spirv_execution_mode_qualifier  */
  YYSYMBOL_spirv_execution_mode_parameter_list = 581, /* spirv_execution_mode_parameter_list  */
  YYSYMBOL_spirv_execution_mode_parameter = 582, /* spirv_execution_mode_parameter  */
  YYSYMBOL_spirv_execution_mode_id_parameter_list = 583, /* spirv_execution_mode_id_parameter_list  */
  YYSYMBOL_spirv_storage_class_qualifier = 584, /* spirv_storage_class_qualifier  */
  YYSYMBOL_spirv_decorate_qualifier = 585, /* spirv_decorate_qualifier  */
  YYSYMBOL_spirv_decorate_parameter_list = 586, /* spirv_decorate_parameter_list  */
  YYSYMBOL_spirv_decorate_parameter = 587, /* spirv_decorate_parameter  */
  YYSYMBOL_spirv_decorate_id_parameter_list = 588, /* spirv_decorate_id_parameter_list  */
  YYSYMBOL_spirv_decorate_id_parameter = 589, /* spirv_decorate_id_parameter  */
  YYSYMBOL_spirv_decorate_string_parameter_list = 590, /* spirv_decorate_string_parameter_list  */
  YYSYMBOL_spirv_type_specifier = 591,     /* spirv_type_specifier  */
  YYSYMBOL_spirv_type_parameter_list = 592, /* spirv_type_parameter_list  */
  YYSYMBOL_spirv_type_parameter = 593,     /* spirv_type_parameter  */
  YYSYMBOL_spirv_instruction_qualifier = 594, /* spirv_instruction_qualifier  */
  YYSYMBOL_spirv_instruction_qualifier_list = 595, /* spirv_instruction_qualifier_list  */
  YYSYMBOL_spirv_instruction_qualifier_id = 596 /* spirv_instruction_qualifier_id  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 136 "MachineIndependent/glslang.y"


/* windows only pragma */
#ifdef _MSC_VER
    #pragma warning(disable : 4065)
    #pragma warning(disable : 4127)
    #pragma warning(disable : 4244)
#endif

#define parseContext (*pParseContext)
#define yyerror(context, msg) context->parserError(msg)

extern int yylex(YYSTYPE*, TParseContext&);


#line 743 "MachineIndependent/glslang_tab.cpp"


#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  452
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   12700

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  465
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  132
/* YYNRULES -- Number of rules.  */
#define YYNRULES  699
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  945

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   719


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   395,   395,   401,   404,   409,   412,   415,   419,   423,
     426,   430,   434,   438,   442,   446,   450,   456,   464,   467,
     470,   473,   476,   481,   489,   496,   503,   509,   513,   520,
     523,   529,   536,   546,   554,   559,   587,   596,   602,   606,
     610,   630,   631,   632,   633,   639,   640,   645,   650,   659,
     660,   665,   673,   674,   680,   689,   690,   695,   700,   705,
     713,   714,   723,   735,   736,   745,   746,   755,   756,   765,
     766,   774,   775,   783,   784,   792,   793,   793,   811,   812,
     828,   832,   836,   840,   845,   849,   853,   857,   861,   865,
     869,   876,   879,   890,   897,   903,   910,   916,   921,   928,
     932,   936,   940,   945,   950,   959,   959,   970,   974,   981,
     985,   991,   997,  1007,  1010,  1017,  1025,  1045,  1068,  1083,
    1108,  1119,  1129,  1139,  1149,  1158,  1161,  1165,  1169,  1174,
    1182,  1189,  1194,  1199,  1204,  1213,  1223,  1250,  1259,  1266,
    1274,  1281,  1288,  1296,  1304,  1314,  1324,  1331,  1342,  1348,
    1351,  1358,  1362,  1366,  1375,  1385,  1388,  1399,  1402,  1405,
    1409,  1413,  1418,  1422,  1425,  1430,  1434,  1439,  1448,  1452,
    1457,  1463,  1469,  1476,  1481,  1486,  1494,  1500,  1512,  1526,
    1532,  1537,  1545,  1553,  1561,  1569,  1577,  1585,  1593,  1601,
    1609,  1616,  1623,  1627,  1632,  1637,  1642,  1647,  1652,  1657,
    1661,  1665,  1669,  1673,  1679,  1685,  1697,  1704,  1707,  1716,
    1723,  1734,  1739,  1747,  1751,  1761,  1764,  1770,  1776,  1781,
    1789,  1799,  1803,  1807,  1811,  1816,  1820,  1825,  1830,  1835,
    1840,  1845,  1850,  1855,  1860,  1865,  1871,  1877,  1883,  1888,
    1893,  1898,  1903,  1908,  1913,  1918,  1923,  1928,  1933,  1938,
    1944,  1951,  1956,  1961,  1966,  1971,  1976,  1981,  1986,  1991,
    1996,  2001,  2006,  2014,  2022,  2030,  2036,  2042,  2048,  2054,
    2060,  2066,  2072,  2078,  2084,  2090,  2096,  2102,  2108,  2114,
    2120,  2126,  2132,  2138,  2144,  2150,  2156,  2162,  2168,  2174,
    2180,  2186,  2192,  2198,  2204,  2210,  2216,  2222,  2228,  2236,
    2244,  2252,  2260,  2268,  2276,  2284,  2292,  2300,  2308,  2316,
    2324,  2330,  2336,  2342,  2348,  2354,  2360,  2366,  2372,  2378,
    2384,  2390,  2396,  2402,  2408,  2414,  2420,  2426,  2432,  2438,
    2444,  2450,  2456,  2462,  2468,  2474,  2480,  2486,  2492,  2498,
    2504,  2510,  2516,  2522,  2528,  2534,  2540,  2544,  2548,  2552,
    2557,  2563,  2568,  2573,  2578,  2583,  2588,  2593,  2599,  2604,
    2609,  2614,  2619,  2624,  2630,  2636,  2642,  2648,  2654,  2660,
    2666,  2672,  2678,  2684,  2690,  2696,  2702,  2708,  2713,  2718,
    2723,  2728,  2733,  2738,  2744,  2749,  2754,  2759,  2764,  2769,
    2774,  2779,  2785,  2790,  2795,  2800,  2805,  2810,  2815,  2820,
    2825,  2830,  2835,  2840,  2845,  2850,  2855,  2861,  2866,  2871,
    2877,  2883,  2888,  2893,  2898,  2904,  2909,  2914,  2919,  2925,
    2930,  2935,  2940,  2946,  2951,  2956,  2961,  2967,  2973,  2979,
    2985,  2990,  2996,  3002,  3008,  3013,  3018,  3023,  3028,  3033,
    3039,  3044,  3049,  3054,  3060,  3065,  3070,  3075,  3081,  3086,
    3091,  3096,  3102,  3107,  3112,  3117,  3123,  3128,  3133,  3138,
    3144,  3149,  3154,  3159,  3165,  3170,  3175,  3180,  3186,  3191,
    3196,  3201,  3207,  3212,  3217,  3222,  3228,  3233,  3238,  3243,
    3249,  3254,  3259,  3264,  3270,  3275,  3280,  3285,  3291,  3296,
    3301,  3306,  3312,  3317,  3322,  3327,  3333,  3338,  3343,  3348,
    3353,  3358,  3363,  3368,  3373,  3378,  3383,  3388,  3393,  3398,
    3403,  3408,  3413,  3418,  3423,  3428,  3433,  3438,  3443,  3448,
    3453,  3459,  3465,  3471,  3477,  3483,  3489,  3495,  3502,  3509,
    3515,  3521,  3527,  3533,  3540,  3547,  3554,  3561,  3565,  3570,
    3575,  3591,  3596,  3601,  3609,  3609,  3620,  3620,  3630,  3633,
    3646,  3668,  3695,  3699,  3705,  3710,  3721,  3725,  3731,  3737,
    3748,  3751,  3758,  3762,  3763,  3769,  3770,  3771,  3772,  3773,
    3774,  3775,  3777,  3783,  3792,  3793,  3797,  3793,  3809,  3810,
    3814,  3814,  3821,  3821,  3835,  3838,  3846,  3854,  3865,  3866,
    3870,  3874,  3882,  3889,  3893,  3901,  3905,  3918,  3922,  3930,
    3930,  3950,  3953,  3959,  3971,  3983,  3987,  3995,  3995,  4010,
    4010,  4028,  4028,  4049,  4052,  4058,  4061,  4067,  4071,  4078,
    4083,  4088,  4095,  4098,  4102,  4107,  4111,  4121,  4125,  4134,
    4137,  4141,  4150,  4150,  4192,  4197,  4200,  4205,  4208,  4215,
    4218,  4223,  4226,  4231,  4234,  4239,  4242,  4247,  4251,  4256,
    4260,  4265,  4269,  4276,  4279,  4284,  4287,  4290,  4293,  4296,
    4301,  4310,  4321,  4326,  4334,  4338,  4343,  4347,  4352,  4356,
    4361,  4365,  4372,  4375,  4380,  4383,  4386,  4389,  4394,  4397,
    4402,  4408,  4411,  4414,  4417,  4422,  4426,  4431,  4435,  4440,
    4444,  4451,  4454,  4459,  4464,  4467,  4473,  4476,  4481,  4484
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "CONST", "BOOL", "INT",
  "UINT", "FLOAT", "BVEC2", "BVEC3", "BVEC4", "IVEC2", "IVEC3", "IVEC4",
  "UVEC2", "UVEC3", "UVEC4", "VEC2", "VEC3", "VEC4", "MAT2", "MAT3",
  "MAT4", "MAT2X2", "MAT2X3", "MAT2X4", "MAT3X2", "MAT3X3", "MAT3X4",
  "MAT4X2", "MAT4X3", "MAT4X4", "SAMPLER2D", "SAMPLER3D", "SAMPLERCUBE",
  "SAMPLER2DSHADOW", "SAMPLERCUBESHADOW", "SAMPLER2DARRAY",
  "SAMPLER2DARRAYSHADOW", "ISAMPLER2D", "ISAMPLER3D", "ISAMPLERCUBE",
  "ISAMPLER2DARRAY", "USAMPLER2D", "USAMPLER3D", "USAMPLERCUBE",
  "USAMPLER2DARRAY", "SAMPLER", "SAMPLERSHADOW", "TEXTURE2D", "TEXTURE3D",
  "TEXTURECUBE", "TEXTURE2DARRAY", "ITEXTURE2D", "ITEXTURE3D",
  "ITEXTURECUBE", "ITEXTURE2DARRAY", "UTEXTURE2D", "UTEXTURE3D",
  "UTEXTURECUBE", "UTEXTURE2DARRAY", "ATTRIBUTE", "VARYING", "FLOAT16_T",
  "FLOAT32_T", "DOUBLE", "FLOAT64_T", "INT64_T", "UINT64_T", "INT32_T",
  "UINT32_T", "INT16_T", "UINT16_T", "INT8_T", "UINT8_T", "I64VEC2",
  "I64VEC3", "I64VEC4", "U64VEC2", "U64VEC3", "U64VEC4", "I32VEC2",
  "I32VEC3", "I32VEC4", "U32VEC2", "U32VEC3", "U32VEC4", "I16VEC2",
  "I16VEC3", "I16VEC4", "U16VEC2", "U16VEC3", "U16VEC4", "I8VEC2",
  "I8VEC3", "I8VEC4", "U8VEC2", "U8VEC3", "U8VEC4", "DVEC2", "DVEC3",
  "DVEC4", "DMAT2", "DMAT3", "DMAT4", "F16VEC2", "F16VEC3", "F16VEC4",
  "F16MAT2", "F16MAT3", "F16MAT4", "F32VEC2", "F32VEC3", "F32VEC4",
  "F32MAT2", "F32MAT3", "F32MAT4", "F64VEC2", "F64VEC3", "F64VEC4",
  "F64MAT2", "F64MAT3", "F64MAT4", "DMAT2X2", "DMAT2X3", "DMAT2X4",
  "DMAT3X2", "DMAT3X3", "DMAT3X4", "DMAT4X2", "DMAT4X3", "DMAT4X4",
  "F16MAT2X2", "F16MAT2X3", "F16MAT2X4", "F16MAT3X2", "F16MAT3X3",
  "F16MAT3X4", "F16MAT4X2", "F16MAT4X3", "F16MAT4X4", "F32MAT2X2",
  "F32MAT2X3", "F32MAT2X4", "F32MAT3X2", "F32MAT3X3", "F32MAT3X4",
  "F32MAT4X2", "F32MAT4X3", "F32MAT4X4", "F64MAT2X2", "F64MAT2X3",
  "F64MAT2X4", "F64MAT3X2", "F64MAT3X3", "F64MAT3X4", "F64MAT4X2",
  "F64MAT4X3", "F64MAT4X4", "ATOMIC_UINT", "ACCSTRUCTNV", "ACCSTRUCTEXT",
  "RAYQUERYEXT", "FCOOPMATNV", "ICOOPMATNV", "UCOOPMATNV", "COOPMAT",
  "HITOBJECTNV", "HITOBJECTATTRNV", "SAMPLERCUBEARRAY",
  "SAMPLERCUBEARRAYSHADOW", "ISAMPLERCUBEARRAY", "USAMPLERCUBEARRAY",
  "SAMPLER1D", "SAMPLER1DARRAY", "SAMPLER1DARRAYSHADOW", "ISAMPLER1D",
  "SAMPLER1DSHADOW", "SAMPLER2DRECT", "SAMPLER2DRECTSHADOW",
  "ISAMPLER2DRECT", "USAMPLER2DRECT", "SAMPLERBUFFER", "ISAMPLERBUFFER",
  "USAMPLERBUFFER", "SAMPLER2DMS", "ISAMPLER2DMS", "USAMPLER2DMS",
  "SAMPLER2DMSARRAY", "ISAMPLER2DMSARRAY", "USAMPLER2DMSARRAY",
  "SAMPLEREXTERNALOES", "SAMPLEREXTERNAL2DY2YEXT", "ISAMPLER1DARRAY",
  "USAMPLER1D", "USAMPLER1DARRAY", "F16SAMPLER1D", "F16SAMPLER2D",
  "F16SAMPLER3D", "F16SAMPLER2DRECT", "F16SAMPLERCUBE",
  "F16SAMPLER1DARRAY", "F16SAMPLER2DARRAY", "F16SAMPLERCUBEARRAY",
  "F16SAMPLERBUFFER", "F16SAMPLER2DMS", "F16SAMPLER2DMSARRAY",
  "F16SAMPLER1DSHADOW", "F16SAMPLER2DSHADOW", "F16SAMPLER1DARRAYSHADOW",
  "F16SAMPLER2DARRAYSHADOW", "F16SAMPLER2DRECTSHADOW",
  "F16SAMPLERCUBESHADOW", "F16SAMPLERCUBEARRAYSHADOW", "IMAGE1D",
  "IIMAGE1D", "UIMAGE1D", "IMAGE2D", "IIMAGE2D", "UIMAGE2D", "IMAGE3D",
  "IIMAGE3D", "UIMAGE3D", "IMAGE2DRECT", "IIMAGE2DRECT", "UIMAGE2DRECT",
  "IMAGECUBE", "IIMAGECUBE", "UIMAGECUBE", "IMAGEBUFFER", "IIMAGEBUFFER",
  "UIMAGEBUFFER", "IMAGE1DARRAY", "IIMAGE1DARRAY", "UIMAGE1DARRAY",
  "IMAGE2DARRAY", "IIMAGE2DARRAY", "UIMAGE2DARRAY", "IMAGECUBEARRAY",
  "IIMAGECUBEARRAY", "UIMAGECUBEARRAY", "IMAGE2DMS", "IIMAGE2DMS",
  "UIMAGE2DMS", "IMAGE2DMSARRAY", "IIMAGE2DMSARRAY", "UIMAGE2DMSARRAY",
  "F16IMAGE1D", "F16IMAGE2D", "F16IMAGE3D", "F16IMAGE2DRECT",
  "F16IMAGECUBE", "F16IMAGE1DARRAY", "F16IMAGE2DARRAY",
  "F16IMAGECUBEARRAY", "F16IMAGEBUFFER", "F16IMAGE2DMS",
  "F16IMAGE2DMSARRAY", "I64IMAGE1D", "U64IMAGE1D", "I64IMAGE2D",
  "U64IMAGE2D", "I64IMAGE3D", "U64IMAGE3D", "I64IMAGE2DRECT",
  "U64IMAGE2DRECT", "I64IMAGECUBE", "U64IMAGECUBE", "I64IMAGEBUFFER",
  "U64IMAGEBUFFER", "I64IMAGE1DARRAY", "U64IMAGE1DARRAY",
  "I64IMAGE2DARRAY", "U64IMAGE2DARRAY", "I64IMAGECUBEARRAY",
  "U64IMAGECUBEARRAY", "I64IMAGE2DMS", "U64IMAGE2DMS", "I64IMAGE2DMSARRAY",
  "U64IMAGE2DMSARRAY", "TEXTURECUBEARRAY", "ITEXTURECUBEARRAY",
  "UTEXTURECUBEARRAY", "TEXTURE1D", "ITEXTURE1D", "UTEXTURE1D",
  "TEXTURE1DARRAY", "ITEXTURE1DARRAY", "UTEXTURE1DARRAY", "TEXTURE2DRECT",
  "ITEXTURE2DRECT", "UTEXTURE2DRECT", "TEXTUREBUFFER", "ITEXTUREBUFFER",
  "UTEXTUREBUFFER", "TEXTURE2DMS", "ITEXTURE2DMS", "UTEXTURE2DMS",
  "TEXTURE2DMSARRAY", "ITEXTURE2DMSARRAY", "UTEXTURE2DMSARRAY",
  "F16TEXTURE1D", "F16TEXTURE2D", "F16TEXTURE3D", "F16TEXTURE2DRECT",
  "F16TEXTURECUBE", "F16TEXTURE1DARRAY", "F16TEXTURE2DARRAY",
  "F16TEXTURECUBEARRAY", "F16TEXTUREBUFFER", "F16TEXTURE2DMS",
  "F16TEXTURE2DMSARRAY", "SUBPASSINPUT", "SUBPASSINPUTMS", "ISUBPASSINPUT",
  "ISUBPASSINPUTMS", "USUBPASSINPUT", "USUBPASSINPUTMS", "F16SUBPASSINPUT",
  "F16SUBPASSINPUTMS", "SPIRV_INSTRUCTION", "SPIRV_EXECUTION_MODE",
  "SPIRV_EXECUTION_MODE_ID", "SPIRV_DECORATE", "SPIRV_DECORATE_ID",
  "SPIRV_DECORATE_STRING", "SPIRV_TYPE", "SPIRV_STORAGE_CLASS",
  "SPIRV_BY_REFERENCE", "SPIRV_LITERAL", "ATTACHMENTEXT", "IATTACHMENTEXT",
  "UATTACHMENTEXT", "LEFT_OP", "RIGHT_OP", "INC_OP", "DEC_OP", "LE_OP",
  "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "XOR_OP", "MUL_ASSIGN",
  "DIV_ASSIGN", "ADD_ASSIGN", "MOD_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "SUB_ASSIGN", "STRING_LITERAL",
  "LEFT_PAREN", "RIGHT_PAREN", "LEFT_BRACKET", "RIGHT_BRACKET",
  "LEFT_BRACE", "RIGHT_BRACE", "DOT", "COMMA", "COLON", "EQUAL",
  "SEMICOLON", "BANG", "DASH", "TILDE", "PLUS", "STAR", "SLASH", "PERCENT",
  "LEFT_ANGLE", "RIGHT_ANGLE", "VERTICAL_BAR", "CARET", "AMPERSAND",
  "QUESTION", "INVARIANT", "HIGH_PRECISION", "MEDIUM_PRECISION",
  "LOW_PRECISION", "PRECISION", "PACKED", "RESOURCE", "SUPERP",
  "FLOATCONSTANT", "INTCONSTANT", "UINTCONSTANT", "BOOLCONSTANT",
  "IDENTIFIER", "TYPE_NAME", "CENTROID", "IN", "OUT", "INOUT", "STRUCT",
  "VOID", "WHILE", "BREAK", "CONTINUE", "DO", "ELSE", "FOR", "IF",
  "DISCARD", "RETURN", "SWITCH", "CASE", "DEFAULT", "TERMINATE_INVOCATION",
  "TERMINATE_RAY", "IGNORE_INTERSECTION", "UNIFORM", "SHARED", "BUFFER",
  "TILEIMAGEEXT", "FLAT", "SMOOTH", "LAYOUT", "DOUBLECONSTANT",
  "INT16CONSTANT", "UINT16CONSTANT", "FLOAT16CONSTANT", "INT32CONSTANT",
  "UINT32CONSTANT", "INT64CONSTANT", "UINT64CONSTANT", "SUBROUTINE",
  "DEMOTE", "PAYLOADNV", "PAYLOADINNV", "HITATTRNV", "CALLDATANV",
  "CALLDATAINNV", "PAYLOADEXT", "PAYLOADINEXT", "HITATTREXT",
  "CALLDATAEXT", "CALLDATAINEXT", "PATCH", "SAMPLE", "NONUNIFORM",
  "COHERENT", "VOLATILE", "RESTRICT", "READONLY", "WRITEONLY",
  "DEVICECOHERENT", "QUEUEFAMILYCOHERENT", "WORKGROUPCOHERENT",
  "SUBGROUPCOHERENT", "NONPRIVATE", "SHADERCALLCOHERENT", "NOPERSPECTIVE",
  "EXPLICITINTERPAMD", "PERVERTEXEXT", "PERVERTEXNV", "PERPRIMITIVENV",
  "PERVIEWNV", "PERTASKNV", "PERPRIMITIVEEXT", "TASKPAYLOADWORKGROUPEXT",
  "PRECISE", "$accept", "variable_identifier", "primary_expression",
  "postfix_expression", "integer_expression", "function_call",
  "function_call_or_method", "function_call_generic",
  "function_call_header_no_parameters",
  "function_call_header_with_parameters", "function_call_header",
  "function_identifier", "unary_expression", "unary_operator",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_xor_expression",
  "logical_or_expression", "conditional_expression", "$@1",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "block_structure", "$@2",
  "identifier_list", "function_prototype", "function_declarator",
  "function_header_with_parameters", "function_header",
  "parameter_declarator", "parameter_declaration",
  "parameter_type_specifier", "init_declarator_list", "single_declaration",
  "fully_specified_type", "invariant_qualifier", "interpolation_qualifier",
  "layout_qualifier", "layout_qualifier_id_list", "layout_qualifier_id",
  "precise_qualifier", "type_qualifier", "single_type_qualifier",
  "storage_qualifier", "non_uniform_qualifier", "type_name_list",
  "type_specifier", "array_specifier", "type_parameter_specifier_opt",
  "type_parameter_specifier", "type_parameter_specifier_list",
  "type_specifier_nonarray", "precision_qualifier", "struct_specifier",
  "$@3", "$@4", "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "initializer",
  "initializer_list", "declaration_statement", "statement",
  "simple_statement", "demote_statement", "compound_statement", "$@5",
  "$@6", "statement_no_new_scope", "statement_scoped", "$@7", "$@8",
  "compound_statement_no_new_scope", "statement_list",
  "expression_statement", "selection_statement",
  "selection_statement_nonattributed", "selection_rest_statement",
  "condition", "switch_statement", "switch_statement_nonattributed", "$@9",
  "switch_statement_list", "case_label", "iteration_statement",
  "iteration_statement_nonattributed", "$@10", "$@11", "$@12",
  "for_init_statement", "conditionopt", "for_rest_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "$@13", "attribute", "attribute_list",
  "single_attribute", "spirv_requirements_list",
  "spirv_requirements_parameter", "spirv_extension_list",
  "spirv_capability_list", "spirv_execution_mode_qualifier",
  "spirv_execution_mode_parameter_list", "spirv_execution_mode_parameter",
  "spirv_execution_mode_id_parameter_list",
  "spirv_storage_class_qualifier", "spirv_decorate_qualifier",
  "spirv_decorate_parameter_list", "spirv_decorate_parameter",
  "spirv_decorate_id_parameter_list", "spirv_decorate_id_parameter",
  "spirv_decorate_string_parameter_list", "spirv_type_specifier",
  "spirv_type_parameter_list", "spirv_type_parameter",
  "spirv_instruction_qualifier", "spirv_instruction_qualifier_list",
  "spirv_instruction_qualifier_id", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-835)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-581)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    4647,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -308,  -234,
    -209,  -202,  -195,  -130,  -128,   -76,  -835,  -835,  -835,  -835,
    -835,   -65,  -835,  -835,  -835,  -835,  -835,  -166,  -835,  -835,
    -835,  -835,  -835,  -315,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,   -71,   -30,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -333,  -193,
    -174,   -35,  7881,  -139,  -835,   -55,  -835,  -835,  -835,  -835,
    5571,  -835,  -835,  -835,  -835,   -36,  -835,  -835,   951,  -835,
    -835,  7881,   -27,  -835,  -835,  -835,  6033,   -52,  -140,  -135,
    -129,  -125,  -124,   -52,  -123,   -51, 12302,  -835,   -17,  -361,
     -47,  -835,  -316,  -835,   -14,   -11,  7881,  -835,  -835,  -835,
    7881,   -44,   -42,  -835,  -273,  -835,  -245,  -835,  -835, 10982,
      -9,  -835,  -835,  -835,    -6,   -38,  7881,  -835,   -13,    -8,
      -7,  -835,  -246,  -835,  -244,    -5,    -4,    -2,    -1,  -237,
       1,     3,     4,     5,     6,     8,  -233,    13,    10,    18,
    -227,  -835,    -3,  7881,  -835,    11,  -835,  -232,  -835,  -835,
    -230,  9222,  -835,  -304,  1413,  -835,  -835,  -835,  -835,  -835,
      -9,  -309,  -835,  9662,  -264,  -835,   -15,  -835,  -115, 10982,
   10982,  -835, 10982,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -276,  -835,  -835,  -835,    21,  -228, 11422,    19,
    -835, 10982,  -835,    25,  -324,    24,   -11,    27,  -835,  -311,
     -52,  -835,    14,  -835,  -319,    26,  -119, 10982,  -111,  -835,
    -148,  -110,  -158,  -102,    30,   -75,   -52,  -835, 11862,  -835,
     -73, 10982,    28,   -51,  -835,  7881,    15,  6495,  -835,  7881,
   10982,  -835,  -361,  -835,    16,  -835,  -835,   -40,  -262,  -282,
    -310,  -250,   -26,   -12,    20,    44,    45,  -305,    29,  -835,
   10102,  -835,    34,  -835,  -835,    35,    31,    33,  -835,    46,
      47,    54, 10542,    66, 10982,    36,    57,    59,    65,    67,
    -142,  -835,  -835,   -45,  -835,  -193,    76,    25,  -835,  -835,
    -835,  -835,  -835,  1875,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  5109,    24,  9662,  -255,  8342,  -835,  -835,
    9662,  7881,  -835,    42,  -835,  -835,  -835,  -212,  -835,  -835,
   10982,    43,  -835,  -835, 10982,    53,  -835,  -835,  -835, 10982,
    -835,  -835,  -835,  -331,  -835,  -835,  -208,    71,  -835,  -835,
    -835,  -835,  -835,  -835,  -201,  -835,  -200,  -835,  -835,  -199,
      77,  -835,  -835,  -835,  -835,  -198,  -835,  -187,  -835,  -835,
    -835,  -835,  -835,  -186,  -835,    79,  -835,  -185,    80,  -183,
      71,  -835,  -182,  -835,    82,    87,  -835,  -835,    15,    -9,
     -43,  -835,  -835,  -835,  6957,  -835,  -835,  -835, 10982, 10982,
   10982, 10982, 10982, 10982, 10982, 10982, 10982, 10982, 10982, 10982,
   10982, 10982, 10982, 10982, 10982, 10982, 10982,  -835,  -835,  -835,
      86,  -835,  2337,  -835,  -835,  -835,  2337,  -835, 10982,  -835,
    -835,   -41, 10982,  -167,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
   10982, 10982,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  9662,
    -835,  -835,   -72,  -835,  7419,  -835,  -835,    88,    83,  -835,
    -835,  -835,  -835,  -835,  -141,  -138,  -835,  -323,  -835,  -319,
    -835,  -319,  -835, 10982, 10982,  -835,  -148,  -835,  -148,  -835,
    -158,  -158,  -835,    93,    30,  -835, 11862,  -835, 10982,  -835,
    -835,   -39,    24,    15,  -835,  -835,  -835,  -835,  -835,   -40,
     -40,  -262,  -262,  -282,  -282,  -282,  -282,  -310,  -310,  -250,
     -26,   -12,    20,    44,    45, 10982,  -835,  2337,  4185,   -10,
    3723,  -175,  -835,  -173,  -835,  -835,  -835,  -835,  -835,  8782,
    -835,  -835,  -835,    97,  -835,    69,  -835,  -172,  -835,  -171,
    -835,  -164,  -835,  -163,  -835,  -162,  -144,  -835,  -835,  -835,
    -126,    94,    83,    62,    99,   103,  -835,  -835,  4185,   100,
    -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835, 10982,  -835,    96,  2799, 10982,  -835,    98,   105,    61,
     106,  3261,  -835,   107,  -835,  9662,  -835,  -835,  -835,  -143,
   10982,  2799,   100,  -835,  -835,  2337,  -835,   104,    83,  -835,
    -835,  2337,   102,  -835,  -835
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,   168,   225,   223,   224,   222,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   226,   227,   228,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     351,   352,   353,   354,   355,   356,   357,   377,   378,   379,
     380,   381,   382,   383,   392,   405,   406,   393,   394,   396,
     395,   397,   398,   399,   400,   401,   402,   403,   404,   177,
     178,   251,   252,   250,   253,   260,   261,   258,   259,   256,
     257,   254,   255,   283,   284,   285,   295,   296,   297,   280,
     281,   282,   292,   293,   294,   277,   278,   279,   289,   290,
     291,   274,   275,   276,   286,   287,   288,   262,   263,   264,
     298,   299,   300,   265,   266,   267,   310,   311,   312,   268,
     269,   270,   322,   323,   324,   271,   272,   273,   334,   335,
     336,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   349,   346,   347,
     348,   533,   534,   535,   536,   538,   182,   361,   362,   385,
     388,   350,   359,   360,   376,   358,   407,   408,   411,   412,
     413,   415,   416,   417,   419,   420,   421,   423,   424,   520,
     521,   384,   386,   387,   363,   364,   365,   409,   366,   370,
     371,   374,   414,   418,   422,   367,   368,   372,   373,   410,
     369,   375,   454,   456,   457,   458,   460,   461,   462,   464,
     465,   466,   468,   469,   470,   472,   473,   474,   476,   477,
     478,   480,   481,   482,   484,   485,   486,   488,   489,   490,
     492,   493,   494,   496,   497,   455,   459,   463,   467,   471,
     479,   483,   487,   475,   491,   495,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   519,   389,   390,
     391,   425,   434,   436,   430,   435,   437,   438,   440,   441,
     442,   444,   445,   446,   448,   449,   450,   452,   453,   426,
     427,   428,   439,   429,   431,   432,   433,   443,   447,   451,
     525,   526,   529,   530,   531,   532,   527,   528,     0,     0,
       0,     0,     0,     0,     0,     0,   166,   167,   522,   523,
     524,     0,   631,   137,   541,   542,   543,     0,   540,   172,
     170,   171,   169,     0,   221,   173,   175,   176,   174,   139,
     138,     0,   203,   184,   186,   181,   188,   190,   185,   187,
     183,   189,   191,   179,   180,   206,   192,   199,   200,   201,
     202,   193,   194,   195,   196,   197,   198,   140,   141,   143,
     142,   144,   146,   147,   145,   205,   154,   630,     0,   632,
       0,   114,   113,     0,   125,   130,   161,   160,   158,   162,
       0,   155,   157,   163,   135,   216,   159,   539,     0,   627,
     629,     0,     0,   164,   165,   537,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   546,     0,     0,
       0,    99,     0,    94,     0,   109,     0,   121,   115,   123,
       0,   124,     0,    97,   131,   102,     0,   156,   136,     0,
     209,   215,     1,   628,     0,     0,     0,    96,     0,     0,
       0,   639,     0,   696,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   637,
       0,   635,     0,     0,   544,   151,   153,     0,   149,   207,
       0,     0,   100,     0,     0,   633,   110,   116,   120,   122,
     118,   126,   117,     0,   132,   105,     0,   103,     0,     0,
       0,     9,     0,    43,    42,    44,    41,     5,     6,     7,
       8,     2,    16,    14,    15,    17,    10,    11,    12,    13,
       3,    18,    37,    20,    25,    26,     0,     0,    30,     0,
     219,     0,    36,   218,     0,   210,   111,     0,    95,     0,
       0,   694,     0,   647,     0,     0,     0,     0,     0,   664,
       0,     0,     0,     0,     0,     0,     0,   689,     0,   662,
       0,     0,     0,     0,    98,     0,     0,     0,   548,     0,
       0,   148,     0,   204,     0,   211,    45,    49,    52,    55,
      60,    63,    65,    67,    69,    71,    73,    75,     0,    34,
       0,   101,   575,   584,   588,     0,     0,     0,   609,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      45,    78,    91,     0,   562,     0,   163,   135,   565,   586,
     564,   572,   563,     0,   566,   567,   590,   568,   597,   569,
     570,   605,   571,     0,   119,     0,   127,     0,   556,   134,
       0,     0,   107,     0,   104,    38,    39,     0,    22,    23,
       0,     0,    28,    27,     0,   221,    31,    33,    40,     0,
     217,   112,   698,     0,   699,   640,     0,     0,   697,   659,
     655,   656,   657,   658,     0,   653,     0,    93,   660,     0,
       0,   674,   675,   676,   677,     0,   672,     0,   681,   682,
     683,   684,   680,     0,   678,     0,   685,     0,     0,     0,
       2,   693,     0,   691,     0,     0,   634,   636,     0,   554,
       0,   552,   547,   549,     0,   152,   150,   208,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,   212,   213,
       0,   574,     0,   607,   620,   619,     0,   611,     0,   623,
     621,     0,     0,     0,   604,   624,   625,   626,   573,    81,
      82,    84,    83,    86,    87,    88,    89,    90,    85,    80,
       0,     0,   589,   585,   587,   591,   598,   606,   129,     0,
     559,   560,     0,   133,     0,   108,     4,     0,    24,    21,
      32,   220,   643,   645,     0,     0,   695,     0,   649,     0,
     648,     0,   651,     0,     0,   666,     0,   665,     0,   668,
       0,     0,   670,     0,     0,   690,     0,   687,     0,   663,
     638,     0,   555,     0,   550,   545,    46,    47,    48,    51,
      50,    53,    54,    58,    59,    56,    57,    61,    62,    64,
      66,    68,    70,    72,    74,     0,   214,   576,     0,     0,
       0,     0,   622,     0,   603,    79,    92,   128,   557,     0,
     106,    19,   641,     0,   642,     0,   654,     0,   661,     0,
     673,     0,   679,     0,   686,     0,     0,   692,   551,   553,
       0,     0,   595,     0,     0,     0,   614,   613,   616,   582,
     599,   558,   561,   644,   646,   650,   652,   667,   669,   671,
     688,     0,   577,     0,     0,     0,   615,     0,     0,   594,
       0,     0,   592,     0,    77,     0,   579,   608,   578,     0,
     617,     0,   582,   581,   583,   601,   596,     0,   618,   612,
     593,   602,     0,   610,   600
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -835,  -547,  -835,  -835,  -835,  -835,  -835,  -835,  -835,  -835,
    -835,  -835,  -435,  -835,  -477,  -463,  -492,  -405,  -271,  -270,
    -272,  -269,  -268,  -267,  -835,  -485,  -835,  -498,  -835,  -501,
    -538,     7,  -835,  -835,  -835,     9,  -394,  -835,  -835,    38,
      37,    40,  -835,  -835,  -408,  -835,  -835,  -835,  -835,  -108,
    -835,  -391,  -378,  -835,    12,  -835,     0,  -434,  -835,  -835,
    -835,  -835,   139,  -835,  -835,  -835,  -553,  -556,  -236,  -352,
    -611,  -835,  -376,  -629,  -834,  -835,  -433,  -835,  -835,  -446,
    -444,  -835,  -835,    52,  -734,  -371,  -835,  -152,  -835,  -406,
    -835,  -150,  -835,  -835,  -835,  -835,  -147,  -835,  -835,  -835,
    -835,  -835,  -835,  -835,  -835,    89,  -835,  -835,     2,  -835,
     -74,  -281,  -462,  -835,  -835,  -835,  -313,  -307,  -314,  -835,
    -835,  -317,  -312,  -318,  -306,  -303,  -835,  -321,  -320,  -835,
    -399,  -539
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   530,   531,   532,   797,   533,   534,   535,   536,   537,
     538,   539,   620,   541,   587,   588,   589,   590,   591,   592,
     593,   594,   595,   596,   597,   621,   855,   622,   780,   623,
     711,   624,   388,   651,   508,   625,   390,   391,   392,   437,
     438,   439,   393,   394,   395,   396,   397,   398,   487,   488,
     399,   400,   401,   402,   542,   490,   599,   493,   450,   451,
     544,   405,   406,   407,   579,   483,   577,   578,   720,   721,
     649,   792,   628,   629,   630,   631,   632,   752,   891,   927,
     919,   920,   921,   928,   633,   634,   635,   636,   922,   894,
     637,   638,   923,   942,   639,   640,   641,   858,   756,   860,
     898,   917,   918,   642,   408,   409,   410,   434,   643,   480,
     481,   460,   461,   804,   805,   412,   684,   685,   689,   413,
     414,   695,   696,   703,   704,   707,   415,   712,   713,   416,
     462,   463
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     404,   440,   411,   455,   784,   648,   598,   387,   455,   389,
     504,   657,   403,   678,   540,   702,   545,   454,   857,   688,
     456,   723,   447,   802,   476,   456,   724,   735,   736,   678,
     485,   672,   431,   715,   788,   679,   791,   746,   669,   793,
     666,   491,   725,   672,   427,   440,   673,   417,   491,   492,
     670,   733,   734,   600,   486,   645,   586,   803,   432,   658,
     659,   601,   447,   737,   738,   674,   644,   646,   680,   681,
     682,   683,   687,   747,   655,   656,   428,   674,   447,   -35,
     926,   660,   502,   687,   491,   661,   687,   934,   675,   739,
     740,   503,   575,   600,   675,   687,   675,   926,   794,   675,
     650,   675,   600,   675,   675,   731,   668,   732,   675,   789,
     551,   761,   553,   763,   505,   750,   552,   506,   554,   559,
     507,   418,   586,   567,   581,   560,   583,   859,   663,   568,
     582,   572,   584,   586,   664,   573,   586,   466,   468,   470,
     472,   474,   475,   478,   796,   586,   419,   648,   806,   648,
     781,   676,   648,   420,   552,   808,   810,   812,   815,   798,
     421,   809,   811,   813,   816,   586,   800,   709,   723,   817,
     819,   822,   433,   825,   827,   818,   820,   823,   867,   826,
     828,   899,   435,   900,   905,   906,   575,   781,   575,   781,
     809,   813,   907,   908,   909,   781,   864,   447,   816,   820,
     823,   941,   769,   770,   771,   772,   773,   774,   775,   776,
     777,   778,   910,   937,   334,   335,   336,   872,   828,   781,
     874,   873,   779,   442,   875,   422,   443,   423,   784,   698,
     699,   700,   701,   521,   801,   455,   781,   911,   723,   691,
     692,   693,   694,   843,   844,   845,   846,   653,   464,   454,
     654,   465,   456,   467,   839,   840,   465,   861,   902,   469,
     575,   863,   465,   471,   473,   477,   465,   465,   465,   686,
     841,   842,   465,   702,   702,   878,   688,   690,   697,   424,
     465,   465,   865,   866,   429,   832,   705,   678,   868,   465,
     869,   648,   425,   836,   837,   838,   586,   586,   586,   586,
     586,   586,   586,   586,   586,   586,   586,   586,   586,   586,
     586,   586,   784,   708,   936,   714,   465,   781,   465,   833,
     782,   781,   834,   833,   862,   430,   888,   436,   687,   687,
     728,   729,   730,   575,   847,   848,   444,   449,   457,   459,
     479,   687,   484,   687,   489,   494,   331,   500,   491,   501,
     546,   741,   548,   547,   890,   550,   549,   892,   556,   555,
     557,   558,   574,   561,   742,   562,   563,   564,   565,   569,
     566,   648,   570,   571,   667,   580,   652,   662,   586,   586,
     -34,   600,   502,   673,   706,   744,   716,   748,   745,   895,
     753,   586,   441,   586,   751,   743,   754,   892,   755,   764,
     448,   757,   758,   575,   403,   677,   719,   727,   404,   -29,
     411,   404,   403,   924,   929,   387,   404,   389,   411,   759,
     403,   762,   765,   403,   766,   458,   482,   648,   403,   938,
     767,   -36,   768,   795,   799,   807,   441,   496,   829,   814,
     441,   821,   824,   830,   856,   781,   871,   884,   403,   543,
     893,   903,   403,   913,   912,   914,   448,   904,   915,  -580,
     925,   931,   944,   930,   932,   602,   935,   456,   403,   943,
     849,   851,   850,   497,   726,   852,   426,   853,   498,   854,
     499,   889,   831,   576,   896,   939,   495,   933,   940,   897,
     893,   785,   916,   786,   627,   403,   787,   453,   877,   717,
     879,   881,   876,   883,   880,   886,   626,   456,   887,     0,
       0,     0,     0,     0,   882,     0,     0,     0,     0,     0,
       0,   885,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   671,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   718,     0,   576,     0,   576,
       0,     0,     0,     0,     0,     0,     0,   403,     0,   403,
       0,   403,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   627,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   404,     0,   626,     0,     0,     0,     0,
       0,   576,     0,     0,     0,   403,     0,     0,     0,     0,
       0,     0,     0,   403,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   576,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   403,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   627,     0,     0,     0,   627,     0,     0,     0,
       0,     0,     0,     0,   626,     0,     0,     0,   626,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   576,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   403,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   627,   627,     0,
     627,     0,   411,     0,     0,     0,     0,     0,     0,   626,
     626,     0,   626,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   627,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     626,     0,     0,     0,   627,     0,     0,     0,     0,     0,
       0,   627,     0,     0,     0,     0,   626,     0,     0,     0,
       0,   627,     0,   626,     0,   627,     0,     0,     0,     0,
       0,   627,     0,   626,     0,     0,     0,   626,     0,     0,
       0,   452,     0,   626,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   331,     0,
       0,     0,     0,     0,     0,     0,   332,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     333,   334,   335,   336,   337,     0,     0,     0,     0,     0,
       0,     0,     0,   338,   339,   340,   341,   342,   343,   344,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   345,   346,   347,   348,   349,
     350,   351,     0,     0,     0,     0,     0,     0,     0,     0,
     352,     0,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,     0,     0,   509,   510,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   511,   512,     0,
     331,     0,   602,   603,     0,     0,     0,     0,   604,   513,
     514,   515,   516,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   333,   334,   335,   336,   337,     0,     0,     0,
     517,   518,   519,   520,   521,   338,   339,   340,   341,   342,
     343,   344,   605,   606,   607,   608,     0,   609,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   345,   346,   347,
     348,   349,   350,   351,   522,   523,   524,   525,   526,   527,
     528,   529,   352,   619,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,     0,     0,
     509,   510,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   511,
     512,     0,   331,     0,   602,   783,     0,     0,     0,     0,
     604,   513,   514,   515,   516,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   333,   334,   335,   336,   337,     0,
       0,     0,   517,   518,   519,   520,   521,   338,   339,   340,
     341,   342,   343,   344,   605,   606,   607,   608,     0,   609,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   345,
     346,   347,   348,   349,   350,   351,   522,   523,   524,   525,
     526,   527,   528,   529,   352,   619,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
       0,     0,   509,   510,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   511,   512,     0,   331,     0,   602,     0,     0,     0,
       0,     0,   604,   513,   514,   515,   516,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   333,   334,   335,   336,
     337,     0,     0,     0,   517,   518,   519,   520,   521,   338,
     339,   340,   341,   342,   343,   344,   605,   606,   607,   608,
       0,   609,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   345,   346,   347,   348,   349,   350,   351,   522,   523,
     524,   525,   526,   527,   528,   529,   352,   619,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,     0,     0,   509,   510,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   511,   512,     0,   331,     0,   494,     0,
       0,     0,     0,     0,   604,   513,   514,   515,   516,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   333,   334,
     335,   336,   337,     0,     0,     0,   517,   518,   519,   520,
     521,   338,   339,   340,   341,   342,   343,   344,   605,   606,
     607,   608,     0,   609,   610,   611,   612,   613,   614,   615,
     616,   617,   618,   345,   346,   347,   348,   349,   350,   351,
     522,   523,   524,   525,   526,   527,   528,   529,   352,   619,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,     0,     0,   509,   510,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   511,   512,     0,   331,     0,
       0,     0,     0,     0,     0,     0,   604,   513,   514,   515,
     516,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     333,   334,   335,   336,   337,     0,     0,     0,   517,   518,
     519,   520,   521,   338,   339,   340,   341,   342,   343,   344,
     605,   606,   607,   608,     0,   609,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   345,   346,   347,   348,   349,
     350,   351,   522,   523,   524,   525,   526,   527,   528,   529,
     352,   619,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,     0,     0,   509,   510,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   511,   512,     0,
     331,     0,     0,     0,     0,     0,     0,     0,   604,   513,
     514,   515,   516,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   333,   334,   335,   336,   337,     0,     0,     0,
     517,   518,   519,   520,   521,   338,   339,   340,   341,   342,
     343,   344,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   345,   346,   347,
     348,   349,   350,   351,   522,   523,   524,   525,   526,   527,
     528,   529,   352,     0,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,     0,     0,     0,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,     0,     0,
     509,   510,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   511,
     512,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   513,   514,   515,   516,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   333,   334,   335,   336,     0,     0,
       0,     0,   517,   518,   519,   520,   521,   338,   339,   340,
     341,   342,   343,   344,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   345,
     346,   347,   348,   349,   350,   351,   522,   523,   524,   525,
     526,   527,   528,   529,   352,     0,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   331,     0,     0,     0,     0,     0,
       0,     0,   332,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   333,   334,   335,   336,
     337,     0,     0,     0,     0,     0,     0,     0,     0,   338,
     339,   340,   341,   342,   343,   344,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   345,   346,   347,   348,   349,   350,   351,     0,     0,
       0,     0,     0,     0,     0,     0,   352,     0,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,     0,
       0,     0,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   333,   334,
     335,   336,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   338,   339,   340,   341,   342,   343,   344,   605,     0,
       0,   608,     0,   609,   610,     0,     0,   613,     0,     0,
       0,     0,     0,   345,   346,   347,   348,   349,   350,   351,
       0,     0,     0,     0,     0,     0,     0,     0,   352,     0,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,     0,     0,     0,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   445,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     333,   334,   335,   336,     0,     0,     0,     0,     0,     0,
       0,     0,   446,   338,   339,   340,   341,   342,   343,   344,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   345,   346,   347,   348,   349,
     350,   351,     0,     0,     0,     0,     0,     0,     0,     0,
     352,     0,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,     0,     0,     0,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     331,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   333,   334,   335,   336,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   338,   339,   340,   341,   342,
     343,   344,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   345,   346,   347,
     348,   349,   350,   351,     0,     0,     0,     0,     0,     0,
       0,     0,   352,     0,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,     0,     0,     0,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   722,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   333,   334,   335,   336,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   338,   339,   340,
     341,   342,   343,   344,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   345,
     346,   347,   348,   349,   350,   351,     0,     0,     0,     0,
       0,     0,     0,     0,   352,     0,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,     0,     0,     0,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   835,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   333,   334,   335,   336,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   338,
     339,   340,   341,   342,   343,   344,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   345,   346,   347,   348,   349,   350,   351,     0,     0,
       0,     0,     0,     0,     0,     0,   352,     0,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,     0,
       0,     0,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   870,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   333,   334,
     335,   336,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   338,   339,   340,   341,   342,   343,   344,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   345,   346,   347,   348,   349,   350,   351,
       0,     0,     0,     0,     0,     0,     0,     0,   352,     0,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,     0,     0,     0,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     333,   334,   335,   336,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   338,   339,   340,   341,   342,   343,   344,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   345,   346,   347,   348,   349,
     350,   351,     0,     0,     0,     0,     0,     0,     0,     0,
     352,     0,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,     0,     0,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
       0,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,     0,     0,     0,     0,     0,     0,   324,     0,
       0,     0,   328,   329,   330,     0,     0,   509,   510,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   511,   512,     0,     0,
       0,   647,   790,     0,     0,     0,     0,     0,   513,   514,
     515,   516,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   517,
     518,   519,   520,   521,   338,     0,     0,     0,     0,   343,
     344,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   522,   523,   524,   525,   526,   527,   528,
     529,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   365,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,     0,     0,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
       0,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,     0,     0,     0,     0,     0,     0,   324,     0,
       0,     0,   328,   329,   330,     0,     0,   509,   510,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   511,   512,     0,     0,
       0,   647,   901,     0,     0,     0,     0,     0,   513,   514,
     515,   516,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   517,
     518,   519,   520,   521,   338,     0,     0,     0,     0,   343,
     344,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   522,   523,   524,   525,   526,   527,   528,
     529,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   365,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,     0,     0,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
       0,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,     0,     0,     0,     0,     0,     0,   324,     0,
       0,     0,   328,   329,   330,     0,     0,   509,   510,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   511,   512,     0,     0,
     585,     0,     0,     0,     0,     0,     0,     0,   513,   514,
     515,   516,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   517,
     518,   519,   520,   521,   338,     0,     0,     0,     0,   343,
     344,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   522,   523,   524,   525,   526,   527,   528,
     529,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   365,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,     0,     0,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
       0,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,     0,     0,     0,     0,     0,     0,   324,     0,
       0,     0,   328,   329,   330,     0,     0,   509,   510,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   511,   512,     0,     0,
       0,   647,     0,     0,     0,     0,     0,     0,   513,   514,
     515,   516,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   517,
     518,   519,   520,   521,   338,     0,     0,     0,     0,   343,
     344,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   522,   523,   524,   525,   526,   527,   528,
     529,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   365,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,     0,     0,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
       0,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,     0,     0,     0,     0,     0,     0,   324,     0,
       0,     0,   328,   329,   330,     0,     0,   509,   510,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   511,   512,     0,     0,
     749,     0,     0,     0,     0,     0,     0,     0,   513,   514,
     515,   516,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   517,
     518,   519,   520,   521,   338,     0,     0,     0,     0,   343,
     344,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   522,   523,   524,   525,   526,   527,   528,
     529,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   365,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,     0,     0,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
       0,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,     0,     0,     0,     0,     0,     0,   324,     0,
       0,     0,   328,   329,   330,     0,     0,   509,   510,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   511,   512,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   760,   513,   514,
     515,   516,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   517,
     518,   519,   520,   521,   338,     0,     0,     0,     0,   343,
     344,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   522,   523,   524,   525,   526,   527,   528,
     529,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   365,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,     0,     0,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
       0,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,     0,     0,     0,     0,     0,     0,   324,     0,
       0,     0,   328,   329,   330,     0,     0,   509,   510,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   511,   512,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   513,   514,
     515,   516,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   517,
     518,   519,   520,   521,   338,     0,     0,     0,     0,   343,
     344,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   522,   523,   524,   525,   526,   527,   528,
     529,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   365,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,     0,     0,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
       0,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,     0,     0,     0,     0,     0,     0,   324,     0,
       0,     0,   328,   329,   330,     0,     0,   509,   510,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   511,   512,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   513,   514,
     515,   516,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   517,
     518,   519,   520,   521,   338,     0,     0,     0,     0,   343,
     665,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   522,   523,   524,   525,   526,   527,   528,
     529,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   365,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,     0,     0,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
       0,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,     0,     0,     0,     0,     0,     0,   324,     0,
       0,     0,   328,   329,   330,     0,     0,   509,   510,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   511,   512,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   513,   514,
     515,   516,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   517,
     518,   519,   520,   710,   338,     0,     0,     0,     0,   343,
     344,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   522,   523,   524,   525,   526,   527,   528,
     529,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   365,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,     0,     0,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
       0,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,     0,     0,     0,     0,     0,     0,   324,     0,
       0,     0,   328,   329,   330,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   338,     0,     0,     0,     0,   343,
     344
};

static const yytype_int16 yycheck[] =
{
       0,   392,     0,   411,   633,   503,   491,     0,   416,     0,
     444,   512,     0,   552,   449,   562,   450,   411,   752,   557,
     411,   577,   400,   354,   423,   416,   579,   337,   338,   568,
     391,   354,   365,   571,   645,   354,   647,   342,   362,   650,
     538,   357,   580,   354,   359,   436,   357,   355,   357,   365,
     374,   333,   334,   357,   415,   364,   491,   388,   391,   335,
     336,   365,   440,   373,   374,   388,   500,   501,   387,   388,
     389,   390,   557,   378,   509,   510,   391,   388,   456,   355,
     914,   357,   355,   568,   357,   361,   571,   921,   550,   339,
     340,   364,   483,   357,   556,   580,   558,   931,   651,   561,
     364,   563,   357,   565,   566,   367,   541,   369,   570,   364,
     356,   612,   356,   614,   359,   600,   362,   362,   362,   356,
     365,   355,   557,   356,   356,   362,   356,   756,   356,   362,
     362,   358,   362,   568,   362,   362,   571,   418,   419,   420,
     421,   422,   423,   424,   356,   580,   355,   645,   356,   647,
     362,   550,   650,   355,   362,   356,   356,   356,   356,   660,
     355,   362,   362,   362,   362,   600,   664,   566,   724,   356,
     356,   356,   365,   356,   356,   362,   362,   362,   789,   362,
     362,   356,   356,   356,   356,   356,   577,   362,   579,   362,
     362,   362,   356,   356,   356,   362,   363,   575,   362,   362,
     362,   935,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   356,   356,   380,   381,   382,   358,   362,   362,
     358,   362,   364,   362,   362,   355,   365,   355,   857,   387,
     388,   389,   390,   391,   669,   643,   362,   363,   794,   387,
     388,   389,   390,   735,   736,   737,   738,   362,   388,   643,
     365,   391,   643,   388,   731,   732,   391,   758,   869,   388,
     651,   762,   391,   388,   388,   388,   391,   391,   391,   388,
     733,   734,   391,   820,   821,   813,   814,   388,   388,   355,
     391,   391,   780,   781,   355,   719,   388,   826,   360,   391,
     362,   789,   357,   728,   729,   730,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   741,   742,   743,   744,
     745,   746,   941,   388,   925,   388,   391,   362,   391,   362,
     365,   362,   365,   362,   365,   355,   365,   362,   813,   814,
     370,   371,   372,   724,   739,   740,   391,   373,   365,   391,
     391,   826,   359,   828,   391,   359,   357,   391,   357,   391,
     356,   377,   365,   391,   855,   362,   364,   858,   362,   364,
     362,   362,   365,   362,   376,   362,   362,   362,   362,   356,
     362,   869,   362,   355,   355,   364,   391,   356,   813,   814,
     355,   357,   355,   357,   354,   341,   358,   358,   343,   399,
     355,   826,   392,   828,   360,   375,   365,   898,   365,   363,
     400,   355,   355,   794,   392,   391,   391,   391,   408,   356,
     408,   411,   400,   911,   915,   408,   416,   408,   416,   365,
     408,   355,   365,   411,   365,   416,   426,   925,   416,   930,
     365,   355,   365,   391,   391,   364,   436,   435,   356,   362,
     440,   362,   362,   356,   358,   362,   358,   354,   436,   449,
     858,   354,   440,   391,   360,   356,   456,   388,   355,   359,
     364,   356,   360,   365,   403,   359,   359,   858,   456,   365,
     741,   743,   742,   436,   582,   744,   337,   745,   440,   746,
     440,   833,   718,   483,   860,   931,   434,   920,   932,   860,
     898,   643,   898,   643,   494,   483,   643,   408,   811,   573,
     814,   818,   809,   821,   816,   826,   494,   898,   828,    -1,
      -1,    -1,    -1,    -1,   820,    -1,    -1,    -1,    -1,    -1,
      -1,   824,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   546,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   575,    -1,   577,    -1,   579,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   575,    -1,   577,
      -1,   579,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   633,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   643,    -1,   633,    -1,    -1,    -1,    -1,
      -1,   651,    -1,    -1,    -1,   643,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   651,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   724,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   724,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   752,    -1,    -1,    -1,   756,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   752,    -1,    -1,    -1,   756,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   794,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   794,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   857,   858,    -1,
     860,    -1,   860,    -1,    -1,    -1,    -1,    -1,    -1,   857,
     858,    -1,   860,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   898,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     898,    -1,    -1,    -1,   914,    -1,    -1,    -1,    -1,    -1,
      -1,   921,    -1,    -1,    -1,    -1,   914,    -1,    -1,    -1,
      -1,   931,    -1,   921,    -1,   935,    -1,    -1,    -1,    -1,
      -1,   941,    -1,   931,    -1,    -1,    -1,   935,    -1,    -1,
      -1,     0,    -1,   941,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   357,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   365,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     379,   380,   381,   382,   383,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   392,   393,   394,   395,   396,   397,   398,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   414,   415,   416,   417,   418,
     419,   420,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     429,    -1,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,    -1,    -1,   335,   336,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   354,   355,    -1,
     357,    -1,   359,   360,    -1,    -1,    -1,    -1,   365,   366,
     367,   368,   369,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   379,   380,   381,   382,   383,    -1,    -1,    -1,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,    -1,   404,   405,   406,
     407,   408,   409,   410,   411,   412,   413,   414,   415,   416,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,    -1,    -1,
     335,   336,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   354,
     355,    -1,   357,    -1,   359,   360,    -1,    -1,    -1,    -1,
     365,   366,   367,   368,   369,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   379,   380,   381,   382,   383,    -1,
      -1,    -1,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,    -1,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
      -1,    -1,   335,   336,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   354,   355,    -1,   357,    -1,   359,    -1,    -1,    -1,
      -1,    -1,   365,   366,   367,   368,   369,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   379,   380,   381,   382,
     383,    -1,    -1,    -1,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
      -1,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,    -1,    -1,   335,   336,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   354,   355,    -1,   357,    -1,   359,    -1,
      -1,    -1,    -1,    -1,   365,   366,   367,   368,   369,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,   380,
     381,   382,   383,    -1,    -1,    -1,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,    -1,   404,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   415,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,    -1,    -1,   335,   336,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   354,   355,    -1,   357,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   365,   366,   367,   368,
     369,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     379,   380,   381,   382,   383,    -1,    -1,    -1,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,    -1,   404,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   416,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,    -1,    -1,   335,   336,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   354,   355,    -1,
     357,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   365,   366,
     367,   368,   369,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   379,   380,   381,   382,   383,    -1,    -1,    -1,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   414,   415,   416,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   429,    -1,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,    -1,    -1,    -1,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,    -1,    -1,
     335,   336,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   354,
     355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   366,   367,   368,   369,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   379,   380,   381,   382,    -1,    -1,
      -1,    -1,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,    -1,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   357,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   365,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   379,   380,   381,   382,
     383,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   392,
     393,   394,   395,   396,   397,   398,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   414,   415,   416,   417,   418,   419,   420,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   429,    -1,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,    -1,
      -1,    -1,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,   380,
     381,   382,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   392,   393,   394,   395,   396,   397,   398,   399,    -1,
      -1,   402,    -1,   404,   405,    -1,    -1,   408,    -1,    -1,
      -1,    -1,    -1,   414,   415,   416,   417,   418,   419,   420,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   429,    -1,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,    -1,    -1,    -1,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   365,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     379,   380,   381,   382,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   391,   392,   393,   394,   395,   396,   397,   398,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   414,   415,   416,   417,   418,
     419,   420,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     429,    -1,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,    -1,    -1,    -1,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     357,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   379,   380,   381,   382,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   392,   393,   394,   395,   396,
     397,   398,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   414,   415,   416,
     417,   418,   419,   420,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   429,    -1,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,    -1,    -1,    -1,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   360,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   379,   380,   381,   382,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   392,   393,   394,
     395,   396,   397,   398,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   414,
     415,   416,   417,   418,   419,   420,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   429,    -1,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,    -1,    -1,    -1,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   360,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   379,   380,   381,   382,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   392,
     393,   394,   395,   396,   397,   398,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   414,   415,   416,   417,   418,   419,   420,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   429,    -1,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,    -1,
      -1,    -1,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   360,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,   380,
     381,   382,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   392,   393,   394,   395,   396,   397,   398,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   414,   415,   416,   417,   418,   419,   420,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   429,    -1,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,    -1,    -1,    -1,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     379,   380,   381,   382,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   392,   393,   394,   395,   396,   397,   398,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   414,   415,   416,   417,   418,
     419,   420,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     429,    -1,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
      -1,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,    -1,    -1,    -1,    -1,    -1,    -1,   326,    -1,
      -1,    -1,   330,   331,   332,    -1,    -1,   335,   336,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   354,   355,    -1,    -1,
      -1,   359,   360,    -1,    -1,    -1,    -1,    -1,   366,   367,
     368,   369,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   387,
     388,   389,   390,   391,   392,    -1,    -1,    -1,    -1,   397,
     398,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   421,   422,   423,   424,   425,   426,   427,
     428,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   443,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
      -1,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,    -1,    -1,    -1,    -1,    -1,    -1,   326,    -1,
      -1,    -1,   330,   331,   332,    -1,    -1,   335,   336,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   354,   355,    -1,    -1,
      -1,   359,   360,    -1,    -1,    -1,    -1,    -1,   366,   367,
     368,   369,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   387,
     388,   389,   390,   391,   392,    -1,    -1,    -1,    -1,   397,
     398,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   421,   422,   423,   424,   425,   426,   427,
     428,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   443,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
      -1,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,    -1,    -1,    -1,    -1,    -1,    -1,   326,    -1,
      -1,    -1,   330,   331,   332,    -1,    -1,   335,   336,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   354,   355,    -1,    -1,
     358,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   366,   367,
     368,   369,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   387,
     388,   389,   390,   391,   392,    -1,    -1,    -1,    -1,   397,
     398,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   421,   422,   423,   424,   425,   426,   427,
     428,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   443,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
      -1,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,    -1,    -1,    -1,    -1,    -1,    -1,   326,    -1,
      -1,    -1,   330,   331,   332,    -1,    -1,   335,   336,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   354,   355,    -1,    -1,
      -1,   359,    -1,    -1,    -1,    -1,    -1,    -1,   366,   367,
     368,   369,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   387,
     388,   389,   390,   391,   392,    -1,    -1,    -1,    -1,   397,
     398,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   421,   422,   423,   424,   425,   426,   427,
     428,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   443,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
      -1,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,    -1,    -1,    -1,    -1,    -1,    -1,   326,    -1,
      -1,    -1,   330,   331,   332,    -1,    -1,   335,   336,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   354,   355,    -1,    -1,
     358,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   366,   367,
     368,   369,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   387,
     388,   389,   390,   391,   392,    -1,    -1,    -1,    -1,   397,
     398,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   421,   422,   423,   424,   425,   426,   427,
     428,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   443,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
      -1,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,    -1,    -1,    -1,    -1,    -1,    -1,   326,    -1,
      -1,    -1,   330,   331,   332,    -1,    -1,   335,   336,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   354,   355,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   365,   366,   367,
     368,   369,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   387,
     388,   389,   390,   391,   392,    -1,    -1,    -1,    -1,   397,
     398,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   421,   422,   423,   424,   425,   426,   427,
     428,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   443,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
      -1,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,    -1,    -1,    -1,    -1,    -1,    -1,   326,    -1,
      -1,    -1,   330,   331,   332,    -1,    -1,   335,   336,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   354,   355,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   366,   367,
     368,   369,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   387,
     388,   389,   390,   391,   392,    -1,    -1,    -1,    -1,   397,
     398,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   421,   422,   423,   424,   425,   426,   427,
     428,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   443,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
      -1,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,    -1,    -1,    -1,    -1,    -1,    -1,   326,    -1,
      -1,    -1,   330,   331,   332,    -1,    -1,   335,   336,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   354,   355,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   366,   367,
     368,   369,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   387,
     388,   389,   390,   391,   392,    -1,    -1,    -1,    -1,   397,
     398,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   421,   422,   423,   424,   425,   426,   427,
     428,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   443,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
      -1,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,    -1,    -1,    -1,    -1,    -1,    -1,   326,    -1,
      -1,    -1,   330,   331,   332,    -1,    -1,   335,   336,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   354,   355,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   366,   367,
     368,   369,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   387,
     388,   389,   390,   391,   392,    -1,    -1,    -1,    -1,   397,
     398,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   421,   422,   423,   424,   425,   426,   427,
     428,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   443,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
      -1,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,    -1,    -1,    -1,    -1,    -1,    -1,   326,    -1,
      -1,    -1,   330,   331,   332,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   392,    -1,    -1,    -1,    -1,   397,
     398
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   357,   365,   379,   380,   381,   382,   383,   392,   393,
     394,   395,   396,   397,   398,   414,   415,   416,   417,   418,
     419,   420,   429,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   496,   497,   500,
     501,   502,   503,   507,   508,   509,   510,   511,   512,   515,
     516,   517,   518,   519,   521,   526,   527,   528,   569,   570,
     571,   573,   580,   584,   585,   591,   594,   355,   355,   355,
     355,   355,   355,   355,   355,   357,   527,   359,   391,   355,
     355,   365,   391,   365,   572,   356,   362,   504,   505,   506,
     516,   521,   362,   365,   391,   365,   391,   517,   521,   373,
     523,   524,     0,   570,   501,   509,   516,   365,   500,   391,
     576,   577,   595,   596,   388,   391,   576,   388,   576,   388,
     576,   388,   576,   388,   576,   576,   595,   388,   576,   391,
     574,   575,   521,   530,   359,   391,   415,   513,   514,   391,
     520,   357,   365,   522,   359,   548,   573,   505,   504,   506,
     391,   391,   355,   364,   522,   359,   362,   365,   499,   335,
     336,   354,   355,   366,   367,   368,   369,   387,   388,   389,
     390,   391,   421,   422,   423,   424,   425,   426,   427,   428,
     466,   467,   468,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   519,   521,   525,   522,   356,   391,   365,   364,
     362,   356,   362,   356,   362,   364,   362,   362,   362,   356,
     362,   362,   362,   362,   362,   362,   362,   356,   362,   356,
     362,   355,   358,   362,   365,   516,   521,   531,   532,   529,
     364,   356,   362,   356,   362,   358,   477,   479,   480,   481,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   521,
     357,   365,   359,   360,   365,   399,   400,   401,   402,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   430,
     477,   490,   492,   494,   496,   500,   519,   521,   537,   538,
     539,   540,   541,   549,   550,   551,   552,   555,   556,   559,
     560,   561,   568,   573,   522,   364,   522,   359,   492,   535,
     364,   498,   391,   362,   365,   477,   477,   494,   335,   336,
     357,   361,   356,   356,   362,   398,   492,   355,   477,   362,
     374,   573,   354,   357,   388,   577,   595,   391,   596,   354,
     387,   388,   389,   390,   581,   582,   388,   490,   495,   583,
     388,   387,   388,   389,   390,   586,   587,   388,   387,   388,
     389,   390,   466,   588,   589,   388,   354,   590,   388,   595,
     391,   495,   592,   593,   388,   495,   358,   575,   521,   391,
     533,   534,   360,   532,   531,   495,   514,   391,   370,   371,
     372,   367,   369,   333,   334,   337,   338,   373,   374,   339,
     340,   377,   376,   375,   341,   343,   342,   378,   358,   358,
     490,   360,   542,   355,   365,   365,   563,   355,   355,   365,
     365,   494,   355,   494,   363,   365,   365,   365,   365,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   364,
     493,   362,   365,   360,   538,   552,   556,   561,   535,   364,
     360,   535,   536,   535,   531,   391,   356,   469,   494,   391,
     492,   477,   354,   388,   578,   579,   356,   364,   356,   362,
     356,   362,   356,   362,   362,   356,   362,   356,   362,   356,
     362,   362,   356,   362,   362,   356,   362,   356,   362,   356,
     356,   533,   522,   362,   365,   360,   477,   477,   477,   479,
     479,   480,   480,   481,   481,   481,   481,   482,   482,   483,
     484,   485,   486,   487,   488,   491,   358,   549,   562,   538,
     564,   494,   365,   494,   363,   492,   492,   535,   360,   362,
     360,   358,   358,   362,   358,   362,   582,   581,   495,   583,
     587,   586,   589,   588,   354,   590,   592,   593,   365,   534,
     494,   543,   494,   509,   554,   399,   537,   550,   565,   356,
     356,   360,   535,   354,   388,   356,   356,   356,   356,   356,
     356,   363,   360,   391,   356,   355,   554,   566,   567,   545,
     546,   547,   553,   557,   492,   364,   539,   544,   548,   494,
     365,   356,   403,   541,   539,   359,   535,   356,   494,   544,
     545,   549,   558,   365,   360
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   465,   466,   467,   467,   467,   467,   467,   467,   467,
     467,   467,   467,   467,   467,   467,   467,   467,   468,   468,
     468,   468,   468,   468,   469,   470,   471,   472,   472,   473,
     473,   474,   474,   475,   476,   476,   476,   477,   477,   477,
     477,   478,   478,   478,   478,   479,   479,   479,   479,   480,
     480,   480,   481,   481,   481,   482,   482,   482,   482,   482,
     483,   483,   483,   484,   484,   485,   485,   486,   486,   487,
     487,   488,   488,   489,   489,   490,   491,   490,   492,   492,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   494,   494,   495,   496,   496,   496,   496,   496,   496,
     496,   496,   496,   496,   496,   498,   497,   499,   499,   500,
     500,   500,   500,   501,   501,   502,   502,   503,   504,   504,
     505,   505,   505,   505,   506,   507,   507,   507,   507,   507,
     508,   508,   508,   508,   508,   509,   509,   510,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   511,   512,   513,
     513,   514,   514,   514,   515,   516,   516,   517,   517,   517,
     517,   517,   517,   517,   517,   517,   517,   517,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   519,   520,   520,   521,
     521,   522,   522,   522,   522,   523,   523,   524,   525,   525,
     525,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   527,   527,   527,   529,   528,   530,   528,   531,   531,
     532,   532,   533,   533,   534,   534,   535,   535,   535,   535,
     536,   536,   537,   538,   538,   539,   539,   539,   539,   539,
     539,   539,   539,   540,   541,   542,   543,   541,   544,   544,
     546,   545,   547,   545,   548,   548,   549,   549,   550,   550,
     551,   551,   552,   553,   553,   554,   554,   555,   555,   557,
     556,   558,   558,   559,   559,   560,   560,   562,   561,   563,
     561,   564,   561,   565,   565,   566,   566,   567,   567,   568,
     568,   568,   568,   568,   568,   568,   568,   569,   569,   570,
     570,   570,   572,   571,   573,   574,   574,   575,   575,   576,
     576,   577,   577,   578,   578,   579,   579,   580,   580,   580,
     580,   580,   580,   581,   581,   582,   582,   582,   582,   582,
     583,   583,   584,   584,   585,   585,   585,   585,   585,   585,
     585,   585,   586,   586,   587,   587,   587,   587,   588,   588,
     589,   589,   589,   589,   589,   590,   590,   591,   591,   591,
     591,   592,   592,   593,   594,   594,   595,   595,   596,   596
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     2,     2,     1,     1,     1,     2,     2,     2,
       1,     2,     3,     2,     1,     1,     1,     1,     2,     2,
       2,     1,     1,     1,     1,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     0,     6,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     2,     3,     2,     2,     4,     2,
       3,     4,     2,     3,     4,     0,     6,     2,     3,     2,
       3,     3,     4,     1,     1,     2,     3,     3,     2,     3,
       2,     1,     2,     1,     1,     1,     3,     4,     6,     5,
       1,     2,     3,     5,     4,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       3,     1,     3,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     1,     1,     3,     2,
       3,     2,     3,     3,     4,     1,     0,     3,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     6,     0,     5,     1,     2,
       3,     4,     1,     3,     1,     2,     1,     3,     4,     2,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     0,     0,     5,     1,     1,
       0,     2,     0,     2,     2,     3,     1,     2,     1,     2,
       1,     2,     5,     3,     1,     1,     4,     1,     2,     0,
       8,     0,     1,     3,     2,     1,     2,     0,     6,     0,
       8,     0,     7,     1,     1,     1,     0,     2,     3,     2,
       2,     2,     3,     2,     2,     2,     2,     1,     2,     1,
       1,     1,     0,     3,     5,     1,     3,     1,     4,     1,
       3,     5,     5,     1,     3,     1,     3,     4,     6,     6,
       8,     6,     8,     1,     3,     1,     1,     1,     1,     1,
       1,     3,     4,     6,     4,     6,     6,     8,     6,     8,
       6,     8,     1,     3,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     3,     6,     8,     4,
       6,     1,     3,     1,     4,     6,     1,     3,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (pParseContext, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, pParseContext); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, glslang::TParseContext* pParseContext)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (pParseContext);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, glslang::TParseContext* pParseContext)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, pParseContext);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule, glslang::TParseContext* pParseContext)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)], pParseContext);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, pParseContext); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, glslang::TParseContext* pParseContext)
{
  YY_USE (yyvaluep);
  YY_USE (pParseContext);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (glslang::TParseContext* pParseContext)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, parseContext);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* variable_identifier: IDENTIFIER  */
#line 395 "MachineIndependent/glslang.y"
                 {
        (yyval.interm.intermTypedNode) = parseContext.handleVariable((yyvsp[0].lex).loc, (yyvsp[0].lex).symbol, (yyvsp[0].lex).string);
    }
#line 5215 "MachineIndependent/glslang_tab.cpp"
    break;

  case 3: /* primary_expression: variable_identifier  */
#line 401 "MachineIndependent/glslang.y"
                          {
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 5223 "MachineIndependent/glslang_tab.cpp"
    break;

  case 4: /* primary_expression: LEFT_PAREN expression RIGHT_PAREN  */
#line 404 "MachineIndependent/glslang.y"
                                        {
        (yyval.interm.intermTypedNode) = (yyvsp[-1].interm.intermTypedNode);
        if ((yyval.interm.intermTypedNode)->getAsConstantUnion())
            (yyval.interm.intermTypedNode)->getAsConstantUnion()->setExpression();
    }
#line 5233 "MachineIndependent/glslang_tab.cpp"
    break;

  case 5: /* primary_expression: FLOATCONSTANT  */
#line 409 "MachineIndependent/glslang.y"
                    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion((yyvsp[0].lex).d, EbtFloat, (yyvsp[0].lex).loc, true);
    }
#line 5241 "MachineIndependent/glslang_tab.cpp"
    break;

  case 6: /* primary_expression: INTCONSTANT  */
#line 412 "MachineIndependent/glslang.y"
                  {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion((yyvsp[0].lex).i, (yyvsp[0].lex).loc, true);
    }
#line 5249 "MachineIndependent/glslang_tab.cpp"
    break;

  case 7: /* primary_expression: UINTCONSTANT  */
#line 415 "MachineIndependent/glslang.y"
                   {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "unsigned literal");
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion((yyvsp[0].lex).u, (yyvsp[0].lex).loc, true);
    }
#line 5258 "MachineIndependent/glslang_tab.cpp"
    break;

  case 8: /* primary_expression: BOOLCONSTANT  */
#line 419 "MachineIndependent/glslang.y"
                   {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion((yyvsp[0].lex).b, (yyvsp[0].lex).loc, true);
    }
#line 5266 "MachineIndependent/glslang_tab.cpp"
    break;

  case 9: /* primary_expression: STRING_LITERAL  */
#line 423 "MachineIndependent/glslang.y"
                     {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion((yyvsp[0].lex).string, (yyvsp[0].lex).loc, true);
    }
#line 5274 "MachineIndependent/glslang_tab.cpp"
    break;

  case 10: /* primary_expression: INT32CONSTANT  */
#line 426 "MachineIndependent/glslang.y"
                    {
        parseContext.explicitInt32Check((yyvsp[0].lex).loc, "32-bit signed literal");
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion((yyvsp[0].lex).i, (yyvsp[0].lex).loc, true);
    }
#line 5283 "MachineIndependent/glslang_tab.cpp"
    break;

  case 11: /* primary_expression: UINT32CONSTANT  */
#line 430 "MachineIndependent/glslang.y"
                     {
        parseContext.explicitInt32Check((yyvsp[0].lex).loc, "32-bit signed literal");
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion((yyvsp[0].lex).u, (yyvsp[0].lex).loc, true);
    }
#line 5292 "MachineIndependent/glslang_tab.cpp"
    break;

  case 12: /* primary_expression: INT64CONSTANT  */
#line 434 "MachineIndependent/glslang.y"
                    {
        parseContext.int64Check((yyvsp[0].lex).loc, "64-bit integer literal");
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion((yyvsp[0].lex).i64, (yyvsp[0].lex).loc, true);
    }
#line 5301 "MachineIndependent/glslang_tab.cpp"
    break;

  case 13: /* primary_expression: UINT64CONSTANT  */
#line 438 "MachineIndependent/glslang.y"
                     {
        parseContext.int64Check((yyvsp[0].lex).loc, "64-bit unsigned integer literal");
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion((yyvsp[0].lex).u64, (yyvsp[0].lex).loc, true);
    }
#line 5310 "MachineIndependent/glslang_tab.cpp"
    break;

  case 14: /* primary_expression: INT16CONSTANT  */
#line 442 "MachineIndependent/glslang.y"
                    {
        parseContext.explicitInt16Check((yyvsp[0].lex).loc, "16-bit integer literal");
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion((short)(yyvsp[0].lex).i, (yyvsp[0].lex).loc, true);
    }
#line 5319 "MachineIndependent/glslang_tab.cpp"
    break;

  case 15: /* primary_expression: UINT16CONSTANT  */
#line 446 "MachineIndependent/glslang.y"
                     {
        parseContext.explicitInt16Check((yyvsp[0].lex).loc, "16-bit unsigned integer literal");
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion((unsigned short)(yyvsp[0].lex).u, (yyvsp[0].lex).loc, true);
    }
#line 5328 "MachineIndependent/glslang_tab.cpp"
    break;

  case 16: /* primary_expression: DOUBLECONSTANT  */
#line 450 "MachineIndependent/glslang.y"
                     {
        parseContext.requireProfile((yyvsp[0].lex).loc, ECoreProfile | ECompatibilityProfile, "double literal");
        if (! parseContext.symbolTable.atBuiltInLevel())
            parseContext.doubleCheck((yyvsp[0].lex).loc, "double literal");
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion((yyvsp[0].lex).d, EbtDouble, (yyvsp[0].lex).loc, true);
    }
#line 5339 "MachineIndependent/glslang_tab.cpp"
    break;

  case 17: /* primary_expression: FLOAT16CONSTANT  */
#line 456 "MachineIndependent/glslang.y"
                      {
        parseContext.float16Check((yyvsp[0].lex).loc, "half float literal");
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion((yyvsp[0].lex).d, EbtFloat16, (yyvsp[0].lex).loc, true);
    }
#line 5348 "MachineIndependent/glslang_tab.cpp"
    break;

  case 18: /* postfix_expression: primary_expression  */
#line 464 "MachineIndependent/glslang.y"
                         {
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 5356 "MachineIndependent/glslang_tab.cpp"
    break;

  case 19: /* postfix_expression: postfix_expression LEFT_BRACKET integer_expression RIGHT_BRACKET  */
#line 467 "MachineIndependent/glslang.y"
                                                                       {
        (yyval.interm.intermTypedNode) = parseContext.handleBracketDereference((yyvsp[-2].lex).loc, (yyvsp[-3].interm.intermTypedNode), (yyvsp[-1].interm.intermTypedNode));
    }
#line 5364 "MachineIndependent/glslang_tab.cpp"
    break;

  case 20: /* postfix_expression: function_call  */
#line 470 "MachineIndependent/glslang.y"
                    {
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 5372 "MachineIndependent/glslang_tab.cpp"
    break;

  case 21: /* postfix_expression: postfix_expression DOT IDENTIFIER  */
#line 473 "MachineIndependent/glslang.y"
                                        {
        (yyval.interm.intermTypedNode) = parseContext.handleDotDereference((yyvsp[0].lex).loc, (yyvsp[-2].interm.intermTypedNode), *(yyvsp[0].lex).string);
    }
#line 5380 "MachineIndependent/glslang_tab.cpp"
    break;

  case 22: /* postfix_expression: postfix_expression INC_OP  */
#line 476 "MachineIndependent/glslang.y"
                                {
        parseContext.variableCheck((yyvsp[-1].interm.intermTypedNode));
        parseContext.lValueErrorCheck((yyvsp[0].lex).loc, "++", (yyvsp[-1].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.handleUnaryMath((yyvsp[0].lex).loc, "++", EOpPostIncrement, (yyvsp[-1].interm.intermTypedNode));
    }
#line 5390 "MachineIndependent/glslang_tab.cpp"
    break;

  case 23: /* postfix_expression: postfix_expression DEC_OP  */
#line 481 "MachineIndependent/glslang.y"
                                {
        parseContext.variableCheck((yyvsp[-1].interm.intermTypedNode));
        parseContext.lValueErrorCheck((yyvsp[0].lex).loc, "--", (yyvsp[-1].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.handleUnaryMath((yyvsp[0].lex).loc, "--", EOpPostDecrement, (yyvsp[-1].interm.intermTypedNode));
    }
#line 5400 "MachineIndependent/glslang_tab.cpp"
    break;

  case 24: /* integer_expression: expression  */
#line 489 "MachineIndependent/glslang.y"
                 {
        parseContext.integerCheck((yyvsp[0].interm.intermTypedNode), "[]");
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 5409 "MachineIndependent/glslang_tab.cpp"
    break;

  case 25: /* function_call: function_call_or_method  */
#line 496 "MachineIndependent/glslang.y"
                              {
        (yyval.interm.intermTypedNode) = parseContext.handleFunctionCall((yyvsp[0].interm).loc, (yyvsp[0].interm).function, (yyvsp[0].interm).intermNode);
        delete (yyvsp[0].interm).function;
    }
#line 5418 "MachineIndependent/glslang_tab.cpp"
    break;

  case 26: /* function_call_or_method: function_call_generic  */
#line 503 "MachineIndependent/glslang.y"
                            {
        (yyval.interm) = (yyvsp[0].interm);
    }
#line 5426 "MachineIndependent/glslang_tab.cpp"
    break;

  case 27: /* function_call_generic: function_call_header_with_parameters RIGHT_PAREN  */
#line 509 "MachineIndependent/glslang.y"
                                                       {
        (yyval.interm) = (yyvsp[-1].interm);
        (yyval.interm).loc = (yyvsp[0].lex).loc;
    }
#line 5435 "MachineIndependent/glslang_tab.cpp"
    break;

  case 28: /* function_call_generic: function_call_header_no_parameters RIGHT_PAREN  */
#line 513 "MachineIndependent/glslang.y"
                                                     {
        (yyval.interm) = (yyvsp[-1].interm);
        (yyval.interm).loc = (yyvsp[0].lex).loc;
    }
#line 5444 "MachineIndependent/glslang_tab.cpp"
    break;

  case 29: /* function_call_header_no_parameters: function_call_header VOID  */
#line 520 "MachineIndependent/glslang.y"
                                {
        (yyval.interm) = (yyvsp[-1].interm);
    }
#line 5452 "MachineIndependent/glslang_tab.cpp"
    break;

  case 30: /* function_call_header_no_parameters: function_call_header  */
#line 523 "MachineIndependent/glslang.y"
                           {
        (yyval.interm) = (yyvsp[0].interm);
    }
#line 5460 "MachineIndependent/glslang_tab.cpp"
    break;

  case 31: /* function_call_header_with_parameters: function_call_header assignment_expression  */
#line 529 "MachineIndependent/glslang.y"
                                                 {
        TParameter param = { 0, new TType };
        param.type->shallowCopy((yyvsp[0].interm.intermTypedNode)->getType());
        (yyvsp[-1].interm).function->addParameter(param);
        (yyval.interm).function = (yyvsp[-1].interm).function;
        (yyval.interm).intermNode = (yyvsp[0].interm.intermTypedNode);
    }
#line 5472 "MachineIndependent/glslang_tab.cpp"
    break;

  case 32: /* function_call_header_with_parameters: function_call_header_with_parameters COMMA assignment_expression  */
#line 536 "MachineIndependent/glslang.y"
                                                                       {
        TParameter param = { 0, new TType };
        param.type->shallowCopy((yyvsp[0].interm.intermTypedNode)->getType());
        (yyvsp[-2].interm).function->addParameter(param);
        (yyval.interm).function = (yyvsp[-2].interm).function;
        (yyval.interm).intermNode = parseContext.intermediate.growAggregate((yyvsp[-2].interm).intermNode, (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).loc);
    }
#line 5484 "MachineIndependent/glslang_tab.cpp"
    break;

  case 33: /* function_call_header: function_identifier LEFT_PAREN  */
#line 546 "MachineIndependent/glslang.y"
                                     {
        (yyval.interm) = (yyvsp[-1].interm);
    }
#line 5492 "MachineIndependent/glslang_tab.cpp"
    break;

  case 34: /* function_identifier: type_specifier  */
#line 554 "MachineIndependent/glslang.y"
                     {
        // Constructor
        (yyval.interm).intermNode = 0;
        (yyval.interm).function = parseContext.handleConstructorCall((yyvsp[0].interm.type).loc, (yyvsp[0].interm.type));
    }
#line 5502 "MachineIndependent/glslang_tab.cpp"
    break;

  case 35: /* function_identifier: postfix_expression  */
#line 559 "MachineIndependent/glslang.y"
                         {
        //
        // Should be a method or subroutine call, but we haven't recognized the arguments yet.
        //
        (yyval.interm).function = 0;
        (yyval.interm).intermNode = 0;

        TIntermMethod* method = (yyvsp[0].interm.intermTypedNode)->getAsMethodNode();
        if (method) {
            (yyval.interm).function = new TFunction(&method->getMethodName(), TType(EbtInt), EOpArrayLength);
            (yyval.interm).intermNode = method->getObject();
        } else {
            TIntermSymbol* symbol = (yyvsp[0].interm.intermTypedNode)->getAsSymbolNode();
            if (symbol) {
                parseContext.reservedErrorCheck(symbol->getLoc(), symbol->getName());
                TFunction *function = new TFunction(&symbol->getName(), TType(EbtVoid));
                (yyval.interm).function = function;
            } else
                parseContext.error((yyvsp[0].interm.intermTypedNode)->getLoc(), "function call, method, or subroutine call expected", "", "");
        }

        if ((yyval.interm).function == 0) {
            // error recover
            TString* empty = NewPoolTString("");
            (yyval.interm).function = new TFunction(empty, TType(EbtVoid), EOpNull);
        }
    }
#line 5534 "MachineIndependent/glslang_tab.cpp"
    break;

  case 36: /* function_identifier: non_uniform_qualifier  */
#line 587 "MachineIndependent/glslang.y"
                            {
        // Constructor
        (yyval.interm).intermNode = 0;
        (yyval.interm).function = parseContext.handleConstructorCall((yyvsp[0].interm.type).loc, (yyvsp[0].interm.type));
    }
#line 5544 "MachineIndependent/glslang_tab.cpp"
    break;

  case 37: /* unary_expression: postfix_expression  */
#line 596 "MachineIndependent/glslang.y"
                         {
        parseContext.variableCheck((yyvsp[0].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
        if (TIntermMethod* method = (yyvsp[0].interm.intermTypedNode)->getAsMethodNode())
            parseContext.error((yyvsp[0].interm.intermTypedNode)->getLoc(), "incomplete method syntax", method->getMethodName().c_str(), "");
    }
#line 5555 "MachineIndependent/glslang_tab.cpp"
    break;

  case 38: /* unary_expression: INC_OP unary_expression  */
#line 602 "MachineIndependent/glslang.y"
                              {
        parseContext.lValueErrorCheck((yyvsp[-1].lex).loc, "++", (yyvsp[0].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.handleUnaryMath((yyvsp[-1].lex).loc, "++", EOpPreIncrement, (yyvsp[0].interm.intermTypedNode));
    }
#line 5564 "MachineIndependent/glslang_tab.cpp"
    break;

  case 39: /* unary_expression: DEC_OP unary_expression  */
#line 606 "MachineIndependent/glslang.y"
                              {
        parseContext.lValueErrorCheck((yyvsp[-1].lex).loc, "--", (yyvsp[0].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.handleUnaryMath((yyvsp[-1].lex).loc, "--", EOpPreDecrement, (yyvsp[0].interm.intermTypedNode));
    }
#line 5573 "MachineIndependent/glslang_tab.cpp"
    break;

  case 40: /* unary_expression: unary_operator unary_expression  */
#line 610 "MachineIndependent/glslang.y"
                                      {
        if ((yyvsp[-1].interm).op != EOpNull) {
            char errorOp[2] = {0, 0};
            switch((yyvsp[-1].interm).op) {
            case EOpNegative:   errorOp[0] = '-'; break;
            case EOpLogicalNot: errorOp[0] = '!'; break;
            case EOpBitwiseNot: errorOp[0] = '~'; break;
            default: break; // some compilers want this
            }
            (yyval.interm.intermTypedNode) = parseContext.handleUnaryMath((yyvsp[-1].interm).loc, errorOp, (yyvsp[-1].interm).op, (yyvsp[0].interm.intermTypedNode));
        } else {
            (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
            if ((yyval.interm.intermTypedNode)->getAsConstantUnion())
                (yyval.interm.intermTypedNode)->getAsConstantUnion()->setExpression();
        }
    }
#line 5594 "MachineIndependent/glslang_tab.cpp"
    break;

  case 41: /* unary_operator: PLUS  */
#line 630 "MachineIndependent/glslang.y"
            { (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpNull; }
#line 5600 "MachineIndependent/glslang_tab.cpp"
    break;

  case 42: /* unary_operator: DASH  */
#line 631 "MachineIndependent/glslang.y"
            { (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpNegative; }
#line 5606 "MachineIndependent/glslang_tab.cpp"
    break;

  case 43: /* unary_operator: BANG  */
#line 632 "MachineIndependent/glslang.y"
            { (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpLogicalNot; }
#line 5612 "MachineIndependent/glslang_tab.cpp"
    break;

  case 44: /* unary_operator: TILDE  */
#line 633 "MachineIndependent/glslang.y"
            { (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpBitwiseNot;
              parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "bitwise not"); }
#line 5619 "MachineIndependent/glslang_tab.cpp"
    break;

  case 45: /* multiplicative_expression: unary_expression  */
#line 639 "MachineIndependent/glslang.y"
                       { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 5625 "MachineIndependent/glslang_tab.cpp"
    break;

  case 46: /* multiplicative_expression: multiplicative_expression STAR unary_expression  */
#line 640 "MachineIndependent/glslang.y"
                                                      {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "*", EOpMul, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
    }
#line 5635 "MachineIndependent/glslang_tab.cpp"
    break;

  case 47: /* multiplicative_expression: multiplicative_expression SLASH unary_expression  */
#line 645 "MachineIndependent/glslang.y"
                                                       {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "/", EOpDiv, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
    }
#line 5645 "MachineIndependent/glslang_tab.cpp"
    break;

  case 48: /* multiplicative_expression: multiplicative_expression PERCENT unary_expression  */
#line 650 "MachineIndependent/glslang.y"
                                                         {
        parseContext.fullIntegerCheck((yyvsp[-1].lex).loc, "%");
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "%", EOpMod, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
    }
#line 5656 "MachineIndependent/glslang_tab.cpp"
    break;

  case 49: /* additive_expression: multiplicative_expression  */
#line 659 "MachineIndependent/glslang.y"
                                { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 5662 "MachineIndependent/glslang_tab.cpp"
    break;

  case 50: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 660 "MachineIndependent/glslang.y"
                                                         {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "+", EOpAdd, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
    }
#line 5672 "MachineIndependent/glslang_tab.cpp"
    break;

  case 51: /* additive_expression: additive_expression DASH multiplicative_expression  */
#line 665 "MachineIndependent/glslang.y"
                                                         {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "-", EOpSub, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
    }
#line 5682 "MachineIndependent/glslang_tab.cpp"
    break;

  case 52: /* shift_expression: additive_expression  */
#line 673 "MachineIndependent/glslang.y"
                          { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 5688 "MachineIndependent/glslang_tab.cpp"
    break;

  case 53: /* shift_expression: shift_expression LEFT_OP additive_expression  */
#line 674 "MachineIndependent/glslang.y"
                                                   {
        parseContext.fullIntegerCheck((yyvsp[-1].lex).loc, "bit shift left");
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "<<", EOpLeftShift, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
    }
#line 5699 "MachineIndependent/glslang_tab.cpp"
    break;

  case 54: /* shift_expression: shift_expression RIGHT_OP additive_expression  */
#line 680 "MachineIndependent/glslang.y"
                                                    {
        parseContext.fullIntegerCheck((yyvsp[-1].lex).loc, "bit shift right");
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, ">>", EOpRightShift, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
    }
#line 5710 "MachineIndependent/glslang_tab.cpp"
    break;

  case 55: /* relational_expression: shift_expression  */
#line 689 "MachineIndependent/glslang.y"
                       { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 5716 "MachineIndependent/glslang_tab.cpp"
    break;

  case 56: /* relational_expression: relational_expression LEFT_ANGLE shift_expression  */
#line 690 "MachineIndependent/glslang.y"
                                                        {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "<", EOpLessThan, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(false, (yyvsp[-1].lex).loc);
    }
#line 5726 "MachineIndependent/glslang_tab.cpp"
    break;

  case 57: /* relational_expression: relational_expression RIGHT_ANGLE shift_expression  */
#line 695 "MachineIndependent/glslang.y"
                                                          {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, ">", EOpGreaterThan, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(false, (yyvsp[-1].lex).loc);
    }
#line 5736 "MachineIndependent/glslang_tab.cpp"
    break;

  case 58: /* relational_expression: relational_expression LE_OP shift_expression  */
#line 700 "MachineIndependent/glslang.y"
                                                    {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "<=", EOpLessThanEqual, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(false, (yyvsp[-1].lex).loc);
    }
#line 5746 "MachineIndependent/glslang_tab.cpp"
    break;

  case 59: /* relational_expression: relational_expression GE_OP shift_expression  */
#line 705 "MachineIndependent/glslang.y"
                                                    {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, ">=", EOpGreaterThanEqual, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(false, (yyvsp[-1].lex).loc);
    }
#line 5756 "MachineIndependent/glslang_tab.cpp"
    break;

  case 60: /* equality_expression: relational_expression  */
#line 713 "MachineIndependent/glslang.y"
                            { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 5762 "MachineIndependent/glslang_tab.cpp"
    break;

  case 61: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 714 "MachineIndependent/glslang.y"
                                                       {
        parseContext.arrayObjectCheck((yyvsp[-1].lex).loc, (yyvsp[-2].interm.intermTypedNode)->getType(), "array comparison");
        parseContext.opaqueCheck((yyvsp[-1].lex).loc, (yyvsp[-2].interm.intermTypedNode)->getType(), "==");
        parseContext.specializationCheck((yyvsp[-1].lex).loc, (yyvsp[-2].interm.intermTypedNode)->getType(), "==");
        parseContext.referenceCheck((yyvsp[-1].lex).loc, (yyvsp[-2].interm.intermTypedNode)->getType(), "==");
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "==", EOpEqual, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(false, (yyvsp[-1].lex).loc);
    }
#line 5776 "MachineIndependent/glslang_tab.cpp"
    break;

  case 62: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 723 "MachineIndependent/glslang.y"
                                                      {
        parseContext.arrayObjectCheck((yyvsp[-1].lex).loc, (yyvsp[-2].interm.intermTypedNode)->getType(), "array comparison");
        parseContext.opaqueCheck((yyvsp[-1].lex).loc, (yyvsp[-2].interm.intermTypedNode)->getType(), "!=");
        parseContext.specializationCheck((yyvsp[-1].lex).loc, (yyvsp[-2].interm.intermTypedNode)->getType(), "!=");
        parseContext.referenceCheck((yyvsp[-1].lex).loc, (yyvsp[-2].interm.intermTypedNode)->getType(), "!=");
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "!=", EOpNotEqual, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(false, (yyvsp[-1].lex).loc);
    }
#line 5790 "MachineIndependent/glslang_tab.cpp"
    break;

  case 63: /* and_expression: equality_expression  */
#line 735 "MachineIndependent/glslang.y"
                          { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 5796 "MachineIndependent/glslang_tab.cpp"
    break;

  case 64: /* and_expression: and_expression AMPERSAND equality_expression  */
#line 736 "MachineIndependent/glslang.y"
                                                   {
        parseContext.fullIntegerCheck((yyvsp[-1].lex).loc, "bitwise and");
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "&", EOpAnd, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
    }
#line 5807 "MachineIndependent/glslang_tab.cpp"
    break;

  case 65: /* exclusive_or_expression: and_expression  */
#line 745 "MachineIndependent/glslang.y"
                     { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 5813 "MachineIndependent/glslang_tab.cpp"
    break;

  case 66: /* exclusive_or_expression: exclusive_or_expression CARET and_expression  */
#line 746 "MachineIndependent/glslang.y"
                                                   {
        parseContext.fullIntegerCheck((yyvsp[-1].lex).loc, "bitwise exclusive or");
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "^", EOpExclusiveOr, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
    }
#line 5824 "MachineIndependent/glslang_tab.cpp"
    break;

  case 67: /* inclusive_or_expression: exclusive_or_expression  */
#line 755 "MachineIndependent/glslang.y"
                              { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 5830 "MachineIndependent/glslang_tab.cpp"
    break;

  case 68: /* inclusive_or_expression: inclusive_or_expression VERTICAL_BAR exclusive_or_expression  */
#line 756 "MachineIndependent/glslang.y"
                                                                   {
        parseContext.fullIntegerCheck((yyvsp[-1].lex).loc, "bitwise inclusive or");
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "|", EOpInclusiveOr, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
    }
#line 5841 "MachineIndependent/glslang_tab.cpp"
    break;

  case 69: /* logical_and_expression: inclusive_or_expression  */
#line 765 "MachineIndependent/glslang.y"
                              { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 5847 "MachineIndependent/glslang_tab.cpp"
    break;

  case 70: /* logical_and_expression: logical_and_expression AND_OP inclusive_or_expression  */
#line 766 "MachineIndependent/glslang.y"
                                                            {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "&&", EOpLogicalAnd, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(false, (yyvsp[-1].lex).loc);
    }
#line 5857 "MachineIndependent/glslang_tab.cpp"
    break;

  case 71: /* logical_xor_expression: logical_and_expression  */
#line 774 "MachineIndependent/glslang.y"
                             { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 5863 "MachineIndependent/glslang_tab.cpp"
    break;

  case 72: /* logical_xor_expression: logical_xor_expression XOR_OP logical_and_expression  */
#line 775 "MachineIndependent/glslang.y"
                                                            {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "^^", EOpLogicalXor, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(false, (yyvsp[-1].lex).loc);
    }
#line 5873 "MachineIndependent/glslang_tab.cpp"
    break;

  case 73: /* logical_or_expression: logical_xor_expression  */
#line 783 "MachineIndependent/glslang.y"
                             { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 5879 "MachineIndependent/glslang_tab.cpp"
    break;

  case 74: /* logical_or_expression: logical_or_expression OR_OP logical_xor_expression  */
#line 784 "MachineIndependent/glslang.y"
                                                          {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "||", EOpLogicalOr, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(false, (yyvsp[-1].lex).loc);
    }
#line 5889 "MachineIndependent/glslang_tab.cpp"
    break;

  case 75: /* conditional_expression: logical_or_expression  */
#line 792 "MachineIndependent/glslang.y"
                            { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 5895 "MachineIndependent/glslang_tab.cpp"
    break;

  case 76: /* $@1: %empty  */
#line 793 "MachineIndependent/glslang.y"
                                     {
        ++parseContext.controlFlowNestingLevel;
    }
#line 5903 "MachineIndependent/glslang_tab.cpp"
    break;

  case 77: /* conditional_expression: logical_or_expression QUESTION $@1 expression COLON assignment_expression  */
#line 796 "MachineIndependent/glslang.y"
                                             {
        --parseContext.controlFlowNestingLevel;
        parseContext.boolCheck((yyvsp[-4].lex).loc, (yyvsp[-5].interm.intermTypedNode));
        parseContext.rValueErrorCheck((yyvsp[-4].lex).loc, "?", (yyvsp[-5].interm.intermTypedNode));
        parseContext.rValueErrorCheck((yyvsp[-1].lex).loc, ":", (yyvsp[-2].interm.intermTypedNode));
        parseContext.rValueErrorCheck((yyvsp[-1].lex).loc, ":", (yyvsp[0].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addSelection((yyvsp[-5].interm.intermTypedNode), (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-4].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[-4].lex).loc, ":", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(parseContext.intermediate.getEnhancedMsgs()), (yyvsp[0].interm.intermTypedNode)->getCompleteString(parseContext.intermediate.getEnhancedMsgs()));
            (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
        }
    }
#line 5920 "MachineIndependent/glslang_tab.cpp"
    break;

  case 78: /* assignment_expression: conditional_expression  */
#line 811 "MachineIndependent/glslang.y"
                             { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 5926 "MachineIndependent/glslang_tab.cpp"
    break;

  case 79: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 812 "MachineIndependent/glslang.y"
                                                                 {
        parseContext.arrayObjectCheck((yyvsp[-1].interm).loc, (yyvsp[-2].interm.intermTypedNode)->getType(), "array assignment");
        parseContext.opaqueCheck((yyvsp[-1].interm).loc, (yyvsp[-2].interm.intermTypedNode)->getType(), "=");
        parseContext.storage16BitAssignmentCheck((yyvsp[-1].interm).loc, (yyvsp[-2].interm.intermTypedNode)->getType(), "=");
        parseContext.specializationCheck((yyvsp[-1].interm).loc, (yyvsp[-2].interm.intermTypedNode)->getType(), "=");
        parseContext.lValueErrorCheck((yyvsp[-1].interm).loc, "assign", (yyvsp[-2].interm.intermTypedNode));
        parseContext.rValueErrorCheck((yyvsp[-1].interm).loc, "assign", (yyvsp[0].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.addAssign((yyvsp[-1].interm).loc, (yyvsp[-1].interm).op, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.assignError((yyvsp[-1].interm).loc, "assign", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(parseContext.intermediate.getEnhancedMsgs()), (yyvsp[0].interm.intermTypedNode)->getCompleteString(parseContext.intermediate.getEnhancedMsgs()));
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
        }
    }
#line 5944 "MachineIndependent/glslang_tab.cpp"
    break;

  case 80: /* assignment_operator: EQUAL  */
#line 828 "MachineIndependent/glslang.y"
            {
        (yyval.interm).loc = (yyvsp[0].lex).loc;
        (yyval.interm).op = EOpAssign;
    }
#line 5953 "MachineIndependent/glslang_tab.cpp"
    break;

  case 81: /* assignment_operator: MUL_ASSIGN  */
#line 832 "MachineIndependent/glslang.y"
                 {
        (yyval.interm).loc = (yyvsp[0].lex).loc;
        (yyval.interm).op = EOpMulAssign;
    }
#line 5962 "MachineIndependent/glslang_tab.cpp"
    break;

  case 82: /* assignment_operator: DIV_ASSIGN  */
#line 836 "MachineIndependent/glslang.y"
                 {
        (yyval.interm).loc = (yyvsp[0].lex).loc;
        (yyval.interm).op = EOpDivAssign;
    }
#line 5971 "MachineIndependent/glslang_tab.cpp"
    break;

  case 83: /* assignment_operator: MOD_ASSIGN  */
#line 840 "MachineIndependent/glslang.y"
                 {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "%=");
        (yyval.interm).loc = (yyvsp[0].lex).loc;
        (yyval.interm).op = EOpModAssign;
    }
#line 5981 "MachineIndependent/glslang_tab.cpp"
    break;

  case 84: /* assignment_operator: ADD_ASSIGN  */
#line 845 "MachineIndependent/glslang.y"
                 {
        (yyval.interm).loc = (yyvsp[0].lex).loc;
        (yyval.interm).op = EOpAddAssign;
    }
#line 5990 "MachineIndependent/glslang_tab.cpp"
    break;

  case 85: /* assignment_operator: SUB_ASSIGN  */
#line 849 "MachineIndependent/glslang.y"
                 {
        (yyval.interm).loc = (yyvsp[0].lex).loc;
        (yyval.interm).op = EOpSubAssign;
    }
#line 5999 "MachineIndependent/glslang_tab.cpp"
    break;

  case 86: /* assignment_operator: LEFT_ASSIGN  */
#line 853 "MachineIndependent/glslang.y"
                  {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "bit-shift left assign");
        (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpLeftShiftAssign;
    }
#line 6008 "MachineIndependent/glslang_tab.cpp"
    break;

  case 87: /* assignment_operator: RIGHT_ASSIGN  */
#line 857 "MachineIndependent/glslang.y"
                   {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "bit-shift right assign");
        (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpRightShiftAssign;
    }
#line 6017 "MachineIndependent/glslang_tab.cpp"
    break;

  case 88: /* assignment_operator: AND_ASSIGN  */
#line 861 "MachineIndependent/glslang.y"
                 {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "bitwise-and assign");
        (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpAndAssign;
    }
#line 6026 "MachineIndependent/glslang_tab.cpp"
    break;

  case 89: /* assignment_operator: XOR_ASSIGN  */
#line 865 "MachineIndependent/glslang.y"
                 {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "bitwise-xor assign");
        (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpExclusiveOrAssign;
    }
#line 6035 "MachineIndependent/glslang_tab.cpp"
    break;

  case 90: /* assignment_operator: OR_ASSIGN  */
#line 869 "MachineIndependent/glslang.y"
                {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "bitwise-or assign");
        (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpInclusiveOrAssign;
    }
#line 6044 "MachineIndependent/glslang_tab.cpp"
    break;

  case 91: /* expression: assignment_expression  */
#line 876 "MachineIndependent/glslang.y"
                            {
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 6052 "MachineIndependent/glslang_tab.cpp"
    break;

  case 92: /* expression: expression COMMA assignment_expression  */
#line 879 "MachineIndependent/glslang.y"
                                             {
        parseContext.samplerConstructorLocationCheck((yyvsp[-1].lex).loc, ",", (yyvsp[0].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addComma((yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[-1].lex).loc, ",", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(parseContext.intermediate.getEnhancedMsgs()), (yyvsp[0].interm.intermTypedNode)->getCompleteString(parseContext.intermediate.getEnhancedMsgs()));
            (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
        }
    }
#line 6065 "MachineIndependent/glslang_tab.cpp"
    break;

  case 93: /* constant_expression: conditional_expression  */
#line 890 "MachineIndependent/glslang.y"
                             {
        parseContext.constantValueCheck((yyvsp[0].interm.intermTypedNode), "");
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 6074 "MachineIndependent/glslang_tab.cpp"
    break;

  case 94: /* declaration: function_prototype SEMICOLON  */
#line 897 "MachineIndependent/glslang.y"
                                   {
        parseContext.handleFunctionDeclarator((yyvsp[-1].interm).loc, *(yyvsp[-1].interm).function, true /* prototype */);
        (yyval.interm.intermNode) = 0;
        // TODO: 4.0 functionality: subroutines: make the identifier a user type for this signature
    }
#line 6084 "MachineIndependent/glslang_tab.cpp"
    break;

  case 95: /* declaration: spirv_instruction_qualifier function_prototype SEMICOLON  */
#line 903 "MachineIndependent/glslang.y"
                                                               {
        parseContext.requireExtensions((yyvsp[-1].interm).loc, 1, &E_GL_EXT_spirv_intrinsics, "SPIR-V instruction qualifier");
        (yyvsp[-1].interm).function->setSpirvInstruction(*(yyvsp[-2].interm.spirvInst)); // Attach SPIR-V intruction qualifier
        parseContext.handleFunctionDeclarator((yyvsp[-1].interm).loc, *(yyvsp[-1].interm).function, true /* prototype */);
        (yyval.interm.intermNode) = 0;
        // TODO: 4.0 functionality: subroutines: make the identifier a user type for this signature
    }
#line 6096 "MachineIndependent/glslang_tab.cpp"
    break;

  case 96: /* declaration: spirv_execution_mode_qualifier SEMICOLON  */
#line 910 "MachineIndependent/glslang.y"
                                               {
        parseContext.globalCheck((yyvsp[0].lex).loc, "SPIR-V execution mode qualifier");
        parseContext.requireExtensions((yyvsp[0].lex).loc, 1, &E_GL_EXT_spirv_intrinsics, "SPIR-V execution mode qualifier");
        (yyval.interm.intermNode) = 0;
    }
#line 6106 "MachineIndependent/glslang_tab.cpp"
    break;

  case 97: /* declaration: init_declarator_list SEMICOLON  */
#line 916 "MachineIndependent/glslang.y"
                                     {
        if ((yyvsp[-1].interm).intermNode && (yyvsp[-1].interm).intermNode->getAsAggregate())
            (yyvsp[-1].interm).intermNode->getAsAggregate()->setOperator(EOpSequence);
        (yyval.interm.intermNode) = (yyvsp[-1].interm).intermNode;
    }
#line 6116 "MachineIndependent/glslang_tab.cpp"
    break;

  case 98: /* declaration: PRECISION precision_qualifier type_specifier SEMICOLON  */
#line 921 "MachineIndependent/glslang.y"
                                                             {
        parseContext.profileRequires((yyvsp[-3].lex).loc, ENoProfile, 130, 0, "precision statement");
        // lazy setting of the previous scope's defaults, has effect only the first time it is called in a particular scope
        parseContext.symbolTable.setPreviousDefaultPrecisions(&parseContext.defaultPrecision[0]);
        parseContext.setDefaultPrecision((yyvsp[-3].lex).loc, (yyvsp[-1].interm.type), (yyvsp[-2].interm.type).qualifier.precision);
        (yyval.interm.intermNode) = 0;
    }
#line 6128 "MachineIndependent/glslang_tab.cpp"
    break;

  case 99: /* declaration: block_structure SEMICOLON  */
#line 928 "MachineIndependent/glslang.y"
                                {
        parseContext.declareBlock((yyvsp[-1].interm).loc, *(yyvsp[-1].interm).typeList);
        (yyval.interm.intermNode) = 0;
    }
#line 6137 "MachineIndependent/glslang_tab.cpp"
    break;

  case 100: /* declaration: block_structure IDENTIFIER SEMICOLON  */
#line 932 "MachineIndependent/glslang.y"
                                           {
        parseContext.declareBlock((yyvsp[-2].interm).loc, *(yyvsp[-2].interm).typeList, (yyvsp[-1].lex).string);
        (yyval.interm.intermNode) = 0;
    }
#line 6146 "MachineIndependent/glslang_tab.cpp"
    break;

  case 101: /* declaration: block_structure IDENTIFIER array_specifier SEMICOLON  */
#line 936 "MachineIndependent/glslang.y"
                                                           {
        parseContext.declareBlock((yyvsp[-3].interm).loc, *(yyvsp[-3].interm).typeList, (yyvsp[-2].lex).string, (yyvsp[-1].interm).arraySizes);
        (yyval.interm.intermNode) = 0;
    }
#line 6155 "MachineIndependent/glslang_tab.cpp"
    break;

  case 102: /* declaration: type_qualifier SEMICOLON  */
#line 940 "MachineIndependent/glslang.y"
                               {
        parseContext.globalQualifierFixCheck((yyvsp[-1].interm.type).loc, (yyvsp[-1].interm.type).qualifier);
        parseContext.updateStandaloneQualifierDefaults((yyvsp[-1].interm.type).loc, (yyvsp[-1].interm.type));
        (yyval.interm.intermNode) = 0;
    }
#line 6165 "MachineIndependent/glslang_tab.cpp"
    break;

  case 103: /* declaration: type_qualifier IDENTIFIER SEMICOLON  */
#line 945 "MachineIndependent/glslang.y"
                                          {
        parseContext.checkNoShaderLayouts((yyvsp[-2].interm.type).loc, (yyvsp[-2].interm.type).shaderQualifiers);
        parseContext.addQualifierToExisting((yyvsp[-2].interm.type).loc, (yyvsp[-2].interm.type).qualifier, *(yyvsp[-1].lex).string);
        (yyval.interm.intermNode) = 0;
    }
#line 6175 "MachineIndependent/glslang_tab.cpp"
    break;

  case 104: /* declaration: type_qualifier IDENTIFIER identifier_list SEMICOLON  */
#line 950 "MachineIndependent/glslang.y"
                                                          {
        parseContext.checkNoShaderLayouts((yyvsp[-3].interm.type).loc, (yyvsp[-3].interm.type).shaderQualifiers);
        (yyvsp[-1].interm.identifierList)->push_back((yyvsp[-2].lex).string);
        parseContext.addQualifierToExisting((yyvsp[-3].interm.type).loc, (yyvsp[-3].interm.type).qualifier, *(yyvsp[-1].interm.identifierList));
        (yyval.interm.intermNode) = 0;
    }
#line 6186 "MachineIndependent/glslang_tab.cpp"
    break;

  case 105: /* $@2: %empty  */
#line 959 "MachineIndependent/glslang.y"
                                           { parseContext.nestedBlockCheck((yyvsp[-2].interm.type).loc); }
#line 6192 "MachineIndependent/glslang_tab.cpp"
    break;

  case 106: /* block_structure: type_qualifier IDENTIFIER LEFT_BRACE $@2 struct_declaration_list RIGHT_BRACE  */
#line 959 "MachineIndependent/glslang.y"
                                                                                                                          {
        --parseContext.blockNestingLevel;
        parseContext.blockName = (yyvsp[-4].lex).string;
        parseContext.globalQualifierFixCheck((yyvsp[-5].interm.type).loc, (yyvsp[-5].interm.type).qualifier);
        parseContext.checkNoShaderLayouts((yyvsp[-5].interm.type).loc, (yyvsp[-5].interm.type).shaderQualifiers);
        parseContext.currentBlockQualifier = (yyvsp[-5].interm.type).qualifier;
        (yyval.interm).loc = (yyvsp[-5].interm.type).loc;
        (yyval.interm).typeList = (yyvsp[-1].interm.typeList);
    }
#line 6206 "MachineIndependent/glslang_tab.cpp"
    break;

  case 107: /* identifier_list: COMMA IDENTIFIER  */
#line 970 "MachineIndependent/glslang.y"
                       {
        (yyval.interm.identifierList) = new TIdentifierList;
        (yyval.interm.identifierList)->push_back((yyvsp[0].lex).string);
    }
#line 6215 "MachineIndependent/glslang_tab.cpp"
    break;

  case 108: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 974 "MachineIndependent/glslang.y"
                                       {
        (yyval.interm.identifierList) = (yyvsp[-2].interm.identifierList);
        (yyval.interm.identifierList)->push_back((yyvsp[0].lex).string);
    }
#line 6224 "MachineIndependent/glslang_tab.cpp"
    break;

  case 109: /* function_prototype: function_declarator RIGHT_PAREN  */
#line 981 "MachineIndependent/glslang.y"
                                       {
        (yyval.interm).function = (yyvsp[-1].interm.function);
        (yyval.interm).loc = (yyvsp[0].lex).loc;
    }
#line 6233 "MachineIndependent/glslang_tab.cpp"
    break;

  case 110: /* function_prototype: function_declarator RIGHT_PAREN attribute  */
#line 985 "MachineIndependent/glslang.y"
                                                {
        (yyval.interm).function = (yyvsp[-2].interm.function);
        (yyval.interm).loc = (yyvsp[-1].lex).loc;
        parseContext.requireExtensions((yyvsp[-1].lex).loc, 1, &E_GL_EXT_subgroup_uniform_control_flow, "attribute");
        parseContext.handleFunctionAttributes((yyvsp[-1].lex).loc, *(yyvsp[0].interm.attributes));
    }
#line 6244 "MachineIndependent/glslang_tab.cpp"
    break;

  case 111: /* function_prototype: attribute function_declarator RIGHT_PAREN  */
#line 991 "MachineIndependent/glslang.y"
                                                {
        (yyval.interm).function = (yyvsp[-1].interm.function);
        (yyval.interm).loc = (yyvsp[0].lex).loc;
        parseContext.requireExtensions((yyvsp[0].lex).loc, 1, &E_GL_EXT_subgroup_uniform_control_flow, "attribute");
        parseContext.handleFunctionAttributes((yyvsp[0].lex).loc, *(yyvsp[-2].interm.attributes));
    }
#line 6255 "MachineIndependent/glslang_tab.cpp"
    break;

  case 112: /* function_prototype: attribute function_declarator RIGHT_PAREN attribute  */
#line 997 "MachineIndependent/glslang.y"
                                                          {
        (yyval.interm).function = (yyvsp[-2].interm.function);
        (yyval.interm).loc = (yyvsp[-1].lex).loc;
        parseContext.requireExtensions((yyvsp[-1].lex).loc, 1, &E_GL_EXT_subgroup_uniform_control_flow, "attribute");
        parseContext.handleFunctionAttributes((yyvsp[-1].lex).loc, *(yyvsp[-3].interm.attributes));
        parseContext.handleFunctionAttributes((yyvsp[-1].lex).loc, *(yyvsp[0].interm.attributes));
    }
#line 6267 "MachineIndependent/glslang_tab.cpp"
    break;

  case 113: /* function_declarator: function_header  */
#line 1007 "MachineIndependent/glslang.y"
                      {
        (yyval.interm.function) = (yyvsp[0].interm.function);
    }
#line 6275 "MachineIndependent/glslang_tab.cpp"
    break;

  case 114: /* function_declarator: function_header_with_parameters  */
#line 1010 "MachineIndependent/glslang.y"
                                      {
        (yyval.interm.function) = (yyvsp[0].interm.function);
    }
#line 6283 "MachineIndependent/glslang_tab.cpp"
    break;

  case 115: /* function_header_with_parameters: function_header parameter_declaration  */
#line 1017 "MachineIndependent/glslang.y"
                                            {
        // Add the parameter
        (yyval.interm.function) = (yyvsp[-1].interm.function);
        if ((yyvsp[0].interm).param.type->getBasicType() != EbtVoid)
            (yyvsp[-1].interm.function)->addParameter((yyvsp[0].interm).param);
        else
            delete (yyvsp[0].interm).param.type;
    }
#line 6296 "MachineIndependent/glslang_tab.cpp"
    break;

  case 116: /* function_header_with_parameters: function_header_with_parameters COMMA parameter_declaration  */
#line 1025 "MachineIndependent/glslang.y"
                                                                  {
        //
        // Only first parameter of one-parameter functions can be void
        // The check for named parameters not being void is done in parameter_declarator
        //
        if ((yyvsp[0].interm).param.type->getBasicType() == EbtVoid) {
            //
            // This parameter > first is void
            //
            parseContext.error((yyvsp[-1].lex).loc, "cannot be an argument type except for '(void)'", "void", "");
            delete (yyvsp[0].interm).param.type;
        } else {
            // Add the parameter
            (yyval.interm.function) = (yyvsp[-2].interm.function);
            (yyvsp[-2].interm.function)->addParameter((yyvsp[0].interm).param);
        }
    }
#line 6318 "MachineIndependent/glslang_tab.cpp"
    break;

  case 117: /* function_header: fully_specified_type IDENTIFIER LEFT_PAREN  */
#line 1045 "MachineIndependent/glslang.y"
                                                 {
        if ((yyvsp[-2].interm.type).qualifier.storage != EvqGlobal && (yyvsp[-2].interm.type).qualifier.storage != EvqTemporary) {
            parseContext.error((yyvsp[-1].lex).loc, "no qualifiers allowed for function return",
                               GetStorageQualifierString((yyvsp[-2].interm.type).qualifier.storage), "");
        }
        if ((yyvsp[-2].interm.type).arraySizes)
            parseContext.arraySizeRequiredCheck((yyvsp[-2].interm.type).loc, *(yyvsp[-2].interm.type).arraySizes);

        // Add the function as a prototype after parsing it (we do not support recursion)
        TFunction *function;
        TType type((yyvsp[-2].interm.type));

        // Potentially rename shader entry point function.  No-op most of the time.
        parseContext.renameShaderFunction((yyvsp[-1].lex).string);

        // Make the function
        function = new TFunction((yyvsp[-1].lex).string, type);
        (yyval.interm.function) = function;
    }
#line 6342 "MachineIndependent/glslang_tab.cpp"
    break;

  case 118: /* parameter_declarator: type_specifier IDENTIFIER  */
#line 1068 "MachineIndependent/glslang.y"
                                {
        if ((yyvsp[-1].interm.type).arraySizes) {
            parseContext.profileRequires((yyvsp[-1].interm.type).loc, ENoProfile, 120, E_GL_3DL_array_objects, "arrayed type");
            parseContext.profileRequires((yyvsp[-1].interm.type).loc, EEsProfile, 300, 0, "arrayed type");
            parseContext.arraySizeRequiredCheck((yyvsp[-1].interm.type).loc, *(yyvsp[-1].interm.type).arraySizes);
        }
        if ((yyvsp[-1].interm.type).basicType == EbtVoid) {
            parseContext.error((yyvsp[0].lex).loc, "illegal use of type 'void'", (yyvsp[0].lex).string->c_str(), "");
        }
        parseContext.reservedErrorCheck((yyvsp[0].lex).loc, *(yyvsp[0].lex).string);

        TParameter param = {(yyvsp[0].lex).string, new TType((yyvsp[-1].interm.type))};
        (yyval.interm).loc = (yyvsp[0].lex).loc;
        (yyval.interm).param = param;
    }
#line 6362 "MachineIndependent/glslang_tab.cpp"
    break;

  case 119: /* parameter_declarator: type_specifier IDENTIFIER array_specifier  */
#line 1083 "MachineIndependent/glslang.y"
                                                {
        if ((yyvsp[-2].interm.type).arraySizes) {
            parseContext.profileRequires((yyvsp[-2].interm.type).loc, ENoProfile, 120, E_GL_3DL_array_objects, "arrayed type");
            parseContext.profileRequires((yyvsp[-2].interm.type).loc, EEsProfile, 300, 0, "arrayed type");
            parseContext.arraySizeRequiredCheck((yyvsp[-2].interm.type).loc, *(yyvsp[-2].interm.type).arraySizes);
        }
        TType* type = new TType((yyvsp[-2].interm.type));
        type->transferArraySizes((yyvsp[0].interm).arraySizes);
        type->copyArrayInnerSizes((yyvsp[-2].interm.type).arraySizes);

        parseContext.arrayOfArrayVersionCheck((yyvsp[-1].lex).loc, type->getArraySizes());
        parseContext.arraySizeRequiredCheck((yyvsp[0].interm).loc, *(yyvsp[0].interm).arraySizes);
        parseContext.reservedErrorCheck((yyvsp[-1].lex).loc, *(yyvsp[-1].lex).string);

        TParameter param = { (yyvsp[-1].lex).string, type };

        (yyval.interm).loc = (yyvsp[-1].lex).loc;
        (yyval.interm).param = param;
    }
#line 6386 "MachineIndependent/glslang_tab.cpp"
    break;

  case 120: /* parameter_declaration: type_qualifier parameter_declarator  */
#line 1108 "MachineIndependent/glslang.y"
                                          {
        (yyval.interm) = (yyvsp[0].interm);
        if ((yyvsp[-1].interm.type).qualifier.precision != EpqNone)
            (yyval.interm).param.type->getQualifier().precision = (yyvsp[-1].interm.type).qualifier.precision;
        parseContext.precisionQualifierCheck((yyval.interm).loc, (yyval.interm).param.type->getBasicType(), (yyval.interm).param.type->getQualifier(), (yyval.interm).param.type->isCoopMat());

        parseContext.checkNoShaderLayouts((yyvsp[-1].interm.type).loc, (yyvsp[-1].interm.type).shaderQualifiers);
        parseContext.parameterTypeCheck((yyvsp[0].interm).loc, (yyvsp[-1].interm.type).qualifier.storage, *(yyval.interm).param.type);
        parseContext.paramCheckFix((yyvsp[-1].interm.type).loc, (yyvsp[-1].interm.type).qualifier, *(yyval.interm).param.type);

    }
#line 6402 "MachineIndependent/glslang_tab.cpp"
    break;

  case 121: /* parameter_declaration: parameter_declarator  */
#line 1119 "MachineIndependent/glslang.y"
                           {
        (yyval.interm) = (yyvsp[0].interm);

        parseContext.parameterTypeCheck((yyvsp[0].interm).loc, EvqIn, *(yyvsp[0].interm).param.type);
        parseContext.paramCheckFixStorage((yyvsp[0].interm).loc, EvqTemporary, *(yyval.interm).param.type);
        parseContext.precisionQualifierCheck((yyval.interm).loc, (yyval.interm).param.type->getBasicType(), (yyval.interm).param.type->getQualifier(), (yyval.interm).param.type->isCoopMat());
    }
#line 6414 "MachineIndependent/glslang_tab.cpp"
    break;

  case 122: /* parameter_declaration: type_qualifier parameter_type_specifier  */
#line 1129 "MachineIndependent/glslang.y"
                                              {
        (yyval.interm) = (yyvsp[0].interm);
        if ((yyvsp[-1].interm.type).qualifier.precision != EpqNone)
            (yyval.interm).param.type->getQualifier().precision = (yyvsp[-1].interm.type).qualifier.precision;
        parseContext.precisionQualifierCheck((yyvsp[-1].interm.type).loc, (yyval.interm).param.type->getBasicType(), (yyval.interm).param.type->getQualifier(), (yyval.interm).param.type->isCoopMat());

        parseContext.checkNoShaderLayouts((yyvsp[-1].interm.type).loc, (yyvsp[-1].interm.type).shaderQualifiers);
        parseContext.parameterTypeCheck((yyvsp[0].interm).loc, (yyvsp[-1].interm.type).qualifier.storage, *(yyval.interm).param.type);
        parseContext.paramCheckFix((yyvsp[-1].interm.type).loc, (yyvsp[-1].interm.type).qualifier, *(yyval.interm).param.type);
    }
#line 6429 "MachineIndependent/glslang_tab.cpp"
    break;

  case 123: /* parameter_declaration: parameter_type_specifier  */
#line 1139 "MachineIndependent/glslang.y"
                               {
        (yyval.interm) = (yyvsp[0].interm);

        parseContext.parameterTypeCheck((yyvsp[0].interm).loc, EvqIn, *(yyvsp[0].interm).param.type);
        parseContext.paramCheckFixStorage((yyvsp[0].interm).loc, EvqTemporary, *(yyval.interm).param.type);
        parseContext.precisionQualifierCheck((yyval.interm).loc, (yyval.interm).param.type->getBasicType(), (yyval.interm).param.type->getQualifier(), (yyval.interm).param.type->isCoopMat());
    }
#line 6441 "MachineIndependent/glslang_tab.cpp"
    break;

  case 124: /* parameter_type_specifier: type_specifier  */
#line 1149 "MachineIndependent/glslang.y"
                     {
        TParameter param = { 0, new TType((yyvsp[0].interm.type)) };
        (yyval.interm).param = param;
        if ((yyvsp[0].interm.type).arraySizes)
            parseContext.arraySizeRequiredCheck((yyvsp[0].interm.type).loc, *(yyvsp[0].interm.type).arraySizes);
    }
#line 6452 "MachineIndependent/glslang_tab.cpp"
    break;

  case 125: /* init_declarator_list: single_declaration  */
#line 1158 "MachineIndependent/glslang.y"
                         {
        (yyval.interm) = (yyvsp[0].interm);
    }
#line 6460 "MachineIndependent/glslang_tab.cpp"
    break;

  case 126: /* init_declarator_list: init_declarator_list COMMA IDENTIFIER  */
#line 1161 "MachineIndependent/glslang.y"
                                            {
        (yyval.interm) = (yyvsp[-2].interm);
        parseContext.declareVariable((yyvsp[0].lex).loc, *(yyvsp[0].lex).string, (yyvsp[-2].interm).type);
    }
#line 6469 "MachineIndependent/glslang_tab.cpp"
    break;

  case 127: /* init_declarator_list: init_declarator_list COMMA IDENTIFIER array_specifier  */
#line 1165 "MachineIndependent/glslang.y"
                                                            {
        (yyval.interm) = (yyvsp[-3].interm);
        parseContext.declareVariable((yyvsp[-1].lex).loc, *(yyvsp[-1].lex).string, (yyvsp[-3].interm).type, (yyvsp[0].interm).arraySizes);
    }
#line 6478 "MachineIndependent/glslang_tab.cpp"
    break;

  case 128: /* init_declarator_list: init_declarator_list COMMA IDENTIFIER array_specifier EQUAL initializer  */
#line 1169 "MachineIndependent/glslang.y"
                                                                              {
        (yyval.interm).type = (yyvsp[-5].interm).type;
        TIntermNode* initNode = parseContext.declareVariable((yyvsp[-3].lex).loc, *(yyvsp[-3].lex).string, (yyvsp[-5].interm).type, (yyvsp[-2].interm).arraySizes, (yyvsp[0].interm.intermTypedNode));
        (yyval.interm).intermNode = parseContext.intermediate.growAggregate((yyvsp[-5].interm).intermNode, initNode, (yyvsp[-1].lex).loc);
    }
#line 6488 "MachineIndependent/glslang_tab.cpp"
    break;

  case 129: /* init_declarator_list: init_declarator_list COMMA IDENTIFIER EQUAL initializer  */
#line 1174 "MachineIndependent/glslang.y"
                                                              {
        (yyval.interm).type = (yyvsp[-4].interm).type;
        TIntermNode* initNode = parseContext.declareVariable((yyvsp[-2].lex).loc, *(yyvsp[-2].lex).string, (yyvsp[-4].interm).type, 0, (yyvsp[0].interm.intermTypedNode));
        (yyval.interm).intermNode = parseContext.intermediate.growAggregate((yyvsp[-4].interm).intermNode, initNode, (yyvsp[-1].lex).loc);
    }
#line 6498 "MachineIndependent/glslang_tab.cpp"
    break;

  case 130: /* single_declaration: fully_specified_type  */
#line 1182 "MachineIndependent/glslang.y"
                           {
        (yyval.interm).type = (yyvsp[0].interm.type);
        (yyval.interm).intermNode = 0;

        parseContext.declareTypeDefaults((yyval.interm).loc, (yyval.interm).type);

    }
#line 6510 "MachineIndependent/glslang_tab.cpp"
    break;

  case 131: /* single_declaration: fully_specified_type IDENTIFIER  */
#line 1189 "MachineIndependent/glslang.y"
                                      {
        (yyval.interm).type = (yyvsp[-1].interm.type);
        (yyval.interm).intermNode = 0;
        parseContext.declareVariable((yyvsp[0].lex).loc, *(yyvsp[0].lex).string, (yyvsp[-1].interm.type));
    }
#line 6520 "MachineIndependent/glslang_tab.cpp"
    break;

  case 132: /* single_declaration: fully_specified_type IDENTIFIER array_specifier  */
#line 1194 "MachineIndependent/glslang.y"
                                                      {
        (yyval.interm).type = (yyvsp[-2].interm.type);
        (yyval.interm).intermNode = 0;
        parseContext.declareVariable((yyvsp[-1].lex).loc, *(yyvsp[-1].lex).string, (yyvsp[-2].interm.type), (yyvsp[0].interm).arraySizes);
    }
#line 6530 "MachineIndependent/glslang_tab.cpp"
    break;

  case 133: /* single_declaration: fully_specified_type IDENTIFIER array_specifier EQUAL initializer  */
#line 1199 "MachineIndependent/glslang.y"
                                                                        {
        (yyval.interm).type = (yyvsp[-4].interm.type);
        TIntermNode* initNode = parseContext.declareVariable((yyvsp[-3].lex).loc, *(yyvsp[-3].lex).string, (yyvsp[-4].interm.type), (yyvsp[-2].interm).arraySizes, (yyvsp[0].interm.intermTypedNode));
        (yyval.interm).intermNode = parseContext.intermediate.growAggregate(0, initNode, (yyvsp[-1].lex).loc);
    }
#line 6540 "MachineIndependent/glslang_tab.cpp"
    break;

  case 134: /* single_declaration: fully_specified_type IDENTIFIER EQUAL initializer  */
#line 1204 "MachineIndependent/glslang.y"
                                                        {
        (yyval.interm).type = (yyvsp[-3].interm.type);
        TIntermNode* initNode = parseContext.declareVariable((yyvsp[-2].lex).loc, *(yyvsp[-2].lex).string, (yyvsp[-3].interm.type), 0, (yyvsp[0].interm.intermTypedNode));
        (yyval.interm).intermNode = parseContext.intermediate.growAggregate(0, initNode, (yyvsp[-1].lex).loc);
    }
#line 6550 "MachineIndependent/glslang_tab.cpp"
    break;

  case 135: /* fully_specified_type: type_specifier  */
#line 1213 "MachineIndependent/glslang.y"
                     {
        (yyval.interm.type) = (yyvsp[0].interm.type);

        parseContext.globalQualifierTypeCheck((yyvsp[0].interm.type).loc, (yyvsp[0].interm.type).qualifier, (yyval.interm.type));
        if ((yyvsp[0].interm.type).arraySizes) {
            parseContext.profileRequires((yyvsp[0].interm.type).loc, ENoProfile, 120, E_GL_3DL_array_objects, "arrayed type");
            parseContext.profileRequires((yyvsp[0].interm.type).loc, EEsProfile, 300, 0, "arrayed type");
        }
        parseContext.precisionQualifierCheck((yyval.interm.type).loc, (yyval.interm.type).basicType, (yyval.interm.type).qualifier, (yyval.interm.type).isCoopmat());
    }
#line 6565 "MachineIndependent/glslang_tab.cpp"
    break;

  case 136: /* fully_specified_type: type_qualifier type_specifier  */
#line 1223 "MachineIndependent/glslang.y"
                                     {
        parseContext.globalQualifierFixCheck((yyvsp[-1].interm.type).loc, (yyvsp[-1].interm.type).qualifier, false, &(yyvsp[0].interm.type));
        parseContext.globalQualifierTypeCheck((yyvsp[-1].interm.type).loc, (yyvsp[-1].interm.type).qualifier, (yyvsp[0].interm.type));

        if ((yyvsp[0].interm.type).arraySizes) {
            parseContext.profileRequires((yyvsp[0].interm.type).loc, ENoProfile, 120, E_GL_3DL_array_objects, "arrayed type");
            parseContext.profileRequires((yyvsp[0].interm.type).loc, EEsProfile, 300, 0, "arrayed type");
        }

        if ((yyvsp[0].interm.type).arraySizes && parseContext.arrayQualifierError((yyvsp[0].interm.type).loc, (yyvsp[-1].interm.type).qualifier))
            (yyvsp[0].interm.type).arraySizes = nullptr;

        parseContext.checkNoShaderLayouts((yyvsp[0].interm.type).loc, (yyvsp[-1].interm.type).shaderQualifiers);
        (yyvsp[0].interm.type).shaderQualifiers.merge((yyvsp[-1].interm.type).shaderQualifiers);
        parseContext.mergeQualifiers((yyvsp[0].interm.type).loc, (yyvsp[0].interm.type).qualifier, (yyvsp[-1].interm.type).qualifier, true);
        parseContext.precisionQualifierCheck((yyvsp[0].interm.type).loc, (yyvsp[0].interm.type).basicType, (yyvsp[0].interm.type).qualifier, (yyvsp[0].interm.type).isCoopmat());

        (yyval.interm.type) = (yyvsp[0].interm.type);

        if (! (yyval.interm.type).qualifier.isInterpolation() &&
            ((parseContext.language == EShLangVertex   && (yyval.interm.type).qualifier.storage == EvqVaryingOut) ||
             (parseContext.language == EShLangFragment && (yyval.interm.type).qualifier.storage == EvqVaryingIn)))
            (yyval.interm.type).qualifier.smooth = true;
    }
#line 6594 "MachineIndependent/glslang_tab.cpp"
    break;

  case 137: /* invariant_qualifier: INVARIANT  */
#line 1250 "MachineIndependent/glslang.y"
                {
        parseContext.globalCheck((yyvsp[0].lex).loc, "invariant");
        parseContext.profileRequires((yyval.interm.type).loc, ENoProfile, 120, 0, "invariant");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.invariant = true;
    }
#line 6605 "MachineIndependent/glslang_tab.cpp"
    break;

  case 138: /* interpolation_qualifier: SMOOTH  */
#line 1259 "MachineIndependent/glslang.y"
             {
        parseContext.globalCheck((yyvsp[0].lex).loc, "smooth");
        parseContext.profileRequires((yyvsp[0].lex).loc, ENoProfile, 130, 0, "smooth");
        parseContext.profileRequires((yyvsp[0].lex).loc, EEsProfile, 300, 0, "smooth");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.smooth = true;
    }
#line 6617 "MachineIndependent/glslang_tab.cpp"
    break;

  case 139: /* interpolation_qualifier: FLAT  */
#line 1266 "MachineIndependent/glslang.y"
           {
        parseContext.globalCheck((yyvsp[0].lex).loc, "flat");
        parseContext.profileRequires((yyvsp[0].lex).loc, ENoProfile, 130, 0, "flat");
        parseContext.profileRequires((yyvsp[0].lex).loc, EEsProfile, 300, 0, "flat");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.flat = true;
    }
#line 6629 "MachineIndependent/glslang_tab.cpp"
    break;

  case 140: /* interpolation_qualifier: NOPERSPECTIVE  */
#line 1274 "MachineIndependent/glslang.y"
                    {
        parseContext.globalCheck((yyvsp[0].lex).loc, "noperspective");
        parseContext.profileRequires((yyvsp[0].lex).loc, EEsProfile, 0, E_GL_NV_shader_noperspective_interpolation, "noperspective");
        parseContext.profileRequires((yyvsp[0].lex).loc, ENoProfile, 130, 0, "noperspective");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.nopersp = true;
    }
#line 6641 "MachineIndependent/glslang_tab.cpp"
    break;

  case 141: /* interpolation_qualifier: EXPLICITINTERPAMD  */
#line 1281 "MachineIndependent/glslang.y"
                        {
        parseContext.globalCheck((yyvsp[0].lex).loc, "__explicitInterpAMD");
        parseContext.profileRequires((yyvsp[0].lex).loc, ECoreProfile, 450, E_GL_AMD_shader_explicit_vertex_parameter, "explicit interpolation");
        parseContext.profileRequires((yyvsp[0].lex).loc, ECompatibilityProfile, 450, E_GL_AMD_shader_explicit_vertex_parameter, "explicit interpolation");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.explicitInterp = true;
    }
#line 6653 "MachineIndependent/glslang_tab.cpp"
    break;

  case 142: /* interpolation_qualifier: PERVERTEXNV  */
#line 1288 "MachineIndependent/glslang.y"
                  {
        parseContext.globalCheck((yyvsp[0].lex).loc, "pervertexNV");
        parseContext.profileRequires((yyvsp[0].lex).loc, ECoreProfile, 0, E_GL_NV_fragment_shader_barycentric, "fragment shader barycentric");
        parseContext.profileRequires((yyvsp[0].lex).loc, ECompatibilityProfile, 0, E_GL_NV_fragment_shader_barycentric, "fragment shader barycentric");
        parseContext.profileRequires((yyvsp[0].lex).loc, EEsProfile, 0, E_GL_NV_fragment_shader_barycentric, "fragment shader barycentric");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.pervertexNV = true;
    }
#line 6666 "MachineIndependent/glslang_tab.cpp"
    break;

  case 143: /* interpolation_qualifier: PERVERTEXEXT  */
#line 1296 "MachineIndependent/glslang.y"
                   {
        parseContext.globalCheck((yyvsp[0].lex).loc, "pervertexEXT");
        parseContext.profileRequires((yyvsp[0].lex).loc, ECoreProfile, 0, E_GL_EXT_fragment_shader_barycentric, "fragment shader barycentric");
        parseContext.profileRequires((yyvsp[0].lex).loc, ECompatibilityProfile, 0, E_GL_EXT_fragment_shader_barycentric, "fragment shader barycentric");
        parseContext.profileRequires((yyvsp[0].lex).loc, EEsProfile, 0, E_GL_EXT_fragment_shader_barycentric, "fragment shader barycentric");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.pervertexEXT = true;
    }
#line 6679 "MachineIndependent/glslang_tab.cpp"
    break;

  case 144: /* interpolation_qualifier: PERPRIMITIVENV  */
#line 1304 "MachineIndependent/glslang.y"
                     {
        // No need for profile version or extension check. Shader stage already checks both.
        parseContext.globalCheck((yyvsp[0].lex).loc, "perprimitiveNV");
        parseContext.requireStage((yyvsp[0].lex).loc, (EShLanguageMask)(EShLangFragmentMask | EShLangMeshMask), "perprimitiveNV");
        // Fragment shader stage doesn't check for extension. So we explicitly add below extension check.
        if (parseContext.language == EShLangFragment)
            parseContext.requireExtensions((yyvsp[0].lex).loc, 1, &E_GL_NV_mesh_shader, "perprimitiveNV");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.perPrimitiveNV = true;
    }
#line 6694 "MachineIndependent/glslang_tab.cpp"
    break;

  case 145: /* interpolation_qualifier: PERPRIMITIVEEXT  */
#line 1314 "MachineIndependent/glslang.y"
                      {
        // No need for profile version or extension check. Shader stage already checks both.
        parseContext.globalCheck((yyvsp[0].lex).loc, "perprimitiveEXT");
        parseContext.requireStage((yyvsp[0].lex).loc, (EShLanguageMask)(EShLangFragmentMask | EShLangMeshMask), "perprimitiveEXT");
        // Fragment shader stage doesn't check for extension. So we explicitly add below extension check.
        if (parseContext.language == EShLangFragment)
            parseContext.requireExtensions((yyvsp[0].lex).loc, 1, &E_GL_EXT_mesh_shader, "perprimitiveEXT");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.perPrimitiveNV = true;
    }
#line 6709 "MachineIndependent/glslang_tab.cpp"
    break;

  case 146: /* interpolation_qualifier: PERVIEWNV  */
#line 1324 "MachineIndependent/glslang.y"
                {
        // No need for profile version or extension check. Shader stage already checks both.
        parseContext.globalCheck((yyvsp[0].lex).loc, "perviewNV");
        parseContext.requireStage((yyvsp[0].lex).loc, EShLangMesh, "perviewNV");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.perViewNV = true;
    }
#line 6721 "MachineIndependent/glslang_tab.cpp"
    break;

  case 147: /* interpolation_qualifier: PERTASKNV  */
#line 1331 "MachineIndependent/glslang.y"
                {
        // No need for profile version or extension check. Shader stage already checks both.
        parseContext.globalCheck((yyvsp[0].lex).loc, "taskNV");
        parseContext.requireStage((yyvsp[0].lex).loc, (EShLanguageMask)(EShLangTaskMask | EShLangMeshMask), "taskNV");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.perTaskNV = true;
    }
#line 6733 "MachineIndependent/glslang_tab.cpp"
    break;

  case 148: /* layout_qualifier: LAYOUT LEFT_PAREN layout_qualifier_id_list RIGHT_PAREN  */
#line 1342 "MachineIndependent/glslang.y"
                                                             {
        (yyval.interm.type) = (yyvsp[-1].interm.type);
    }
#line 6741 "MachineIndependent/glslang_tab.cpp"
    break;

  case 149: /* layout_qualifier_id_list: layout_qualifier_id  */
#line 1348 "MachineIndependent/glslang.y"
                          {
        (yyval.interm.type) = (yyvsp[0].interm.type);
    }
#line 6749 "MachineIndependent/glslang_tab.cpp"
    break;

  case 150: /* layout_qualifier_id_list: layout_qualifier_id_list COMMA layout_qualifier_id  */
#line 1351 "MachineIndependent/glslang.y"
                                                         {
        (yyval.interm.type) = (yyvsp[-2].interm.type);
        (yyval.interm.type).shaderQualifiers.merge((yyvsp[0].interm.type).shaderQualifiers);
        parseContext.mergeObjectLayoutQualifiers((yyval.interm.type).qualifier, (yyvsp[0].interm.type).qualifier, false);
    }
#line 6759 "MachineIndependent/glslang_tab.cpp"
    break;

  case 151: /* layout_qualifier_id: IDENTIFIER  */
#line 1358 "MachineIndependent/glslang.y"
                 {
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        parseContext.setLayoutQualifier((yyvsp[0].lex).loc, (yyval.interm.type), *(yyvsp[0].lex).string);
    }
#line 6768 "MachineIndependent/glslang_tab.cpp"
    break;

  case 152: /* layout_qualifier_id: IDENTIFIER EQUAL constant_expression  */
#line 1362 "MachineIndependent/glslang.y"
                                           {
        (yyval.interm.type).init((yyvsp[-2].lex).loc);
        parseContext.setLayoutQualifier((yyvsp[-2].lex).loc, (yyval.interm.type), *(yyvsp[-2].lex).string, (yyvsp[0].interm.intermTypedNode));
    }
#line 6777 "MachineIndependent/glslang_tab.cpp"
    break;

  case 153: /* layout_qualifier_id: SHARED  */
#line 1366 "MachineIndependent/glslang.y"
             { // because "shared" is both an identifier and a keyword
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        TString strShared("shared");
        parseContext.setLayoutQualifier((yyvsp[0].lex).loc, (yyval.interm.type), strShared);
    }
#line 6787 "MachineIndependent/glslang_tab.cpp"
    break;

  case 154: /* precise_qualifier: PRECISE  */
#line 1375 "MachineIndependent/glslang.y"
              {
        parseContext.profileRequires((yyval.interm.type).loc, ECoreProfile | ECompatibilityProfile, 400, E_GL_ARB_gpu_shader5, "precise");
        parseContext.profileRequires((yyvsp[0].lex).loc, EEsProfile, 320, Num_AEP_gpu_shader5, AEP_gpu_shader5, "precise");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.noContraction = true;
    }
#line 6798 "MachineIndependent/glslang_tab.cpp"
    break;

  case 155: /* type_qualifier: single_type_qualifier  */
#line 1385 "MachineIndependent/glslang.y"
                            {
        (yyval.interm.type) = (yyvsp[0].interm.type);
    }
#line 6806 "MachineIndependent/glslang_tab.cpp"
    break;

  case 156: /* type_qualifier: type_qualifier single_type_qualifier  */
#line 1388 "MachineIndependent/glslang.y"
                                           {
        (yyval.interm.type) = (yyvsp[-1].interm.type);
        if ((yyval.interm.type).basicType == EbtVoid)
            (yyval.interm.type).basicType = (yyvsp[0].interm.type).basicType;

        (yyval.interm.type).shaderQualifiers.merge((yyvsp[0].interm.type).shaderQualifiers);
        parseContext.mergeQualifiers((yyval.interm.type).loc, (yyval.interm.type).qualifier, (yyvsp[0].interm.type).qualifier, false);
    }
#line 6819 "MachineIndependent/glslang_tab.cpp"
    break;

  case 157: /* single_type_qualifier: storage_qualifier  */
#line 1399 "MachineIndependent/glslang.y"
                        {
        (yyval.interm.type) = (yyvsp[0].interm.type);
    }
#line 6827 "MachineIndependent/glslang_tab.cpp"
    break;

  case 158: /* single_type_qualifier: layout_qualifier  */
#line 1402 "MachineIndependent/glslang.y"
                       {
        (yyval.interm.type) = (yyvsp[0].interm.type);
    }
#line 6835 "MachineIndependent/glslang_tab.cpp"
    break;

  case 159: /* single_type_qualifier: precision_qualifier  */
#line 1405 "MachineIndependent/glslang.y"
                          {
        parseContext.checkPrecisionQualifier((yyvsp[0].interm.type).loc, (yyvsp[0].interm.type).qualifier.precision);
        (yyval.interm.type) = (yyvsp[0].interm.type);
    }
#line 6844 "MachineIndependent/glslang_tab.cpp"
    break;

  case 160: /* single_type_qualifier: interpolation_qualifier  */
#line 1409 "MachineIndependent/glslang.y"
                              {
        // allow inheritance of storage qualifier from block declaration
        (yyval.interm.type) = (yyvsp[0].interm.type);
    }
#line 6853 "MachineIndependent/glslang_tab.cpp"
    break;

  case 161: /* single_type_qualifier: invariant_qualifier  */
#line 1413 "MachineIndependent/glslang.y"
                          {
        // allow inheritance of storage qualifier from block declaration
        (yyval.interm.type) = (yyvsp[0].interm.type);
    }
#line 6862 "MachineIndependent/glslang_tab.cpp"
    break;

  case 162: /* single_type_qualifier: precise_qualifier  */
#line 1418 "MachineIndependent/glslang.y"
                        {
        // allow inheritance of storage qualifier from block declaration
        (yyval.interm.type) = (yyvsp[0].interm.type);
    }
#line 6871 "MachineIndependent/glslang_tab.cpp"
    break;

  case 163: /* single_type_qualifier: non_uniform_qualifier  */
#line 1422 "MachineIndependent/glslang.y"
                            {
        (yyval.interm.type) = (yyvsp[0].interm.type);
    }
#line 6879 "MachineIndependent/glslang_tab.cpp"
    break;

  case 164: /* single_type_qualifier: spirv_storage_class_qualifier  */
#line 1425 "MachineIndependent/glslang.y"
                                    {
        parseContext.globalCheck((yyvsp[0].interm.type).loc, "spirv_storage_class");
        parseContext.requireExtensions((yyvsp[0].interm.type).loc, 1, &E_GL_EXT_spirv_intrinsics, "SPIR-V storage class qualifier");
        (yyval.interm.type) = (yyvsp[0].interm.type);
    }
#line 6889 "MachineIndependent/glslang_tab.cpp"
    break;

  case 165: /* single_type_qualifier: spirv_decorate_qualifier  */
#line 1430 "MachineIndependent/glslang.y"
                               {
        parseContext.requireExtensions((yyvsp[0].interm.type).loc, 1, &E_GL_EXT_spirv_intrinsics, "SPIR-V decorate qualifier");
        (yyval.interm.type) = (yyvsp[0].interm.type);
    }
#line 6898 "MachineIndependent/glslang_tab.cpp"
    break;

  case 166: /* single_type_qualifier: SPIRV_BY_REFERENCE  */
#line 1434 "MachineIndependent/glslang.y"
                         {
        parseContext.requireExtensions((yyvsp[0].lex).loc, 1, &E_GL_EXT_spirv_intrinsics, "spirv_by_reference");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.setSpirvByReference();
    }
#line 6908 "MachineIndependent/glslang_tab.cpp"
    break;

  case 167: /* single_type_qualifier: SPIRV_LITERAL  */
#line 1439 "MachineIndependent/glslang.y"
                    {
        parseContext.requireExtensions((yyvsp[0].lex).loc, 1, &E_GL_EXT_spirv_intrinsics, "spirv_by_literal");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.setSpirvLiteral();
    }
#line 6918 "MachineIndependent/glslang_tab.cpp"
    break;

  case 168: /* storage_qualifier: CONST  */
#line 1448 "MachineIndependent/glslang.y"
            {
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqConst;  // will later turn into EvqConstReadOnly, if the initializer is not constant
    }
#line 6927 "MachineIndependent/glslang_tab.cpp"
    break;

  case 169: /* storage_qualifier: INOUT  */
#line 1452 "MachineIndependent/glslang.y"
            {
        parseContext.globalCheck((yyvsp[0].lex).loc, "inout");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqInOut;
    }
#line 6937 "MachineIndependent/glslang_tab.cpp"
    break;

  case 170: /* storage_qualifier: IN  */
#line 1457 "MachineIndependent/glslang.y"
         {
        parseContext.globalCheck((yyvsp[0].lex).loc, "in");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        // whether this is a parameter "in" or a pipeline "in" will get sorted out a bit later
        (yyval.interm.type).qualifier.storage = EvqIn;
    }
#line 6948 "MachineIndependent/glslang_tab.cpp"
    break;

  case 171: /* storage_qualifier: OUT  */
#line 1463 "MachineIndependent/glslang.y"
          {
        parseContext.globalCheck((yyvsp[0].lex).loc, "out");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        // whether this is a parameter "out" or a pipeline "out" will get sorted out a bit later
        (yyval.interm.type).qualifier.storage = EvqOut;
    }
#line 6959 "MachineIndependent/glslang_tab.cpp"
    break;

  case 172: /* storage_qualifier: CENTROID  */
#line 1469 "MachineIndependent/glslang.y"
               {
        parseContext.profileRequires((yyvsp[0].lex).loc, ENoProfile, 120, 0, "centroid");
        parseContext.profileRequires((yyvsp[0].lex).loc, EEsProfile, 300, 0, "centroid");
        parseContext.globalCheck((yyvsp[0].lex).loc, "centroid");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.centroid = true;
    }
#line 6971 "MachineIndependent/glslang_tab.cpp"
    break;

  case 173: /* storage_qualifier: UNIFORM  */
#line 1476 "MachineIndependent/glslang.y"
              {
        parseContext.globalCheck((yyvsp[0].lex).loc, "uniform");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqUniform;
    }
#line 6981 "MachineIndependent/glslang_tab.cpp"
    break;

  case 174: /* storage_qualifier: TILEIMAGEEXT  */
#line 1481 "MachineIndependent/glslang.y"
                   {
        parseContext.globalCheck((yyvsp[0].lex).loc, "tileImageEXT");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqTileImageEXT;
    }
#line 6991 "MachineIndependent/glslang_tab.cpp"
    break;

  case 175: /* storage_qualifier: SHARED  */
#line 1486 "MachineIndependent/glslang.y"
             {
        parseContext.globalCheck((yyvsp[0].lex).loc, "shared");
        parseContext.profileRequires((yyvsp[0].lex).loc, ECoreProfile | ECompatibilityProfile, 430, E_GL_ARB_compute_shader, "shared");
        parseContext.profileRequires((yyvsp[0].lex).loc, EEsProfile, 310, 0, "shared");
        parseContext.requireStage((yyvsp[0].lex).loc, (EShLanguageMask)(EShLangComputeMask | EShLangMeshMask | EShLangTaskMask), "shared");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqShared;
    }
#line 7004 "MachineIndependent/glslang_tab.cpp"
    break;

  case 176: /* storage_qualifier: BUFFER  */
#line 1494 "MachineIndependent/glslang.y"
             {
        parseContext.globalCheck((yyvsp[0].lex).loc, "buffer");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqBuffer;
    }
#line 7014 "MachineIndependent/glslang_tab.cpp"
    break;

  case 177: /* storage_qualifier: ATTRIBUTE  */
#line 1500 "MachineIndependent/glslang.y"
                {
        parseContext.requireStage((yyvsp[0].lex).loc, EShLangVertex, "attribute");
        parseContext.checkDeprecated((yyvsp[0].lex).loc, ECoreProfile, 130, "attribute");
        parseContext.checkDeprecated((yyvsp[0].lex).loc, ENoProfile, 130, "attribute");
        parseContext.requireNotRemoved((yyvsp[0].lex).loc, ECoreProfile, 420, "attribute");
        parseContext.requireNotRemoved((yyvsp[0].lex).loc, EEsProfile, 300, "attribute");

        parseContext.globalCheck((yyvsp[0].lex).loc, "attribute");

        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqVaryingIn;
    }
#line 7031 "MachineIndependent/glslang_tab.cpp"
    break;

  case 178: /* storage_qualifier: VARYING  */
#line 1512 "MachineIndependent/glslang.y"
              {
        parseContext.checkDeprecated((yyvsp[0].lex).loc, ENoProfile, 130, "varying");
        parseContext.checkDeprecated((yyvsp[0].lex).loc, ECoreProfile, 130, "varying");
        parseContext.requireNotRemoved((yyvsp[0].lex).loc, ECoreProfile, 420, "varying");
        parseContext.requireNotRemoved((yyvsp[0].lex).loc, EEsProfile, 300, "varying");

        parseContext.globalCheck((yyvsp[0].lex).loc, "varying");

        (yyval.interm.type).init((yyvsp[0].lex).loc);
        if (parseContext.language == EShLangVertex)
            (yyval.interm.type).qualifier.storage = EvqVaryingOut;
        else
            (yyval.interm.type).qualifier.storage = EvqVaryingIn;
    }
#line 7050 "MachineIndependent/glslang_tab.cpp"
    break;

  case 179: /* storage_qualifier: PATCH  */
#line 1526 "MachineIndependent/glslang.y"
            {
        parseContext.globalCheck((yyvsp[0].lex).loc, "patch");
        parseContext.requireStage((yyvsp[0].lex).loc, (EShLanguageMask)(EShLangTessControlMask | EShLangTessEvaluationMask), "patch");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.patch = true;
    }
#line 7061 "MachineIndependent/glslang_tab.cpp"
    break;

  case 180: /* storage_qualifier: SAMPLE  */
#line 1532 "MachineIndependent/glslang.y"
             {
        parseContext.globalCheck((yyvsp[0].lex).loc, "sample");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.sample = true;
    }
#line 7071 "MachineIndependent/glslang_tab.cpp"
    break;

  case 181: /* storage_qualifier: HITATTRNV  */
#line 1537 "MachineIndependent/glslang.y"
                {
        parseContext.globalCheck((yyvsp[0].lex).loc, "hitAttributeNV");
        parseContext.requireStage((yyvsp[0].lex).loc, (EShLanguageMask)(EShLangIntersectMask | EShLangClosestHitMask
            | EShLangAnyHitMask), "hitAttributeNV");
        parseContext.profileRequires((yyvsp[0].lex).loc, ECoreProfile, 460, E_GL_NV_ray_tracing, "hitAttributeNV");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqHitAttr;
    }
#line 7084 "MachineIndependent/glslang_tab.cpp"
    break;

  case 182: /* storage_qualifier: HITOBJECTATTRNV  */
#line 1545 "MachineIndependent/glslang.y"
                          {
        parseContext.globalCheck((yyvsp[0].lex).loc, "hitAttributeNV");
        parseContext.requireStage((yyvsp[0].lex).loc, (EShLanguageMask)(EShLangRayGenMask | EShLangClosestHitMask
            | EShLangMissMask), "hitObjectAttributeNV");
        parseContext.profileRequires((yyvsp[0].lex).loc, ECoreProfile, 460, E_GL_NV_shader_invocation_reorder, "hitObjectAttributeNV");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqHitObjectAttrNV;
	}
#line 7097 "MachineIndependent/glslang_tab.cpp"
    break;

  case 183: /* storage_qualifier: HITATTREXT  */
#line 1553 "MachineIndependent/glslang.y"
                 {
        parseContext.globalCheck((yyvsp[0].lex).loc, "hitAttributeEXT");
        parseContext.requireStage((yyvsp[0].lex).loc, (EShLanguageMask)(EShLangIntersectMask | EShLangClosestHitMask
            | EShLangAnyHitMask), "hitAttributeEXT");
        parseContext.profileRequires((yyvsp[0].lex).loc, ECoreProfile, 460, E_GL_EXT_ray_tracing, "hitAttributeNV");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqHitAttr;
    }
#line 7110 "MachineIndependent/glslang_tab.cpp"
    break;

  case 184: /* storage_qualifier: PAYLOADNV  */
#line 1561 "MachineIndependent/glslang.y"
                {
        parseContext.globalCheck((yyvsp[0].lex).loc, "rayPayloadNV");
        parseContext.requireStage((yyvsp[0].lex).loc, (EShLanguageMask)(EShLangRayGenMask | EShLangClosestHitMask |
            EShLangAnyHitMask | EShLangMissMask), "rayPayloadNV");
        parseContext.profileRequires((yyvsp[0].lex).loc, ECoreProfile, 460, E_GL_NV_ray_tracing, "rayPayloadNV");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqPayload;
    }
#line 7123 "MachineIndependent/glslang_tab.cpp"
    break;

  case 185: /* storage_qualifier: PAYLOADEXT  */
#line 1569 "MachineIndependent/glslang.y"
                 {
        parseContext.globalCheck((yyvsp[0].lex).loc, "rayPayloadEXT");
        parseContext.requireStage((yyvsp[0].lex).loc, (EShLanguageMask)(EShLangRayGenMask | EShLangClosestHitMask |
            EShLangAnyHitMask | EShLangMissMask), "rayPayloadEXT");
        parseContext.profileRequires((yyvsp[0].lex).loc, ECoreProfile, 460, E_GL_EXT_ray_tracing, "rayPayloadEXT");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqPayload;
    }
#line 7136 "MachineIndependent/glslang_tab.cpp"
    break;

  case 186: /* storage_qualifier: PAYLOADINNV  */
#line 1577 "MachineIndependent/glslang.y"
                  {
        parseContext.globalCheck((yyvsp[0].lex).loc, "rayPayloadInNV");
        parseContext.requireStage((yyvsp[0].lex).loc, (EShLanguageMask)(EShLangClosestHitMask |
            EShLangAnyHitMask | EShLangMissMask), "rayPayloadInNV");
        parseContext.profileRequires((yyvsp[0].lex).loc, ECoreProfile, 460, E_GL_NV_ray_tracing, "rayPayloadInNV");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqPayloadIn;
    }
#line 7149 "MachineIndependent/glslang_tab.cpp"
    break;

  case 187: /* storage_qualifier: PAYLOADINEXT  */
#line 1585 "MachineIndependent/glslang.y"
                   {
        parseContext.globalCheck((yyvsp[0].lex).loc, "rayPayloadInEXT");
        parseContext.requireStage((yyvsp[0].lex).loc, (EShLanguageMask)(EShLangClosestHitMask |
            EShLangAnyHitMask | EShLangMissMask), "rayPayloadInEXT");
        parseContext.profileRequires((yyvsp[0].lex).loc, ECoreProfile, 460, E_GL_EXT_ray_tracing, "rayPayloadInEXT");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqPayloadIn;
    }
#line 7162 "MachineIndependent/glslang_tab.cpp"
    break;

  case 188: /* storage_qualifier: CALLDATANV  */
#line 1593 "MachineIndependent/glslang.y"
                 {
        parseContext.globalCheck((yyvsp[0].lex).loc, "callableDataNV");
        parseContext.requireStage((yyvsp[0].lex).loc, (EShLanguageMask)(EShLangRayGenMask |
            EShLangClosestHitMask | EShLangMissMask | EShLangCallableMask), "callableDataNV");
        parseContext.profileRequires((yyvsp[0].lex).loc, ECoreProfile, 460, E_GL_NV_ray_tracing, "callableDataNV");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqCallableData;
    }
#line 7175 "MachineIndependent/glslang_tab.cpp"
    break;

  case 189: /* storage_qualifier: CALLDATAEXT  */
#line 1601 "MachineIndependent/glslang.y"
                  {
        parseContext.globalCheck((yyvsp[0].lex).loc, "callableDataEXT");
        parseContext.requireStage((yyvsp[0].lex).loc, (EShLanguageMask)(EShLangRayGenMask |
            EShLangClosestHitMask | EShLangMissMask | EShLangCallableMask), "callableDataEXT");
        parseContext.profileRequires((yyvsp[0].lex).loc, ECoreProfile, 460, E_GL_EXT_ray_tracing, "callableDataEXT");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqCallableData;
    }
#line 7188 "MachineIndependent/glslang_tab.cpp"
    break;

  case 190: /* storage_qualifier: CALLDATAINNV  */
#line 1609 "MachineIndependent/glslang.y"
                   {
        parseContext.globalCheck((yyvsp[0].lex).loc, "callableDataInNV");
        parseContext.requireStage((yyvsp[0].lex).loc, (EShLanguageMask)(EShLangCallableMask), "callableDataInNV");
        parseContext.profileRequires((yyvsp[0].lex).loc, ECoreProfile, 460, E_GL_NV_ray_tracing, "callableDataInNV");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqCallableDataIn;
    }
#line 7200 "MachineIndependent/glslang_tab.cpp"
    break;

  case 191: /* storage_qualifier: CALLDATAINEXT  */
#line 1616 "MachineIndependent/glslang.y"
                    {
        parseContext.globalCheck((yyvsp[0].lex).loc, "callableDataInEXT");
        parseContext.requireStage((yyvsp[0].lex).loc, (EShLanguageMask)(EShLangCallableMask), "callableDataInEXT");
        parseContext.profileRequires((yyvsp[0].lex).loc, ECoreProfile, 460, E_GL_EXT_ray_tracing, "callableDataInEXT");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqCallableDataIn;
    }
#line 7212 "MachineIndependent/glslang_tab.cpp"
    break;

  case 192: /* storage_qualifier: COHERENT  */
#line 1623 "MachineIndependent/glslang.y"
               {
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.coherent = true;
    }
#line 7221 "MachineIndependent/glslang_tab.cpp"
    break;

  case 193: /* storage_qualifier: DEVICECOHERENT  */
#line 1627 "MachineIndependent/glslang.y"
                     {
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        parseContext.requireExtensions((yyvsp[0].lex).loc, 1, &E_GL_KHR_memory_scope_semantics, "devicecoherent");
        (yyval.interm.type).qualifier.devicecoherent = true;
    }
#line 7231 "MachineIndependent/glslang_tab.cpp"
    break;

  case 194: /* storage_qualifier: QUEUEFAMILYCOHERENT  */
#line 1632 "MachineIndependent/glslang.y"
                          {
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        parseContext.requireExtensions((yyvsp[0].lex).loc, 1, &E_GL_KHR_memory_scope_semantics, "queuefamilycoherent");
        (yyval.interm.type).qualifier.queuefamilycoherent = true;
    }
#line 7241 "MachineIndependent/glslang_tab.cpp"
    break;

  case 195: /* storage_qualifier: WORKGROUPCOHERENT  */
#line 1637 "MachineIndependent/glslang.y"
                        {
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        parseContext.requireExtensions((yyvsp[0].lex).loc, 1, &E_GL_KHR_memory_scope_semantics, "workgroupcoherent");
        (yyval.interm.type).qualifier.workgroupcoherent = true;
    }
#line 7251 "MachineIndependent/glslang_tab.cpp"
    break;

  case 196: /* storage_qualifier: SUBGROUPCOHERENT  */
#line 1642 "MachineIndependent/glslang.y"
                       {
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        parseContext.requireExtensions((yyvsp[0].lex).loc, 1, &E_GL_KHR_memory_scope_semantics, "subgroupcoherent");
        (yyval.interm.type).qualifier.subgroupcoherent = true;
    }
#line 7261 "MachineIndependent/glslang_tab.cpp"
    break;

  case 197: /* storage_qualifier: NONPRIVATE  */
#line 1647 "MachineIndependent/glslang.y"
                 {
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        parseContext.requireExtensions((yyvsp[0].lex).loc, 1, &E_GL_KHR_memory_scope_semantics, "nonprivate");
        (yyval.interm.type).qualifier.nonprivate = true;
    }
#line 7271 "MachineIndependent/glslang_tab.cpp"
    break;

  case 198: /* storage_qualifier: SHADERCALLCOHERENT  */
#line 1652 "MachineIndependent/glslang.y"
                         {
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        parseContext.requireExtensions((yyvsp[0].lex).loc, 1, &E_GL_EXT_ray_tracing, "shadercallcoherent");
        (yyval.interm.type).qualifier.shadercallcoherent = true;
    }
#line 7281 "MachineIndependent/glslang_tab.cpp"
    break;

  case 199: /* storage_qualifier: VOLATILE  */
#line 1657 "MachineIndependent/glslang.y"
               {
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.volatil = true;
    }
#line 7290 "MachineIndependent/glslang_tab.cpp"
    break;

  case 200: /* storage_qualifier: RESTRICT  */
#line 1661 "MachineIndependent/glslang.y"
               {
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.restrict = true;
    }
#line 7299 "MachineIndependent/glslang_tab.cpp"
    break;

  case 201: /* storage_qualifier: READONLY  */
#line 1665 "MachineIndependent/glslang.y"
               {
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.readonly = true;
    }
#line 7308 "MachineIndependent/glslang_tab.cpp"
    break;

  case 202: /* storage_qualifier: WRITEONLY  */
#line 1669 "MachineIndependent/glslang.y"
                {
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.writeonly = true;
    }
#line 7317 "MachineIndependent/glslang_tab.cpp"
    break;

  case 203: /* storage_qualifier: SUBROUTINE  */
#line 1673 "MachineIndependent/glslang.y"
                 {
        parseContext.spvRemoved((yyvsp[0].lex).loc, "subroutine");
        parseContext.globalCheck((yyvsp[0].lex).loc, "subroutine");
        parseContext.unimplemented((yyvsp[0].lex).loc, "subroutine");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
    }
#line 7328 "MachineIndependent/glslang_tab.cpp"
    break;

  case 204: /* storage_qualifier: SUBROUTINE LEFT_PAREN type_name_list RIGHT_PAREN  */
#line 1679 "MachineIndependent/glslang.y"
                                                       {
        parseContext.spvRemoved((yyvsp[-3].lex).loc, "subroutine");
        parseContext.globalCheck((yyvsp[-3].lex).loc, "subroutine");
        parseContext.unimplemented((yyvsp[-3].lex).loc, "subroutine");
        (yyval.interm.type).init((yyvsp[-3].lex).loc);
    }
#line 7339 "MachineIndependent/glslang_tab.cpp"
    break;

  case 205: /* storage_qualifier: TASKPAYLOADWORKGROUPEXT  */
#line 1685 "MachineIndependent/glslang.y"
                              {
        // No need for profile version or extension check. Shader stage already checks both.
        parseContext.globalCheck((yyvsp[0].lex).loc, "taskPayloadSharedEXT");
        parseContext.requireStage((yyvsp[0].lex).loc, (EShLanguageMask)(EShLangTaskMask | EShLangMeshMask), "taskPayloadSharedEXT  ");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqtaskPayloadSharedEXT;
    }
#line 7351 "MachineIndependent/glslang_tab.cpp"
    break;

  case 206: /* non_uniform_qualifier: NONUNIFORM  */
#line 1697 "MachineIndependent/glslang.y"
                 {
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.nonUniform = true;
    }
#line 7360 "MachineIndependent/glslang_tab.cpp"
    break;

  case 207: /* type_name_list: IDENTIFIER  */
#line 1704 "MachineIndependent/glslang.y"
                 {
        // TODO
    }
#line 7368 "MachineIndependent/glslang_tab.cpp"
    break;

  case 208: /* type_name_list: type_name_list COMMA IDENTIFIER  */
#line 1707 "MachineIndependent/glslang.y"
                                      {
        // TODO: 4.0 semantics: subroutines
        // 1) make sure each identifier is a type declared earlier with SUBROUTINE
        // 2) save all of the identifiers for future comparison with the declared function
    }
#line 7378 "MachineIndependent/glslang_tab.cpp"
    break;

  case 209: /* type_specifier: type_specifier_nonarray type_parameter_specifier_opt  */
#line 1716 "MachineIndependent/glslang.y"
                                                           {
        (yyval.interm.type) = (yyvsp[-1].interm.type);
        (yyval.interm.type).qualifier.precision = parseContext.getDefaultPrecision((yyval.interm.type));
        (yyval.interm.type).typeParameters = (yyvsp[0].interm.typeParameters);
        parseContext.coopMatTypeParametersCheck((yyvsp[-1].interm.type).loc, (yyval.interm.type));

    }
#line 7390 "MachineIndependent/glslang_tab.cpp"
    break;

  case 210: /* type_specifier: type_specifier_nonarray type_parameter_specifier_opt array_specifier  */
#line 1723 "MachineIndependent/glslang.y"
                                                                           {
        parseContext.arrayOfArrayVersionCheck((yyvsp[0].interm).loc, (yyvsp[0].interm).arraySizes);
        (yyval.interm.type) = (yyvsp[-2].interm.type);
        (yyval.interm.type).qualifier.precision = parseContext.getDefaultPrecision((yyval.interm.type));
        (yyval.interm.type).typeParameters = (yyvsp[-1].interm.typeParameters);
        (yyval.interm.type).arraySizes = (yyvsp[0].interm).arraySizes;
        parseContext.coopMatTypeParametersCheck((yyvsp[-2].interm.type).loc, (yyval.interm.type));
    }
#line 7403 "MachineIndependent/glslang_tab.cpp"
    break;

  case 211: /* array_specifier: LEFT_BRACKET RIGHT_BRACKET  */
#line 1734 "MachineIndependent/glslang.y"
                                 {
        (yyval.interm).loc = (yyvsp[-1].lex).loc;
        (yyval.interm).arraySizes = new TArraySizes;
        (yyval.interm).arraySizes->addInnerSize();
    }
#line 7413 "MachineIndependent/glslang_tab.cpp"
    break;

  case 212: /* array_specifier: LEFT_BRACKET conditional_expression RIGHT_BRACKET  */
#line 1739 "MachineIndependent/glslang.y"
                                                        {
        (yyval.interm).loc = (yyvsp[-2].lex).loc;
        (yyval.interm).arraySizes = new TArraySizes;

        TArraySize size;
        parseContext.arraySizeCheck((yyvsp[-1].interm.intermTypedNode)->getLoc(), (yyvsp[-1].interm.intermTypedNode), size, "array size");
        (yyval.interm).arraySizes->addInnerSize(size);
    }
#line 7426 "MachineIndependent/glslang_tab.cpp"
    break;

  case 213: /* array_specifier: array_specifier LEFT_BRACKET RIGHT_BRACKET  */
#line 1747 "MachineIndependent/glslang.y"
                                                 {
        (yyval.interm) = (yyvsp[-2].interm);
        (yyval.interm).arraySizes->addInnerSize();
    }
#line 7435 "MachineIndependent/glslang_tab.cpp"
    break;

  case 214: /* array_specifier: array_specifier LEFT_BRACKET conditional_expression RIGHT_BRACKET  */
#line 1751 "MachineIndependent/glslang.y"
                                                                        {
        (yyval.interm) = (yyvsp[-3].interm);

        TArraySize size;
        parseContext.arraySizeCheck((yyvsp[-1].interm.intermTypedNode)->getLoc(), (yyvsp[-1].interm.intermTypedNode), size, "array size");
        (yyval.interm).arraySizes->addInnerSize(size);
    }
#line 7447 "MachineIndependent/glslang_tab.cpp"
    break;

  case 215: /* type_parameter_specifier_opt: type_parameter_specifier  */
#line 1761 "MachineIndependent/glslang.y"
                               {
        (yyval.interm.typeParameters) = (yyvsp[0].interm.typeParameters);
    }
#line 7455 "MachineIndependent/glslang_tab.cpp"
    break;

  case 216: /* type_parameter_specifier_opt: %empty  */
#line 1764 "MachineIndependent/glslang.y"
                        {
        (yyval.interm.typeParameters) = 0;
    }
#line 7463 "MachineIndependent/glslang_tab.cpp"
    break;

  case 217: /* type_parameter_specifier: LEFT_ANGLE type_parameter_specifier_list RIGHT_ANGLE  */
#line 1770 "MachineIndependent/glslang.y"
                                                           {
        (yyval.interm.typeParameters) = (yyvsp[-1].interm.typeParameters);
    }
#line 7471 "MachineIndependent/glslang_tab.cpp"
    break;

  case 218: /* type_parameter_specifier_list: type_specifier  */
#line 1776 "MachineIndependent/glslang.y"
                     {
        (yyval.interm.typeParameters) = new TTypeParameters;
        (yyval.interm.typeParameters)->arraySizes = new TArraySizes;
        (yyval.interm.typeParameters)->basicType = (yyvsp[0].interm.type).basicType;
    }
#line 7481 "MachineIndependent/glslang_tab.cpp"
    break;

  case 219: /* type_parameter_specifier_list: unary_expression  */
#line 1781 "MachineIndependent/glslang.y"
                       {
        (yyval.interm.typeParameters) = new TTypeParameters;
        (yyval.interm.typeParameters)->arraySizes = new TArraySizes;

        TArraySize size;
        parseContext.arraySizeCheck((yyvsp[0].interm.intermTypedNode)->getLoc(), (yyvsp[0].interm.intermTypedNode), size, "type parameter", true);
        (yyval.interm.typeParameters)->arraySizes->addInnerSize(size);
    }
#line 7494 "MachineIndependent/glslang_tab.cpp"
    break;

  case 220: /* type_parameter_specifier_list: type_parameter_specifier_list COMMA unary_expression  */
#line 1789 "MachineIndependent/glslang.y"
                                                           {
        (yyval.interm.typeParameters) = (yyvsp[-2].interm.typeParameters);

        TArraySize size;
        parseContext.arraySizeCheck((yyvsp[0].interm.intermTypedNode)->getLoc(), (yyvsp[0].interm.intermTypedNode), size, "type parameter", true);
        (yyval.interm.typeParameters)->arraySizes->addInnerSize(size);
    }
#line 7506 "MachineIndependent/glslang_tab.cpp"
    break;

  case 221: /* type_specifier_nonarray: VOID  */
#line 1799 "MachineIndependent/glslang.y"
           {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtVoid;
    }
#line 7515 "MachineIndependent/glslang_tab.cpp"
    break;

  case 222: /* type_specifier_nonarray: FLOAT  */
#line 1803 "MachineIndependent/glslang.y"
            {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
    }
#line 7524 "MachineIndependent/glslang_tab.cpp"
    break;

  case 223: /* type_specifier_nonarray: INT  */
#line 1807 "MachineIndependent/glslang.y"
          {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt;
    }
#line 7533 "MachineIndependent/glslang_tab.cpp"
    break;

  case 224: /* type_specifier_nonarray: UINT  */
#line 1811 "MachineIndependent/glslang.y"
           {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "unsigned integer");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint;
    }
#line 7543 "MachineIndependent/glslang_tab.cpp"
    break;

  case 225: /* type_specifier_nonarray: BOOL  */
#line 1816 "MachineIndependent/glslang.y"
           {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtBool;
    }
#line 7552 "MachineIndependent/glslang_tab.cpp"
    break;

  case 226: /* type_specifier_nonarray: VEC2  */
#line 1820 "MachineIndependent/glslang.y"
           {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setVector(2);
    }
#line 7562 "MachineIndependent/glslang_tab.cpp"
    break;

  case 227: /* type_specifier_nonarray: VEC3  */
#line 1825 "MachineIndependent/glslang.y"
           {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setVector(3);
    }
#line 7572 "MachineIndependent/glslang_tab.cpp"
    break;

  case 228: /* type_specifier_nonarray: VEC4  */
#line 1830 "MachineIndependent/glslang.y"
           {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setVector(4);
    }
#line 7582 "MachineIndependent/glslang_tab.cpp"
    break;

  case 229: /* type_specifier_nonarray: BVEC2  */
#line 1835 "MachineIndependent/glslang.y"
            {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtBool;
        (yyval.interm.type).setVector(2);
    }
#line 7592 "MachineIndependent/glslang_tab.cpp"
    break;

  case 230: /* type_specifier_nonarray: BVEC3  */
#line 1840 "MachineIndependent/glslang.y"
            {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtBool;
        (yyval.interm.type).setVector(3);
    }
#line 7602 "MachineIndependent/glslang_tab.cpp"
    break;

  case 231: /* type_specifier_nonarray: BVEC4  */
#line 1845 "MachineIndependent/glslang.y"
            {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtBool;
        (yyval.interm.type).setVector(4);
    }
#line 7612 "MachineIndependent/glslang_tab.cpp"
    break;

  case 232: /* type_specifier_nonarray: IVEC2  */
#line 1850 "MachineIndependent/glslang.y"
            {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt;
        (yyval.interm.type).setVector(2);
    }
#line 7622 "MachineIndependent/glslang_tab.cpp"
    break;

  case 233: /* type_specifier_nonarray: IVEC3  */
#line 1855 "MachineIndependent/glslang.y"
            {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt;
        (yyval.interm.type).setVector(3);
    }
#line 7632 "MachineIndependent/glslang_tab.cpp"
    break;

  case 234: /* type_specifier_nonarray: IVEC4  */
#line 1860 "MachineIndependent/glslang.y"
            {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt;
        (yyval.interm.type).setVector(4);
    }
#line 7642 "MachineIndependent/glslang_tab.cpp"
    break;

  case 235: /* type_specifier_nonarray: UVEC2  */
#line 1865 "MachineIndependent/glslang.y"
            {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "unsigned integer vector");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint;
        (yyval.interm.type).setVector(2);
    }
#line 7653 "MachineIndependent/glslang_tab.cpp"
    break;

  case 236: /* type_specifier_nonarray: UVEC3  */
#line 1871 "MachineIndependent/glslang.y"
            {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "unsigned integer vector");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint;
        (yyval.interm.type).setVector(3);
    }
#line 7664 "MachineIndependent/glslang_tab.cpp"
    break;

  case 237: /* type_specifier_nonarray: UVEC4  */
#line 1877 "MachineIndependent/glslang.y"
            {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "unsigned integer vector");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint;
        (yyval.interm.type).setVector(4);
    }
#line 7675 "MachineIndependent/glslang_tab.cpp"
    break;

  case 238: /* type_specifier_nonarray: MAT2  */
#line 1883 "MachineIndependent/glslang.y"
           {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(2, 2);
    }
#line 7685 "MachineIndependent/glslang_tab.cpp"
    break;

  case 239: /* type_specifier_nonarray: MAT3  */
#line 1888 "MachineIndependent/glslang.y"
           {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(3, 3);
    }
#line 7695 "MachineIndependent/glslang_tab.cpp"
    break;

  case 240: /* type_specifier_nonarray: MAT4  */
#line 1893 "MachineIndependent/glslang.y"
           {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(4, 4);
    }
#line 7705 "MachineIndependent/glslang_tab.cpp"
    break;

  case 241: /* type_specifier_nonarray: MAT2X2  */
#line 1898 "MachineIndependent/glslang.y"
             {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(2, 2);
    }
#line 7715 "MachineIndependent/glslang_tab.cpp"
    break;

  case 242: /* type_specifier_nonarray: MAT2X3  */
#line 1903 "MachineIndependent/glslang.y"
             {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(2, 3);
    }
#line 7725 "MachineIndependent/glslang_tab.cpp"
    break;

  case 243: /* type_specifier_nonarray: MAT2X4  */
#line 1908 "MachineIndependent/glslang.y"
             {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(2, 4);
    }
#line 7735 "MachineIndependent/glslang_tab.cpp"
    break;

  case 244: /* type_specifier_nonarray: MAT3X2  */
#line 1913 "MachineIndependent/glslang.y"
             {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(3, 2);
    }
#line 7745 "MachineIndependent/glslang_tab.cpp"
    break;

  case 245: /* type_specifier_nonarray: MAT3X3  */
#line 1918 "MachineIndependent/glslang.y"
             {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(3, 3);
    }
#line 7755 "MachineIndependent/glslang_tab.cpp"
    break;

  case 246: /* type_specifier_nonarray: MAT3X4  */
#line 1923 "MachineIndependent/glslang.y"
             {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(3, 4);
    }
#line 7765 "MachineIndependent/glslang_tab.cpp"
    break;

  case 247: /* type_specifier_nonarray: MAT4X2  */
#line 1928 "MachineIndependent/glslang.y"
             {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(4, 2);
    }
#line 7775 "MachineIndependent/glslang_tab.cpp"
    break;

  case 248: /* type_specifier_nonarray: MAT4X3  */
#line 1933 "MachineIndependent/glslang.y"
             {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(4, 3);
    }
#line 7785 "MachineIndependent/glslang_tab.cpp"
    break;

  case 249: /* type_specifier_nonarray: MAT4X4  */
#line 1938 "MachineIndependent/glslang.y"
             {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(4, 4);
    }
#line 7795 "MachineIndependent/glslang_tab.cpp"
    break;

  case 250: /* type_specifier_nonarray: DOUBLE  */
#line 1944 "MachineIndependent/glslang.y"
             {
        parseContext.requireProfile((yyvsp[0].lex).loc, ECoreProfile | ECompatibilityProfile, "double");
        if (! parseContext.symbolTable.atBuiltInLevel())
            parseContext.doubleCheck((yyvsp[0].lex).loc, "double");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
    }
#line 7807 "MachineIndependent/glslang_tab.cpp"
    break;

  case 251: /* type_specifier_nonarray: FLOAT16_T  */
#line 1951 "MachineIndependent/glslang.y"
                {
        parseContext.float16ScalarVectorCheck((yyvsp[0].lex).loc, "float16_t", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat16;
    }
#line 7817 "MachineIndependent/glslang_tab.cpp"
    break;

  case 252: /* type_specifier_nonarray: FLOAT32_T  */
#line 1956 "MachineIndependent/glslang.y"
                {
        parseContext.explicitFloat32Check((yyvsp[0].lex).loc, "float32_t", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
    }
#line 7827 "MachineIndependent/glslang_tab.cpp"
    break;

  case 253: /* type_specifier_nonarray: FLOAT64_T  */
#line 1961 "MachineIndependent/glslang.y"
                {
        parseContext.explicitFloat64Check((yyvsp[0].lex).loc, "float64_t", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
    }
#line 7837 "MachineIndependent/glslang_tab.cpp"
    break;

  case 254: /* type_specifier_nonarray: INT8_T  */
#line 1966 "MachineIndependent/glslang.y"
             {
        parseContext.int8ScalarVectorCheck((yyvsp[0].lex).loc, "8-bit signed integer", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt8;
    }
#line 7847 "MachineIndependent/glslang_tab.cpp"
    break;

  case 255: /* type_specifier_nonarray: UINT8_T  */
#line 1971 "MachineIndependent/glslang.y"
              {
        parseContext.int8ScalarVectorCheck((yyvsp[0].lex).loc, "8-bit unsigned integer", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint8;
    }
#line 7857 "MachineIndependent/glslang_tab.cpp"
    break;

  case 256: /* type_specifier_nonarray: INT16_T  */
#line 1976 "MachineIndependent/glslang.y"
              {
        parseContext.int16ScalarVectorCheck((yyvsp[0].lex).loc, "16-bit signed integer", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt16;
    }
#line 7867 "MachineIndependent/glslang_tab.cpp"
    break;

  case 257: /* type_specifier_nonarray: UINT16_T  */
#line 1981 "MachineIndependent/glslang.y"
               {
        parseContext.int16ScalarVectorCheck((yyvsp[0].lex).loc, "16-bit unsigned integer", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint16;
    }
#line 7877 "MachineIndependent/glslang_tab.cpp"
    break;

  case 258: /* type_specifier_nonarray: INT32_T  */
#line 1986 "MachineIndependent/glslang.y"
              {
        parseContext.explicitInt32Check((yyvsp[0].lex).loc, "32-bit signed integer", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt;
    }
#line 7887 "MachineIndependent/glslang_tab.cpp"
    break;

  case 259: /* type_specifier_nonarray: UINT32_T  */
#line 1991 "MachineIndependent/glslang.y"
               {
        parseContext.explicitInt32Check((yyvsp[0].lex).loc, "32-bit unsigned integer", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint;
    }
#line 7897 "MachineIndependent/glslang_tab.cpp"
    break;

  case 260: /* type_specifier_nonarray: INT64_T  */
#line 1996 "MachineIndependent/glslang.y"
              {
        parseContext.int64Check((yyvsp[0].lex).loc, "64-bit integer", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt64;
    }
#line 7907 "MachineIndependent/glslang_tab.cpp"
    break;

  case 261: /* type_specifier_nonarray: UINT64_T  */
#line 2001 "MachineIndependent/glslang.y"
               {
        parseContext.int64Check((yyvsp[0].lex).loc, "64-bit unsigned integer", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint64;
    }
#line 7917 "MachineIndependent/glslang_tab.cpp"
    break;

  case 262: /* type_specifier_nonarray: DVEC2  */
#line 2006 "MachineIndependent/glslang.y"
            {
        parseContext.requireProfile((yyvsp[0].lex).loc, ECoreProfile | ECompatibilityProfile, "double vector");
        if (! parseContext.symbolTable.atBuiltInLevel())
            parseContext.doubleCheck((yyvsp[0].lex).loc, "double vector");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setVector(2);
    }
#line 7930 "MachineIndependent/glslang_tab.cpp"
    break;

  case 263: /* type_specifier_nonarray: DVEC3  */
#line 2014 "MachineIndependent/glslang.y"
            {
        parseContext.requireProfile((yyvsp[0].lex).loc, ECoreProfile | ECompatibilityProfile, "double vector");
        if (! parseContext.symbolTable.atBuiltInLevel())
            parseContext.doubleCheck((yyvsp[0].lex).loc, "double vector");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setVector(3);
    }
#line 7943 "MachineIndependent/glslang_tab.cpp"
    break;

  case 264: /* type_specifier_nonarray: DVEC4  */
#line 2022 "MachineIndependent/glslang.y"
            {
        parseContext.requireProfile((yyvsp[0].lex).loc, ECoreProfile | ECompatibilityProfile, "double vector");
        if (! parseContext.symbolTable.atBuiltInLevel())
            parseContext.doubleCheck((yyvsp[0].lex).loc, "double vector");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setVector(4);
    }
#line 7956 "MachineIndependent/glslang_tab.cpp"
    break;

  case 265: /* type_specifier_nonarray: F16VEC2  */
#line 2030 "MachineIndependent/glslang.y"
              {
        parseContext.float16ScalarVectorCheck((yyvsp[0].lex).loc, "half float vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat16;
        (yyval.interm.type).setVector(2);
    }
#line 7967 "MachineIndependent/glslang_tab.cpp"
    break;

  case 266: /* type_specifier_nonarray: F16VEC3  */
#line 2036 "MachineIndependent/glslang.y"
              {
        parseContext.float16ScalarVectorCheck((yyvsp[0].lex).loc, "half float vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat16;
        (yyval.interm.type).setVector(3);
    }
#line 7978 "MachineIndependent/glslang_tab.cpp"
    break;

  case 267: /* type_specifier_nonarray: F16VEC4  */
#line 2042 "MachineIndependent/glslang.y"
              {
        parseContext.float16ScalarVectorCheck((yyvsp[0].lex).loc, "half float vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat16;
        (yyval.interm.type).setVector(4);
    }
#line 7989 "MachineIndependent/glslang_tab.cpp"
    break;

  case 268: /* type_specifier_nonarray: F32VEC2  */
#line 2048 "MachineIndependent/glslang.y"
              {
        parseContext.explicitFloat32Check((yyvsp[0].lex).loc, "float32_t vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setVector(2);
    }
#line 8000 "MachineIndependent/glslang_tab.cpp"
    break;

  case 269: /* type_specifier_nonarray: F32VEC3  */
#line 2054 "MachineIndependent/glslang.y"
              {
        parseContext.explicitFloat32Check((yyvsp[0].lex).loc, "float32_t vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setVector(3);
    }
#line 8011 "MachineIndependent/glslang_tab.cpp"
    break;

  case 270: /* type_specifier_nonarray: F32VEC4  */
#line 2060 "MachineIndependent/glslang.y"
              {
        parseContext.explicitFloat32Check((yyvsp[0].lex).loc, "float32_t vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setVector(4);
    }
#line 8022 "MachineIndependent/glslang_tab.cpp"
    break;

  case 271: /* type_specifier_nonarray: F64VEC2  */
#line 2066 "MachineIndependent/glslang.y"
              {
        parseContext.explicitFloat64Check((yyvsp[0].lex).loc, "float64_t vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setVector(2);
    }
#line 8033 "MachineIndependent/glslang_tab.cpp"
    break;

  case 272: /* type_specifier_nonarray: F64VEC3  */
#line 2072 "MachineIndependent/glslang.y"
              {
        parseContext.explicitFloat64Check((yyvsp[0].lex).loc, "float64_t vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setVector(3);
    }
#line 8044 "MachineIndependent/glslang_tab.cpp"
    break;

  case 273: /* type_specifier_nonarray: F64VEC4  */
#line 2078 "MachineIndependent/glslang.y"
              {
        parseContext.explicitFloat64Check((yyvsp[0].lex).loc, "float64_t vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setVector(4);
    }
#line 8055 "MachineIndependent/glslang_tab.cpp"
    break;

  case 274: /* type_specifier_nonarray: I8VEC2  */
#line 2084 "MachineIndependent/glslang.y"
             {
        parseContext.int8ScalarVectorCheck((yyvsp[0].lex).loc, "8-bit signed integer vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt8;
        (yyval.interm.type).setVector(2);
    }
#line 8066 "MachineIndependent/glslang_tab.cpp"
    break;

  case 275: /* type_specifier_nonarray: I8VEC3  */
#line 2090 "MachineIndependent/glslang.y"
             {
        parseContext.int8ScalarVectorCheck((yyvsp[0].lex).loc, "8-bit signed integer vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt8;
        (yyval.interm.type).setVector(3);
    }
#line 8077 "MachineIndependent/glslang_tab.cpp"
    break;

  case 276: /* type_specifier_nonarray: I8VEC4  */
#line 2096 "MachineIndependent/glslang.y"
             {
        parseContext.int8ScalarVectorCheck((yyvsp[0].lex).loc, "8-bit signed integer vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt8;
        (yyval.interm.type).setVector(4);
    }
#line 8088 "MachineIndependent/glslang_tab.cpp"
    break;

  case 277: /* type_specifier_nonarray: I16VEC2  */
#line 2102 "MachineIndependent/glslang.y"
              {
        parseContext.int16ScalarVectorCheck((yyvsp[0].lex).loc, "16-bit signed integer vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt16;
        (yyval.interm.type).setVector(2);
    }
#line 8099 "MachineIndependent/glslang_tab.cpp"
    break;

  case 278: /* type_specifier_nonarray: I16VEC3  */
#line 2108 "MachineIndependent/glslang.y"
              {
        parseContext.int16ScalarVectorCheck((yyvsp[0].lex).loc, "16-bit signed integer vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt16;
        (yyval.interm.type).setVector(3);
    }
#line 8110 "MachineIndependent/glslang_tab.cpp"
    break;

  case 279: /* type_specifier_nonarray: I16VEC4  */
#line 2114 "MachineIndependent/glslang.y"
              {
        parseContext.int16ScalarVectorCheck((yyvsp[0].lex).loc, "16-bit signed integer vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt16;
        (yyval.interm.type).setVector(4);
    }
#line 8121 "MachineIndependent/glslang_tab.cpp"
    break;

  case 280: /* type_specifier_nonarray: I32VEC2  */
#line 2120 "MachineIndependent/glslang.y"
              {
        parseContext.explicitInt32Check((yyvsp[0].lex).loc, "32-bit signed integer vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt;
        (yyval.interm.type).setVector(2);
    }
#line 8132 "MachineIndependent/glslang_tab.cpp"
    break;

  case 281: /* type_specifier_nonarray: I32VEC3  */
#line 2126 "MachineIndependent/glslang.y"
              {
        parseContext.explicitInt32Check((yyvsp[0].lex).loc, "32-bit signed integer vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt;
        (yyval.interm.type).setVector(3);
    }
#line 8143 "MachineIndependent/glslang_tab.cpp"
    break;

  case 282: /* type_specifier_nonarray: I32VEC4  */
#line 2132 "MachineIndependent/glslang.y"
              {
        parseContext.explicitInt32Check((yyvsp[0].lex).loc, "32-bit signed integer vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt;
        (yyval.interm.type).setVector(4);
    }
#line 8154 "MachineIndependent/glslang_tab.cpp"
    break;

  case 283: /* type_specifier_nonarray: I64VEC2  */
#line 2138 "MachineIndependent/glslang.y"
              {
        parseContext.int64Check((yyvsp[0].lex).loc, "64-bit integer vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt64;
        (yyval.interm.type).setVector(2);
    }
#line 8165 "MachineIndependent/glslang_tab.cpp"
    break;

  case 284: /* type_specifier_nonarray: I64VEC3  */
#line 2144 "MachineIndependent/glslang.y"
              {
        parseContext.int64Check((yyvsp[0].lex).loc, "64-bit integer vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt64;
        (yyval.interm.type).setVector(3);
    }
#line 8176 "MachineIndependent/glslang_tab.cpp"
    break;

  case 285: /* type_specifier_nonarray: I64VEC4  */
#line 2150 "MachineIndependent/glslang.y"
              {
        parseContext.int64Check((yyvsp[0].lex).loc, "64-bit integer vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt64;
        (yyval.interm.type).setVector(4);
    }
#line 8187 "MachineIndependent/glslang_tab.cpp"
    break;

  case 286: /* type_specifier_nonarray: U8VEC2  */
#line 2156 "MachineIndependent/glslang.y"
             {
        parseContext.int8ScalarVectorCheck((yyvsp[0].lex).loc, "8-bit unsigned integer vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint8;
        (yyval.interm.type).setVector(2);
    }
#line 8198 "MachineIndependent/glslang_tab.cpp"
    break;

  case 287: /* type_specifier_nonarray: U8VEC3  */
#line 2162 "MachineIndependent/glslang.y"
             {
        parseContext.int8ScalarVectorCheck((yyvsp[0].lex).loc, "8-bit unsigned integer vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint8;
        (yyval.interm.type).setVector(3);
    }
#line 8209 "MachineIndependent/glslang_tab.cpp"
    break;

  case 288: /* type_specifier_nonarray: U8VEC4  */
#line 2168 "MachineIndependent/glslang.y"
             {
        parseContext.int8ScalarVectorCheck((yyvsp[0].lex).loc, "8-bit unsigned integer vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint8;
        (yyval.interm.type).setVector(4);
    }
#line 8220 "MachineIndependent/glslang_tab.cpp"
    break;

  case 289: /* type_specifier_nonarray: U16VEC2  */
#line 2174 "MachineIndependent/glslang.y"
              {
        parseContext.int16ScalarVectorCheck((yyvsp[0].lex).loc, "16-bit unsigned integer vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint16;
        (yyval.interm.type).setVector(2);
    }
#line 8231 "MachineIndependent/glslang_tab.cpp"
    break;

  case 290: /* type_specifier_nonarray: U16VEC3  */
#line 2180 "MachineIndependent/glslang.y"
              {
        parseContext.int16ScalarVectorCheck((yyvsp[0].lex).loc, "16-bit unsigned integer vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint16;
        (yyval.interm.type).setVector(3);
    }
#line 8242 "MachineIndependent/glslang_tab.cpp"
    break;

  case 291: /* type_specifier_nonarray: U16VEC4  */
#line 2186 "MachineIndependent/glslang.y"
              {
        parseContext.int16ScalarVectorCheck((yyvsp[0].lex).loc, "16-bit unsigned integer vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint16;
        (yyval.interm.type).setVector(4);
    }
#line 8253 "MachineIndependent/glslang_tab.cpp"
    break;

  case 292: /* type_specifier_nonarray: U32VEC2  */
#line 2192 "MachineIndependent/glslang.y"
              {
        parseContext.explicitInt32Check((yyvsp[0].lex).loc, "32-bit unsigned integer vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint;
        (yyval.interm.type).setVector(2);
    }
#line 8264 "MachineIndependent/glslang_tab.cpp"
    break;

  case 293: /* type_specifier_nonarray: U32VEC3  */
#line 2198 "MachineIndependent/glslang.y"
              {
        parseContext.explicitInt32Check((yyvsp[0].lex).loc, "32-bit unsigned integer vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint;
        (yyval.interm.type).setVector(3);
    }
#line 8275 "MachineIndependent/glslang_tab.cpp"
    break;

  case 294: /* type_specifier_nonarray: U32VEC4  */
#line 2204 "MachineIndependent/glslang.y"
              {
        parseContext.explicitInt32Check((yyvsp[0].lex).loc, "32-bit unsigned integer vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint;
        (yyval.interm.type).setVector(4);
    }
#line 8286 "MachineIndependent/glslang_tab.cpp"
    break;

  case 295: /* type_specifier_nonarray: U64VEC2  */
#line 2210 "MachineIndependent/glslang.y"
              {
        parseContext.int64Check((yyvsp[0].lex).loc, "64-bit unsigned integer vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint64;
        (yyval.interm.type).setVector(2);
    }
#line 8297 "MachineIndependent/glslang_tab.cpp"
    break;

  case 296: /* type_specifier_nonarray: U64VEC3  */
#line 2216 "MachineIndependent/glslang.y"
              {
        parseContext.int64Check((yyvsp[0].lex).loc, "64-bit unsigned integer vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint64;
        (yyval.interm.type).setVector(3);
    }
#line 8308 "MachineIndependent/glslang_tab.cpp"
    break;

  case 297: /* type_specifier_nonarray: U64VEC4  */
#line 2222 "MachineIndependent/glslang.y"
              {
        parseContext.int64Check((yyvsp[0].lex).loc, "64-bit unsigned integer vector", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint64;
        (yyval.interm.type).setVector(4);
    }
#line 8319 "MachineIndependent/glslang_tab.cpp"
    break;

  case 298: /* type_specifier_nonarray: DMAT2  */
#line 2228 "MachineIndependent/glslang.y"
            {
        parseContext.requireProfile((yyvsp[0].lex).loc, ECoreProfile | ECompatibilityProfile, "double matrix");
        if (! parseContext.symbolTable.atBuiltInLevel())
            parseContext.doubleCheck((yyvsp[0].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(2, 2);
    }
#line 8332 "MachineIndependent/glslang_tab.cpp"
    break;

  case 299: /* type_specifier_nonarray: DMAT3  */
#line 2236 "MachineIndependent/glslang.y"
            {
        parseContext.requireProfile((yyvsp[0].lex).loc, ECoreProfile | ECompatibilityProfile, "double matrix");
        if (! parseContext.symbolTable.atBuiltInLevel())
            parseContext.doubleCheck((yyvsp[0].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(3, 3);
    }
#line 8345 "MachineIndependent/glslang_tab.cpp"
    break;

  case 300: /* type_specifier_nonarray: DMAT4  */
#line 2244 "MachineIndependent/glslang.y"
            {
        parseContext.requireProfile((yyvsp[0].lex).loc, ECoreProfile | ECompatibilityProfile, "double matrix");
        if (! parseContext.symbolTable.atBuiltInLevel())
            parseContext.doubleCheck((yyvsp[0].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(4, 4);
    }
#line 8358 "MachineIndependent/glslang_tab.cpp"
    break;

  case 301: /* type_specifier_nonarray: DMAT2X2  */
#line 2252 "MachineIndependent/glslang.y"
              {
        parseContext.requireProfile((yyvsp[0].lex).loc, ECoreProfile | ECompatibilityProfile, "double matrix");
        if (! parseContext.symbolTable.atBuiltInLevel())
            parseContext.doubleCheck((yyvsp[0].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(2, 2);
    }
#line 8371 "MachineIndependent/glslang_tab.cpp"
    break;

  case 302: /* type_specifier_nonarray: DMAT2X3  */
#line 2260 "MachineIndependent/glslang.y"
              {
        parseContext.requireProfile((yyvsp[0].lex).loc, ECoreProfile | ECompatibilityProfile, "double matrix");
        if (! parseContext.symbolTable.atBuiltInLevel())
            parseContext.doubleCheck((yyvsp[0].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(2, 3);
    }
#line 8384 "MachineIndependent/glslang_tab.cpp"
    break;

  case 303: /* type_specifier_nonarray: DMAT2X4  */
#line 2268 "MachineIndependent/glslang.y"
              {
        parseContext.requireProfile((yyvsp[0].lex).loc, ECoreProfile | ECompatibilityProfile, "double matrix");
        if (! parseContext.symbolTable.atBuiltInLevel())
            parseContext.doubleCheck((yyvsp[0].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(2, 4);
    }
#line 8397 "MachineIndependent/glslang_tab.cpp"
    break;

  case 304: /* type_specifier_nonarray: DMAT3X2  */
#line 2276 "MachineIndependent/glslang.y"
              {
        parseContext.requireProfile((yyvsp[0].lex).loc, ECoreProfile | ECompatibilityProfile, "double matrix");
        if (! parseContext.symbolTable.atBuiltInLevel())
            parseContext.doubleCheck((yyvsp[0].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(3, 2);
    }
#line 8410 "MachineIndependent/glslang_tab.cpp"
    break;

  case 305: /* type_specifier_nonarray: DMAT3X3  */
#line 2284 "MachineIndependent/glslang.y"
              {
        parseContext.requireProfile((yyvsp[0].lex).loc, ECoreProfile | ECompatibilityProfile, "double matrix");
        if (! parseContext.symbolTable.atBuiltInLevel())
            parseContext.doubleCheck((yyvsp[0].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(3, 3);
    }
#line 8423 "MachineIndependent/glslang_tab.cpp"
    break;

  case 306: /* type_specifier_nonarray: DMAT3X4  */
#line 2292 "MachineIndependent/glslang.y"
              {
        parseContext.requireProfile((yyvsp[0].lex).loc, ECoreProfile | ECompatibilityProfile, "double matrix");
        if (! parseContext.symbolTable.atBuiltInLevel())
            parseContext.doubleCheck((yyvsp[0].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(3, 4);
    }
#line 8436 "MachineIndependent/glslang_tab.cpp"
    break;

  case 307: /* type_specifier_nonarray: DMAT4X2  */
#line 2300 "MachineIndependent/glslang.y"
              {
        parseContext.requireProfile((yyvsp[0].lex).loc, ECoreProfile | ECompatibilityProfile, "double matrix");
        if (! parseContext.symbolTable.atBuiltInLevel())
            parseContext.doubleCheck((yyvsp[0].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(4, 2);
    }
#line 8449 "MachineIndependent/glslang_tab.cpp"
    break;

  case 308: /* type_specifier_nonarray: DMAT4X3  */
#line 2308 "MachineIndependent/glslang.y"
              {
        parseContext.requireProfile((yyvsp[0].lex).loc, ECoreProfile | ECompatibilityProfile, "double matrix");
        if (! parseContext.symbolTable.atBuiltInLevel())
            parseContext.doubleCheck((yyvsp[0].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(4, 3);
    }
#line 8462 "MachineIndependent/glslang_tab.cpp"
    break;

  case 309: /* type_specifier_nonarray: DMAT4X4  */
#line 2316 "MachineIndependent/glslang.y"
              {
        parseContext.requireProfile((yyvsp[0].lex).loc, ECoreProfile | ECompatibilityProfile, "double matrix");
        if (! parseContext.symbolTable.atBuiltInLevel())
            parseContext.doubleCheck((yyvsp[0].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(4, 4);
    }
#line 8475 "MachineIndependent/glslang_tab.cpp"
    break;

  case 310: /* type_specifier_nonarray: F16MAT2  */
#line 2324 "MachineIndependent/glslang.y"
              {
        parseContext.float16Check((yyvsp[0].lex).loc, "half float matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat16;
        (yyval.interm.type).setMatrix(2, 2);
    }
#line 8486 "MachineIndependent/glslang_tab.cpp"
    break;

  case 311: /* type_specifier_nonarray: F16MAT3  */
#line 2330 "MachineIndependent/glslang.y"
              {
        parseContext.float16Check((yyvsp[0].lex).loc, "half float matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat16;
        (yyval.interm.type).setMatrix(3, 3);
    }
#line 8497 "MachineIndependent/glslang_tab.cpp"
    break;

  case 312: /* type_specifier_nonarray: F16MAT4  */
#line 2336 "MachineIndependent/glslang.y"
              {
        parseContext.float16Check((yyvsp[0].lex).loc, "half float matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat16;
        (yyval.interm.type).setMatrix(4, 4);
    }
#line 8508 "MachineIndependent/glslang_tab.cpp"
    break;

  case 313: /* type_specifier_nonarray: F16MAT2X2  */
#line 2342 "MachineIndependent/glslang.y"
                {
        parseContext.float16Check((yyvsp[0].lex).loc, "half float matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat16;
        (yyval.interm.type).setMatrix(2, 2);
    }
#line 8519 "MachineIndependent/glslang_tab.cpp"
    break;

  case 314: /* type_specifier_nonarray: F16MAT2X3  */
#line 2348 "MachineIndependent/glslang.y"
                {
        parseContext.float16Check((yyvsp[0].lex).loc, "half float matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat16;
        (yyval.interm.type).setMatrix(2, 3);
    }
#line 8530 "MachineIndependent/glslang_tab.cpp"
    break;

  case 315: /* type_specifier_nonarray: F16MAT2X4  */
#line 2354 "MachineIndependent/glslang.y"
                {
        parseContext.float16Check((yyvsp[0].lex).loc, "half float matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat16;
        (yyval.interm.type).setMatrix(2, 4);
    }
#line 8541 "MachineIndependent/glslang_tab.cpp"
    break;

  case 316: /* type_specifier_nonarray: F16MAT3X2  */
#line 2360 "MachineIndependent/glslang.y"
                {
        parseContext.float16Check((yyvsp[0].lex).loc, "half float matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat16;
        (yyval.interm.type).setMatrix(3, 2);
    }
#line 8552 "MachineIndependent/glslang_tab.cpp"
    break;

  case 317: /* type_specifier_nonarray: F16MAT3X3  */
#line 2366 "MachineIndependent/glslang.y"
                {
        parseContext.float16Check((yyvsp[0].lex).loc, "half float matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat16;
        (yyval.interm.type).setMatrix(3, 3);
    }
#line 8563 "MachineIndependent/glslang_tab.cpp"
    break;

  case 318: /* type_specifier_nonarray: F16MAT3X4  */
#line 2372 "MachineIndependent/glslang.y"
                {
        parseContext.float16Check((yyvsp[0].lex).loc, "half float matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat16;
        (yyval.interm.type).setMatrix(3, 4);
    }
#line 8574 "MachineIndependent/glslang_tab.cpp"
    break;

  case 319: /* type_specifier_nonarray: F16MAT4X2  */
#line 2378 "MachineIndependent/glslang.y"
                {
        parseContext.float16Check((yyvsp[0].lex).loc, "half float matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat16;
        (yyval.interm.type).setMatrix(4, 2);
    }
#line 8585 "MachineIndependent/glslang_tab.cpp"
    break;

  case 320: /* type_specifier_nonarray: F16MAT4X3  */
#line 2384 "MachineIndependent/glslang.y"
                {
        parseContext.float16Check((yyvsp[0].lex).loc, "half float matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat16;
        (yyval.interm.type).setMatrix(4, 3);
    }
#line 8596 "MachineIndependent/glslang_tab.cpp"
    break;

  case 321: /* type_specifier_nonarray: F16MAT4X4  */
#line 2390 "MachineIndependent/glslang.y"
                {
        parseContext.float16Check((yyvsp[0].lex).loc, "half float matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat16;
        (yyval.interm.type).setMatrix(4, 4);
    }
#line 8607 "MachineIndependent/glslang_tab.cpp"
    break;

  case 322: /* type_specifier_nonarray: F32MAT2  */
#line 2396 "MachineIndependent/glslang.y"
              {
        parseContext.explicitFloat32Check((yyvsp[0].lex).loc, "float32_t matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(2, 2);
    }
#line 8618 "MachineIndependent/glslang_tab.cpp"
    break;

  case 323: /* type_specifier_nonarray: F32MAT3  */
#line 2402 "MachineIndependent/glslang.y"
              {
        parseContext.explicitFloat32Check((yyvsp[0].lex).loc, "float32_t matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(3, 3);
    }
#line 8629 "MachineIndependent/glslang_tab.cpp"
    break;

  case 324: /* type_specifier_nonarray: F32MAT4  */
#line 2408 "MachineIndependent/glslang.y"
              {
        parseContext.explicitFloat32Check((yyvsp[0].lex).loc, "float32_t matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(4, 4);
    }
#line 8640 "MachineIndependent/glslang_tab.cpp"
    break;

  case 325: /* type_specifier_nonarray: F32MAT2X2  */
#line 2414 "MachineIndependent/glslang.y"
                {
        parseContext.explicitFloat32Check((yyvsp[0].lex).loc, "float32_t matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(2, 2);
    }
#line 8651 "MachineIndependent/glslang_tab.cpp"
    break;

  case 326: /* type_specifier_nonarray: F32MAT2X3  */
#line 2420 "MachineIndependent/glslang.y"
                {
        parseContext.explicitFloat32Check((yyvsp[0].lex).loc, "float32_t matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(2, 3);
    }
#line 8662 "MachineIndependent/glslang_tab.cpp"
    break;

  case 327: /* type_specifier_nonarray: F32MAT2X4  */
#line 2426 "MachineIndependent/glslang.y"
                {
        parseContext.explicitFloat32Check((yyvsp[0].lex).loc, "float32_t matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(2, 4);
    }
#line 8673 "MachineIndependent/glslang_tab.cpp"
    break;

  case 328: /* type_specifier_nonarray: F32MAT3X2  */
#line 2432 "MachineIndependent/glslang.y"
                {
        parseContext.explicitFloat32Check((yyvsp[0].lex).loc, "float32_t matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(3, 2);
    }
#line 8684 "MachineIndependent/glslang_tab.cpp"
    break;

  case 329: /* type_specifier_nonarray: F32MAT3X3  */
#line 2438 "MachineIndependent/glslang.y"
                {
        parseContext.explicitFloat32Check((yyvsp[0].lex).loc, "float32_t matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(3, 3);
    }
#line 8695 "MachineIndependent/glslang_tab.cpp"
    break;

  case 330: /* type_specifier_nonarray: F32MAT3X4  */
#line 2444 "MachineIndependent/glslang.y"
                {
        parseContext.explicitFloat32Check((yyvsp[0].lex).loc, "float32_t matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(3, 4);
    }
#line 8706 "MachineIndependent/glslang_tab.cpp"
    break;

  case 331: /* type_specifier_nonarray: F32MAT4X2  */
#line 2450 "MachineIndependent/glslang.y"
                {
        parseContext.explicitFloat32Check((yyvsp[0].lex).loc, "float32_t matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(4, 2);
    }
#line 8717 "MachineIndependent/glslang_tab.cpp"
    break;

  case 332: /* type_specifier_nonarray: F32MAT4X3  */
#line 2456 "MachineIndependent/glslang.y"
                {
        parseContext.explicitFloat32Check((yyvsp[0].lex).loc, "float32_t matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(4, 3);
    }
#line 8728 "MachineIndependent/glslang_tab.cpp"
    break;

  case 333: /* type_specifier_nonarray: F32MAT4X4  */
#line 2462 "MachineIndependent/glslang.y"
                {
        parseContext.explicitFloat32Check((yyvsp[0].lex).loc, "float32_t matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(4, 4);
    }
#line 8739 "MachineIndependent/glslang_tab.cpp"
    break;

  case 334: /* type_specifier_nonarray: F64MAT2  */
#line 2468 "MachineIndependent/glslang.y"
              {
        parseContext.explicitFloat64Check((yyvsp[0].lex).loc, "float64_t matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(2, 2);
    }
#line 8750 "MachineIndependent/glslang_tab.cpp"
    break;

  case 335: /* type_specifier_nonarray: F64MAT3  */
#line 2474 "MachineIndependent/glslang.y"
              {
        parseContext.explicitFloat64Check((yyvsp[0].lex).loc, "float64_t matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(3, 3);
    }
#line 8761 "MachineIndependent/glslang_tab.cpp"
    break;

  case 336: /* type_specifier_nonarray: F64MAT4  */
#line 2480 "MachineIndependent/glslang.y"
              {
        parseContext.explicitFloat64Check((yyvsp[0].lex).loc, "float64_t matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(4, 4);
    }
#line 8772 "MachineIndependent/glslang_tab.cpp"
    break;

  case 337: /* type_specifier_nonarray: F64MAT2X2  */
#line 2486 "MachineIndependent/glslang.y"
                {
        parseContext.explicitFloat64Check((yyvsp[0].lex).loc, "float64_t matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(2, 2);
    }
#line 8783 "MachineIndependent/glslang_tab.cpp"
    break;

  case 338: /* type_specifier_nonarray: F64MAT2X3  */
#line 2492 "MachineIndependent/glslang.y"
                {
        parseContext.explicitFloat64Check((yyvsp[0].lex).loc, "float64_t matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(2, 3);
    }
#line 8794 "MachineIndependent/glslang_tab.cpp"
    break;

  case 339: /* type_specifier_nonarray: F64MAT2X4  */
#line 2498 "MachineIndependent/glslang.y"
                {
        parseContext.explicitFloat64Check((yyvsp[0].lex).loc, "float64_t matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(2, 4);
    }
#line 8805 "MachineIndependent/glslang_tab.cpp"
    break;

  case 340: /* type_specifier_nonarray: F64MAT3X2  */
#line 2504 "MachineIndependent/glslang.y"
                {
        parseContext.explicitFloat64Check((yyvsp[0].lex).loc, "float64_t matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(3, 2);
    }
#line 8816 "MachineIndependent/glslang_tab.cpp"
    break;

  case 341: /* type_specifier_nonarray: F64MAT3X3  */
#line 2510 "MachineIndependent/glslang.y"
                {
        parseContext.explicitFloat64Check((yyvsp[0].lex).loc, "float64_t matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(3, 3);
    }
#line 8827 "MachineIndependent/glslang_tab.cpp"
    break;

  case 342: /* type_specifier_nonarray: F64MAT3X4  */
#line 2516 "MachineIndependent/glslang.y"
                {
        parseContext.explicitFloat64Check((yyvsp[0].lex).loc, "float64_t matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(3, 4);
    }
#line 8838 "MachineIndependent/glslang_tab.cpp"
    break;

  case 343: /* type_specifier_nonarray: F64MAT4X2  */
#line 2522 "MachineIndependent/glslang.y"
                {
        parseContext.explicitFloat64Check((yyvsp[0].lex).loc, "float64_t matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(4, 2);
    }
#line 8849 "MachineIndependent/glslang_tab.cpp"
    break;

  case 344: /* type_specifier_nonarray: F64MAT4X3  */
#line 2528 "MachineIndependent/glslang.y"
                {
        parseContext.explicitFloat64Check((yyvsp[0].lex).loc, "float64_t matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(4, 3);
    }
#line 8860 "MachineIndependent/glslang_tab.cpp"
    break;

  case 345: /* type_specifier_nonarray: F64MAT4X4  */
#line 2534 "MachineIndependent/glslang.y"
                {
        parseContext.explicitFloat64Check((yyvsp[0].lex).loc, "float64_t matrix", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(4, 4);
    }
#line 8871 "MachineIndependent/glslang_tab.cpp"
    break;

  case 346: /* type_specifier_nonarray: ACCSTRUCTNV  */
#line 2540 "MachineIndependent/glslang.y"
                  {
       (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
       (yyval.interm.type).basicType = EbtAccStruct;
    }
#line 8880 "MachineIndependent/glslang_tab.cpp"
    break;

  case 347: /* type_specifier_nonarray: ACCSTRUCTEXT  */
#line 2544 "MachineIndependent/glslang.y"
                   {
       (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
       (yyval.interm.type).basicType = EbtAccStruct;
    }
#line 8889 "MachineIndependent/glslang_tab.cpp"
    break;

  case 348: /* type_specifier_nonarray: RAYQUERYEXT  */
#line 2548 "MachineIndependent/glslang.y"
                  {
       (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
       (yyval.interm.type).basicType = EbtRayQuery;
    }
#line 8898 "MachineIndependent/glslang_tab.cpp"
    break;

  case 349: /* type_specifier_nonarray: ATOMIC_UINT  */
#line 2552 "MachineIndependent/glslang.y"
                  {
        parseContext.vulkanRemoved((yyvsp[0].lex).loc, "atomic counter types");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtAtomicUint;
    }
#line 8908 "MachineIndependent/glslang_tab.cpp"
    break;

  case 350: /* type_specifier_nonarray: SAMPLER1D  */
#line 2557 "MachineIndependent/glslang.y"
                {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd1D);
    }
#line 8918 "MachineIndependent/glslang_tab.cpp"
    break;

  case 351: /* type_specifier_nonarray: SAMPLER2D  */
#line 2563 "MachineIndependent/glslang.y"
                {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D);
    }
#line 8928 "MachineIndependent/glslang_tab.cpp"
    break;

  case 352: /* type_specifier_nonarray: SAMPLER3D  */
#line 2568 "MachineIndependent/glslang.y"
                {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd3D);
    }
#line 8938 "MachineIndependent/glslang_tab.cpp"
    break;

  case 353: /* type_specifier_nonarray: SAMPLERCUBE  */
#line 2573 "MachineIndependent/glslang.y"
                  {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdCube);
    }
#line 8948 "MachineIndependent/glslang_tab.cpp"
    break;

  case 354: /* type_specifier_nonarray: SAMPLER2DSHADOW  */
#line 2578 "MachineIndependent/glslang.y"
                      {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D, false, true);
    }
#line 8958 "MachineIndependent/glslang_tab.cpp"
    break;

  case 355: /* type_specifier_nonarray: SAMPLERCUBESHADOW  */
#line 2583 "MachineIndependent/glslang.y"
                        {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdCube, false, true);
    }
#line 8968 "MachineIndependent/glslang_tab.cpp"
    break;

  case 356: /* type_specifier_nonarray: SAMPLER2DARRAY  */
#line 2588 "MachineIndependent/glslang.y"
                     {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D, true);
    }
#line 8978 "MachineIndependent/glslang_tab.cpp"
    break;

  case 357: /* type_specifier_nonarray: SAMPLER2DARRAYSHADOW  */
#line 2593 "MachineIndependent/glslang.y"
                           {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D, true, true);
    }
#line 8988 "MachineIndependent/glslang_tab.cpp"
    break;

  case 358: /* type_specifier_nonarray: SAMPLER1DSHADOW  */
#line 2599 "MachineIndependent/glslang.y"
                      {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd1D, false, true);
    }
#line 8998 "MachineIndependent/glslang_tab.cpp"
    break;

  case 359: /* type_specifier_nonarray: SAMPLER1DARRAY  */
#line 2604 "MachineIndependent/glslang.y"
                     {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd1D, true);
    }
#line 9008 "MachineIndependent/glslang_tab.cpp"
    break;

  case 360: /* type_specifier_nonarray: SAMPLER1DARRAYSHADOW  */
#line 2609 "MachineIndependent/glslang.y"
                           {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd1D, true, true);
    }
#line 9018 "MachineIndependent/glslang_tab.cpp"
    break;

  case 361: /* type_specifier_nonarray: SAMPLERCUBEARRAY  */
#line 2614 "MachineIndependent/glslang.y"
                       {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdCube, true);
    }
#line 9028 "MachineIndependent/glslang_tab.cpp"
    break;

  case 362: /* type_specifier_nonarray: SAMPLERCUBEARRAYSHADOW  */
#line 2619 "MachineIndependent/glslang.y"
                             {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdCube, true, true);
    }
#line 9038 "MachineIndependent/glslang_tab.cpp"
    break;

  case 363: /* type_specifier_nonarray: F16SAMPLER1D  */
#line 2624 "MachineIndependent/glslang.y"
                   {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float sampler", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat16, Esd1D);
    }
#line 9049 "MachineIndependent/glslang_tab.cpp"
    break;

  case 364: /* type_specifier_nonarray: F16SAMPLER2D  */
#line 2630 "MachineIndependent/glslang.y"
                   {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float sampler", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat16, Esd2D);
    }
#line 9060 "MachineIndependent/glslang_tab.cpp"
    break;

  case 365: /* type_specifier_nonarray: F16SAMPLER3D  */
#line 2636 "MachineIndependent/glslang.y"
                   {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float sampler", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat16, Esd3D);
    }
#line 9071 "MachineIndependent/glslang_tab.cpp"
    break;

  case 366: /* type_specifier_nonarray: F16SAMPLERCUBE  */
#line 2642 "MachineIndependent/glslang.y"
                     {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float sampler", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat16, EsdCube);
    }
#line 9082 "MachineIndependent/glslang_tab.cpp"
    break;

  case 367: /* type_specifier_nonarray: F16SAMPLER1DSHADOW  */
#line 2648 "MachineIndependent/glslang.y"
                         {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float sampler", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat16, Esd1D, false, true);
    }
#line 9093 "MachineIndependent/glslang_tab.cpp"
    break;

  case 368: /* type_specifier_nonarray: F16SAMPLER2DSHADOW  */
#line 2654 "MachineIndependent/glslang.y"
                         {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float sampler", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat16, Esd2D, false, true);
    }
#line 9104 "MachineIndependent/glslang_tab.cpp"
    break;

  case 369: /* type_specifier_nonarray: F16SAMPLERCUBESHADOW  */
#line 2660 "MachineIndependent/glslang.y"
                           {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float sampler", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat16, EsdCube, false, true);
    }
#line 9115 "MachineIndependent/glslang_tab.cpp"
    break;

  case 370: /* type_specifier_nonarray: F16SAMPLER1DARRAY  */
#line 2666 "MachineIndependent/glslang.y"
                        {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float sampler", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat16, Esd1D, true);
    }
#line 9126 "MachineIndependent/glslang_tab.cpp"
    break;

  case 371: /* type_specifier_nonarray: F16SAMPLER2DARRAY  */
#line 2672 "MachineIndependent/glslang.y"
                        {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float sampler", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat16, Esd2D, true);
    }
#line 9137 "MachineIndependent/glslang_tab.cpp"
    break;

  case 372: /* type_specifier_nonarray: F16SAMPLER1DARRAYSHADOW  */
#line 2678 "MachineIndependent/glslang.y"
                              {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float sampler", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat16, Esd1D, true, true);
    }
#line 9148 "MachineIndependent/glslang_tab.cpp"
    break;

  case 373: /* type_specifier_nonarray: F16SAMPLER2DARRAYSHADOW  */
#line 2684 "MachineIndependent/glslang.y"
                              {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float sampler", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat16, Esd2D, true, true);
    }
#line 9159 "MachineIndependent/glslang_tab.cpp"
    break;

  case 374: /* type_specifier_nonarray: F16SAMPLERCUBEARRAY  */
#line 2690 "MachineIndependent/glslang.y"
                          {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float sampler", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat16, EsdCube, true);
    }
#line 9170 "MachineIndependent/glslang_tab.cpp"
    break;

  case 375: /* type_specifier_nonarray: F16SAMPLERCUBEARRAYSHADOW  */
#line 2696 "MachineIndependent/glslang.y"
                                {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float sampler", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat16, EsdCube, true, true);
    }
#line 9181 "MachineIndependent/glslang_tab.cpp"
    break;

  case 376: /* type_specifier_nonarray: ISAMPLER1D  */
#line 2702 "MachineIndependent/glslang.y"
                 {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd1D);
    }
#line 9191 "MachineIndependent/glslang_tab.cpp"
    break;

  case 377: /* type_specifier_nonarray: ISAMPLER2D  */
#line 2708 "MachineIndependent/glslang.y"
                 {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd2D);
    }
#line 9201 "MachineIndependent/glslang_tab.cpp"
    break;

  case 378: /* type_specifier_nonarray: ISAMPLER3D  */
#line 2713 "MachineIndependent/glslang.y"
                 {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd3D);
    }
#line 9211 "MachineIndependent/glslang_tab.cpp"
    break;

  case 379: /* type_specifier_nonarray: ISAMPLERCUBE  */
#line 2718 "MachineIndependent/glslang.y"
                   {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, EsdCube);
    }
#line 9221 "MachineIndependent/glslang_tab.cpp"
    break;

  case 380: /* type_specifier_nonarray: ISAMPLER2DARRAY  */
#line 2723 "MachineIndependent/glslang.y"
                      {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd2D, true);
    }
#line 9231 "MachineIndependent/glslang_tab.cpp"
    break;

  case 381: /* type_specifier_nonarray: USAMPLER2D  */
#line 2728 "MachineIndependent/glslang.y"
                 {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd2D);
    }
#line 9241 "MachineIndependent/glslang_tab.cpp"
    break;

  case 382: /* type_specifier_nonarray: USAMPLER3D  */
#line 2733 "MachineIndependent/glslang.y"
                 {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd3D);
    }
#line 9251 "MachineIndependent/glslang_tab.cpp"
    break;

  case 383: /* type_specifier_nonarray: USAMPLERCUBE  */
#line 2738 "MachineIndependent/glslang.y"
                   {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, EsdCube);
    }
#line 9261 "MachineIndependent/glslang_tab.cpp"
    break;

  case 384: /* type_specifier_nonarray: ISAMPLER1DARRAY  */
#line 2744 "MachineIndependent/glslang.y"
                      {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd1D, true);
    }
#line 9271 "MachineIndependent/glslang_tab.cpp"
    break;

  case 385: /* type_specifier_nonarray: ISAMPLERCUBEARRAY  */
#line 2749 "MachineIndependent/glslang.y"
                        {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, EsdCube, true);
    }
#line 9281 "MachineIndependent/glslang_tab.cpp"
    break;

  case 386: /* type_specifier_nonarray: USAMPLER1D  */
#line 2754 "MachineIndependent/glslang.y"
                 {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd1D);
    }
#line 9291 "MachineIndependent/glslang_tab.cpp"
    break;

  case 387: /* type_specifier_nonarray: USAMPLER1DARRAY  */
#line 2759 "MachineIndependent/glslang.y"
                      {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd1D, true);
    }
#line 9301 "MachineIndependent/glslang_tab.cpp"
    break;

  case 388: /* type_specifier_nonarray: USAMPLERCUBEARRAY  */
#line 2764 "MachineIndependent/glslang.y"
                        {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, EsdCube, true);
    }
#line 9311 "MachineIndependent/glslang_tab.cpp"
    break;

  case 389: /* type_specifier_nonarray: TEXTURECUBEARRAY  */
#line 2769 "MachineIndependent/glslang.y"
                       {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat, EsdCube, true);
    }
#line 9321 "MachineIndependent/glslang_tab.cpp"
    break;

  case 390: /* type_specifier_nonarray: ITEXTURECUBEARRAY  */
#line 2774 "MachineIndependent/glslang.y"
                        {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtInt, EsdCube, true);
    }
#line 9331 "MachineIndependent/glslang_tab.cpp"
    break;

  case 391: /* type_specifier_nonarray: UTEXTURECUBEARRAY  */
#line 2779 "MachineIndependent/glslang.y"
                        {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtUint, EsdCube, true);
    }
#line 9341 "MachineIndependent/glslang_tab.cpp"
    break;

  case 392: /* type_specifier_nonarray: USAMPLER2DARRAY  */
#line 2785 "MachineIndependent/glslang.y"
                      {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd2D, true);
    }
#line 9351 "MachineIndependent/glslang_tab.cpp"
    break;

  case 393: /* type_specifier_nonarray: TEXTURE2D  */
#line 2790 "MachineIndependent/glslang.y"
                {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat, Esd2D);
    }
#line 9361 "MachineIndependent/glslang_tab.cpp"
    break;

  case 394: /* type_specifier_nonarray: TEXTURE3D  */
#line 2795 "MachineIndependent/glslang.y"
                {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat, Esd3D);
    }
#line 9371 "MachineIndependent/glslang_tab.cpp"
    break;

  case 395: /* type_specifier_nonarray: TEXTURE2DARRAY  */
#line 2800 "MachineIndependent/glslang.y"
                     {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat, Esd2D, true);
    }
#line 9381 "MachineIndependent/glslang_tab.cpp"
    break;

  case 396: /* type_specifier_nonarray: TEXTURECUBE  */
#line 2805 "MachineIndependent/glslang.y"
                  {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat, EsdCube);
    }
#line 9391 "MachineIndependent/glslang_tab.cpp"
    break;

  case 397: /* type_specifier_nonarray: ITEXTURE2D  */
#line 2810 "MachineIndependent/glslang.y"
                 {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtInt, Esd2D);
    }
#line 9401 "MachineIndependent/glslang_tab.cpp"
    break;

  case 398: /* type_specifier_nonarray: ITEXTURE3D  */
#line 2815 "MachineIndependent/glslang.y"
                 {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtInt, Esd3D);
    }
#line 9411 "MachineIndependent/glslang_tab.cpp"
    break;

  case 399: /* type_specifier_nonarray: ITEXTURECUBE  */
#line 2820 "MachineIndependent/glslang.y"
                   {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtInt, EsdCube);
    }
#line 9421 "MachineIndependent/glslang_tab.cpp"
    break;

  case 400: /* type_specifier_nonarray: ITEXTURE2DARRAY  */
#line 2825 "MachineIndependent/glslang.y"
                      {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtInt, Esd2D, true);
    }
#line 9431 "MachineIndependent/glslang_tab.cpp"
    break;

  case 401: /* type_specifier_nonarray: UTEXTURE2D  */
#line 2830 "MachineIndependent/glslang.y"
                 {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtUint, Esd2D);
    }
#line 9441 "MachineIndependent/glslang_tab.cpp"
    break;

  case 402: /* type_specifier_nonarray: UTEXTURE3D  */
#line 2835 "MachineIndependent/glslang.y"
                 {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtUint, Esd3D);
    }
#line 9451 "MachineIndependent/glslang_tab.cpp"
    break;

  case 403: /* type_specifier_nonarray: UTEXTURECUBE  */
#line 2840 "MachineIndependent/glslang.y"
                   {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtUint, EsdCube);
    }
#line 9461 "MachineIndependent/glslang_tab.cpp"
    break;

  case 404: /* type_specifier_nonarray: UTEXTURE2DARRAY  */
#line 2845 "MachineIndependent/glslang.y"
                      {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtUint, Esd2D, true);
    }
#line 9471 "MachineIndependent/glslang_tab.cpp"
    break;

  case 405: /* type_specifier_nonarray: SAMPLER  */
#line 2850 "MachineIndependent/glslang.y"
              {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setPureSampler(false);
    }
#line 9481 "MachineIndependent/glslang_tab.cpp"
    break;

  case 406: /* type_specifier_nonarray: SAMPLERSHADOW  */
#line 2855 "MachineIndependent/glslang.y"
                    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setPureSampler(true);
    }
#line 9491 "MachineIndependent/glslang_tab.cpp"
    break;

  case 407: /* type_specifier_nonarray: SAMPLER2DRECT  */
#line 2861 "MachineIndependent/glslang.y"
                    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdRect);
    }
#line 9501 "MachineIndependent/glslang_tab.cpp"
    break;

  case 408: /* type_specifier_nonarray: SAMPLER2DRECTSHADOW  */
#line 2866 "MachineIndependent/glslang.y"
                          {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdRect, false, true);
    }
#line 9511 "MachineIndependent/glslang_tab.cpp"
    break;

  case 409: /* type_specifier_nonarray: F16SAMPLER2DRECT  */
#line 2871 "MachineIndependent/glslang.y"
                       {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float sampler", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat16, EsdRect);
    }
#line 9522 "MachineIndependent/glslang_tab.cpp"
    break;

  case 410: /* type_specifier_nonarray: F16SAMPLER2DRECTSHADOW  */
#line 2877 "MachineIndependent/glslang.y"
                             {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float sampler", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat16, EsdRect, false, true);
    }
#line 9533 "MachineIndependent/glslang_tab.cpp"
    break;

  case 411: /* type_specifier_nonarray: ISAMPLER2DRECT  */
#line 2883 "MachineIndependent/glslang.y"
                     {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, EsdRect);
    }
#line 9543 "MachineIndependent/glslang_tab.cpp"
    break;

  case 412: /* type_specifier_nonarray: USAMPLER2DRECT  */
#line 2888 "MachineIndependent/glslang.y"
                     {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, EsdRect);
    }
#line 9553 "MachineIndependent/glslang_tab.cpp"
    break;

  case 413: /* type_specifier_nonarray: SAMPLERBUFFER  */
#line 2893 "MachineIndependent/glslang.y"
                    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdBuffer);
    }
#line 9563 "MachineIndependent/glslang_tab.cpp"
    break;

  case 414: /* type_specifier_nonarray: F16SAMPLERBUFFER  */
#line 2898 "MachineIndependent/glslang.y"
                       {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float sampler", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat16, EsdBuffer);
    }
#line 9574 "MachineIndependent/glslang_tab.cpp"
    break;

  case 415: /* type_specifier_nonarray: ISAMPLERBUFFER  */
#line 2904 "MachineIndependent/glslang.y"
                     {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, EsdBuffer);
    }
#line 9584 "MachineIndependent/glslang_tab.cpp"
    break;

  case 416: /* type_specifier_nonarray: USAMPLERBUFFER  */
#line 2909 "MachineIndependent/glslang.y"
                     {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, EsdBuffer);
    }
#line 9594 "MachineIndependent/glslang_tab.cpp"
    break;

  case 417: /* type_specifier_nonarray: SAMPLER2DMS  */
#line 2914 "MachineIndependent/glslang.y"
                  {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D, false, false, true);
    }
#line 9604 "MachineIndependent/glslang_tab.cpp"
    break;

  case 418: /* type_specifier_nonarray: F16SAMPLER2DMS  */
#line 2919 "MachineIndependent/glslang.y"
                     {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float sampler", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat16, Esd2D, false, false, true);
    }
#line 9615 "MachineIndependent/glslang_tab.cpp"
    break;

  case 419: /* type_specifier_nonarray: ISAMPLER2DMS  */
#line 2925 "MachineIndependent/glslang.y"
                   {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd2D, false, false, true);
    }
#line 9625 "MachineIndependent/glslang_tab.cpp"
    break;

  case 420: /* type_specifier_nonarray: USAMPLER2DMS  */
#line 2930 "MachineIndependent/glslang.y"
                   {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd2D, false, false, true);
    }
#line 9635 "MachineIndependent/glslang_tab.cpp"
    break;

  case 421: /* type_specifier_nonarray: SAMPLER2DMSARRAY  */
#line 2935 "MachineIndependent/glslang.y"
                       {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D, true, false, true);
    }
#line 9645 "MachineIndependent/glslang_tab.cpp"
    break;

  case 422: /* type_specifier_nonarray: F16SAMPLER2DMSARRAY  */
#line 2940 "MachineIndependent/glslang.y"
                          {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float sampler", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat16, Esd2D, true, false, true);
    }
#line 9656 "MachineIndependent/glslang_tab.cpp"
    break;

  case 423: /* type_specifier_nonarray: ISAMPLER2DMSARRAY  */
#line 2946 "MachineIndependent/glslang.y"
                        {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd2D, true, false, true);
    }
#line 9666 "MachineIndependent/glslang_tab.cpp"
    break;

  case 424: /* type_specifier_nonarray: USAMPLER2DMSARRAY  */
#line 2951 "MachineIndependent/glslang.y"
                        {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd2D, true, false, true);
    }
#line 9676 "MachineIndependent/glslang_tab.cpp"
    break;

  case 425: /* type_specifier_nonarray: TEXTURE1D  */
#line 2956 "MachineIndependent/glslang.y"
                {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat, Esd1D);
    }
#line 9686 "MachineIndependent/glslang_tab.cpp"
    break;

  case 426: /* type_specifier_nonarray: F16TEXTURE1D  */
#line 2961 "MachineIndependent/glslang.y"
                   {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float texture", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat16, Esd1D);
    }
#line 9697 "MachineIndependent/glslang_tab.cpp"
    break;

  case 427: /* type_specifier_nonarray: F16TEXTURE2D  */
#line 2967 "MachineIndependent/glslang.y"
                   {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float texture", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat16, Esd2D);
    }
#line 9708 "MachineIndependent/glslang_tab.cpp"
    break;

  case 428: /* type_specifier_nonarray: F16TEXTURE3D  */
#line 2973 "MachineIndependent/glslang.y"
                   {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float texture", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat16, Esd3D);
    }
#line 9719 "MachineIndependent/glslang_tab.cpp"
    break;

  case 429: /* type_specifier_nonarray: F16TEXTURECUBE  */
#line 2979 "MachineIndependent/glslang.y"
                     {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float texture", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat16, EsdCube);
    }
#line 9730 "MachineIndependent/glslang_tab.cpp"
    break;

  case 430: /* type_specifier_nonarray: TEXTURE1DARRAY  */
#line 2985 "MachineIndependent/glslang.y"
                     {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat, Esd1D, true);
    }
#line 9740 "MachineIndependent/glslang_tab.cpp"
    break;

  case 431: /* type_specifier_nonarray: F16TEXTURE1DARRAY  */
#line 2990 "MachineIndependent/glslang.y"
                        {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float texture", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat16, Esd1D, true);
    }
#line 9751 "MachineIndependent/glslang_tab.cpp"
    break;

  case 432: /* type_specifier_nonarray: F16TEXTURE2DARRAY  */
#line 2996 "MachineIndependent/glslang.y"
                        {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float texture", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat16, Esd2D, true);
    }
#line 9762 "MachineIndependent/glslang_tab.cpp"
    break;

  case 433: /* type_specifier_nonarray: F16TEXTURECUBEARRAY  */
#line 3002 "MachineIndependent/glslang.y"
                          {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float texture", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat16, EsdCube, true);
    }
#line 9773 "MachineIndependent/glslang_tab.cpp"
    break;

  case 434: /* type_specifier_nonarray: ITEXTURE1D  */
#line 3008 "MachineIndependent/glslang.y"
                 {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtInt, Esd1D);
    }
#line 9783 "MachineIndependent/glslang_tab.cpp"
    break;

  case 435: /* type_specifier_nonarray: ITEXTURE1DARRAY  */
#line 3013 "MachineIndependent/glslang.y"
                      {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtInt, Esd1D, true);
    }
#line 9793 "MachineIndependent/glslang_tab.cpp"
    break;

  case 436: /* type_specifier_nonarray: UTEXTURE1D  */
#line 3018 "MachineIndependent/glslang.y"
                 {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtUint, Esd1D);
    }
#line 9803 "MachineIndependent/glslang_tab.cpp"
    break;

  case 437: /* type_specifier_nonarray: UTEXTURE1DARRAY  */
#line 3023 "MachineIndependent/glslang.y"
                      {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtUint, Esd1D, true);
    }
#line 9813 "MachineIndependent/glslang_tab.cpp"
    break;

  case 438: /* type_specifier_nonarray: TEXTURE2DRECT  */
#line 3028 "MachineIndependent/glslang.y"
                    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat, EsdRect);
    }
#line 9823 "MachineIndependent/glslang_tab.cpp"
    break;

  case 439: /* type_specifier_nonarray: F16TEXTURE2DRECT  */
#line 3033 "MachineIndependent/glslang.y"
                       {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float texture", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat16, EsdRect);
    }
#line 9834 "MachineIndependent/glslang_tab.cpp"
    break;

  case 440: /* type_specifier_nonarray: ITEXTURE2DRECT  */
#line 3039 "MachineIndependent/glslang.y"
                     {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtInt, EsdRect);
    }
#line 9844 "MachineIndependent/glslang_tab.cpp"
    break;

  case 441: /* type_specifier_nonarray: UTEXTURE2DRECT  */
#line 3044 "MachineIndependent/glslang.y"
                     {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtUint, EsdRect);
    }
#line 9854 "MachineIndependent/glslang_tab.cpp"
    break;

  case 442: /* type_specifier_nonarray: TEXTUREBUFFER  */
#line 3049 "MachineIndependent/glslang.y"
                    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat, EsdBuffer);
    }
#line 9864 "MachineIndependent/glslang_tab.cpp"
    break;

  case 443: /* type_specifier_nonarray: F16TEXTUREBUFFER  */
#line 3054 "MachineIndependent/glslang.y"
                       {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float texture", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat16, EsdBuffer);
    }
#line 9875 "MachineIndependent/glslang_tab.cpp"
    break;

  case 444: /* type_specifier_nonarray: ITEXTUREBUFFER  */
#line 3060 "MachineIndependent/glslang.y"
                     {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtInt, EsdBuffer);
    }
#line 9885 "MachineIndependent/glslang_tab.cpp"
    break;

  case 445: /* type_specifier_nonarray: UTEXTUREBUFFER  */
#line 3065 "MachineIndependent/glslang.y"
                     {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtUint, EsdBuffer);
    }
#line 9895 "MachineIndependent/glslang_tab.cpp"
    break;

  case 446: /* type_specifier_nonarray: TEXTURE2DMS  */
#line 3070 "MachineIndependent/glslang.y"
                  {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat, Esd2D, false, false, true);
    }
#line 9905 "MachineIndependent/glslang_tab.cpp"
    break;

  case 447: /* type_specifier_nonarray: F16TEXTURE2DMS  */
#line 3075 "MachineIndependent/glslang.y"
                     {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float texture", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat16, Esd2D, false, false, true);
    }
#line 9916 "MachineIndependent/glslang_tab.cpp"
    break;

  case 448: /* type_specifier_nonarray: ITEXTURE2DMS  */
#line 3081 "MachineIndependent/glslang.y"
                   {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtInt, Esd2D, false, false, true);
    }
#line 9926 "MachineIndependent/glslang_tab.cpp"
    break;

  case 449: /* type_specifier_nonarray: UTEXTURE2DMS  */
#line 3086 "MachineIndependent/glslang.y"
                   {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtUint, Esd2D, false, false, true);
    }
#line 9936 "MachineIndependent/glslang_tab.cpp"
    break;

  case 450: /* type_specifier_nonarray: TEXTURE2DMSARRAY  */
#line 3091 "MachineIndependent/glslang.y"
                       {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat, Esd2D, true, false, true);
    }
#line 9946 "MachineIndependent/glslang_tab.cpp"
    break;

  case 451: /* type_specifier_nonarray: F16TEXTURE2DMSARRAY  */
#line 3096 "MachineIndependent/glslang.y"
                          {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float texture", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtFloat16, Esd2D, true, false, true);
    }
#line 9957 "MachineIndependent/glslang_tab.cpp"
    break;

  case 452: /* type_specifier_nonarray: ITEXTURE2DMSARRAY  */
#line 3102 "MachineIndependent/glslang.y"
                        {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtInt, Esd2D, true, false, true);
    }
#line 9967 "MachineIndependent/glslang_tab.cpp"
    break;

  case 453: /* type_specifier_nonarray: UTEXTURE2DMSARRAY  */
#line 3107 "MachineIndependent/glslang.y"
                        {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setTexture(EbtUint, Esd2D, true, false, true);
    }
#line 9977 "MachineIndependent/glslang_tab.cpp"
    break;

  case 454: /* type_specifier_nonarray: IMAGE1D  */
#line 3112 "MachineIndependent/glslang.y"
              {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, Esd1D);
    }
#line 9987 "MachineIndependent/glslang_tab.cpp"
    break;

  case 455: /* type_specifier_nonarray: F16IMAGE1D  */
#line 3117 "MachineIndependent/glslang.y"
                 {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float image", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat16, Esd1D);
    }
#line 9998 "MachineIndependent/glslang_tab.cpp"
    break;

  case 456: /* type_specifier_nonarray: IIMAGE1D  */
#line 3123 "MachineIndependent/glslang.y"
               {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, Esd1D);
    }
#line 10008 "MachineIndependent/glslang_tab.cpp"
    break;

  case 457: /* type_specifier_nonarray: UIMAGE1D  */
#line 3128 "MachineIndependent/glslang.y"
               {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, Esd1D);
    }
#line 10018 "MachineIndependent/glslang_tab.cpp"
    break;

  case 458: /* type_specifier_nonarray: IMAGE2D  */
#line 3133 "MachineIndependent/glslang.y"
              {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, Esd2D);
    }
#line 10028 "MachineIndependent/glslang_tab.cpp"
    break;

  case 459: /* type_specifier_nonarray: F16IMAGE2D  */
#line 3138 "MachineIndependent/glslang.y"
                 {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float image", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat16, Esd2D);
    }
#line 10039 "MachineIndependent/glslang_tab.cpp"
    break;

  case 460: /* type_specifier_nonarray: IIMAGE2D  */
#line 3144 "MachineIndependent/glslang.y"
               {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, Esd2D);
    }
#line 10049 "MachineIndependent/glslang_tab.cpp"
    break;

  case 461: /* type_specifier_nonarray: UIMAGE2D  */
#line 3149 "MachineIndependent/glslang.y"
               {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, Esd2D);
    }
#line 10059 "MachineIndependent/glslang_tab.cpp"
    break;

  case 462: /* type_specifier_nonarray: IMAGE3D  */
#line 3154 "MachineIndependent/glslang.y"
              {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, Esd3D);
    }
#line 10069 "MachineIndependent/glslang_tab.cpp"
    break;

  case 463: /* type_specifier_nonarray: F16IMAGE3D  */
#line 3159 "MachineIndependent/glslang.y"
                 {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float image", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat16, Esd3D);
    }
#line 10080 "MachineIndependent/glslang_tab.cpp"
    break;

  case 464: /* type_specifier_nonarray: IIMAGE3D  */
#line 3165 "MachineIndependent/glslang.y"
               {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, Esd3D);
    }
#line 10090 "MachineIndependent/glslang_tab.cpp"
    break;

  case 465: /* type_specifier_nonarray: UIMAGE3D  */
#line 3170 "MachineIndependent/glslang.y"
               {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, Esd3D);
    }
#line 10100 "MachineIndependent/glslang_tab.cpp"
    break;

  case 466: /* type_specifier_nonarray: IMAGE2DRECT  */
#line 3175 "MachineIndependent/glslang.y"
                  {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, EsdRect);
    }
#line 10110 "MachineIndependent/glslang_tab.cpp"
    break;

  case 467: /* type_specifier_nonarray: F16IMAGE2DRECT  */
#line 3180 "MachineIndependent/glslang.y"
                     {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float image", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat16, EsdRect);
    }
#line 10121 "MachineIndependent/glslang_tab.cpp"
    break;

  case 468: /* type_specifier_nonarray: IIMAGE2DRECT  */
#line 3186 "MachineIndependent/glslang.y"
                   {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, EsdRect);
    }
#line 10131 "MachineIndependent/glslang_tab.cpp"
    break;

  case 469: /* type_specifier_nonarray: UIMAGE2DRECT  */
#line 3191 "MachineIndependent/glslang.y"
                   {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, EsdRect);
    }
#line 10141 "MachineIndependent/glslang_tab.cpp"
    break;

  case 470: /* type_specifier_nonarray: IMAGECUBE  */
#line 3196 "MachineIndependent/glslang.y"
                {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, EsdCube);
    }
#line 10151 "MachineIndependent/glslang_tab.cpp"
    break;

  case 471: /* type_specifier_nonarray: F16IMAGECUBE  */
#line 3201 "MachineIndependent/glslang.y"
                   {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float image", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat16, EsdCube);
    }
#line 10162 "MachineIndependent/glslang_tab.cpp"
    break;

  case 472: /* type_specifier_nonarray: IIMAGECUBE  */
#line 3207 "MachineIndependent/glslang.y"
                 {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, EsdCube);
    }
#line 10172 "MachineIndependent/glslang_tab.cpp"
    break;

  case 473: /* type_specifier_nonarray: UIMAGECUBE  */
#line 3212 "MachineIndependent/glslang.y"
                 {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, EsdCube);
    }
#line 10182 "MachineIndependent/glslang_tab.cpp"
    break;

  case 474: /* type_specifier_nonarray: IMAGEBUFFER  */
#line 3217 "MachineIndependent/glslang.y"
                  {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, EsdBuffer);
    }
#line 10192 "MachineIndependent/glslang_tab.cpp"
    break;

  case 475: /* type_specifier_nonarray: F16IMAGEBUFFER  */
#line 3222 "MachineIndependent/glslang.y"
                     {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float image", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat16, EsdBuffer);
    }
#line 10203 "MachineIndependent/glslang_tab.cpp"
    break;

  case 476: /* type_specifier_nonarray: IIMAGEBUFFER  */
#line 3228 "MachineIndependent/glslang.y"
                   {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, EsdBuffer);
    }
#line 10213 "MachineIndependent/glslang_tab.cpp"
    break;

  case 477: /* type_specifier_nonarray: UIMAGEBUFFER  */
#line 3233 "MachineIndependent/glslang.y"
                   {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, EsdBuffer);
    }
#line 10223 "MachineIndependent/glslang_tab.cpp"
    break;

  case 478: /* type_specifier_nonarray: IMAGE1DARRAY  */
#line 3238 "MachineIndependent/glslang.y"
                   {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, Esd1D, true);
    }
#line 10233 "MachineIndependent/glslang_tab.cpp"
    break;

  case 479: /* type_specifier_nonarray: F16IMAGE1DARRAY  */
#line 3243 "MachineIndependent/glslang.y"
                      {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float image", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat16, Esd1D, true);
    }
#line 10244 "MachineIndependent/glslang_tab.cpp"
    break;

  case 480: /* type_specifier_nonarray: IIMAGE1DARRAY  */
#line 3249 "MachineIndependent/glslang.y"
                    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, Esd1D, true);
    }
#line 10254 "MachineIndependent/glslang_tab.cpp"
    break;

  case 481: /* type_specifier_nonarray: UIMAGE1DARRAY  */
#line 3254 "MachineIndependent/glslang.y"
                    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, Esd1D, true);
    }
#line 10264 "MachineIndependent/glslang_tab.cpp"
    break;

  case 482: /* type_specifier_nonarray: IMAGE2DARRAY  */
#line 3259 "MachineIndependent/glslang.y"
                   {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, Esd2D, true);
    }
#line 10274 "MachineIndependent/glslang_tab.cpp"
    break;

  case 483: /* type_specifier_nonarray: F16IMAGE2DARRAY  */
#line 3264 "MachineIndependent/glslang.y"
                      {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float image", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat16, Esd2D, true);
    }
#line 10285 "MachineIndependent/glslang_tab.cpp"
    break;

  case 484: /* type_specifier_nonarray: IIMAGE2DARRAY  */
#line 3270 "MachineIndependent/glslang.y"
                    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, Esd2D, true);
    }
#line 10295 "MachineIndependent/glslang_tab.cpp"
    break;

  case 485: /* type_specifier_nonarray: UIMAGE2DARRAY  */
#line 3275 "MachineIndependent/glslang.y"
                    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, Esd2D, true);
    }
#line 10305 "MachineIndependent/glslang_tab.cpp"
    break;

  case 486: /* type_specifier_nonarray: IMAGECUBEARRAY  */
#line 3280 "MachineIndependent/glslang.y"
                     {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, EsdCube, true);
    }
#line 10315 "MachineIndependent/glslang_tab.cpp"
    break;

  case 487: /* type_specifier_nonarray: F16IMAGECUBEARRAY  */
#line 3285 "MachineIndependent/glslang.y"
                        {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float image", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat16, EsdCube, true);
    }
#line 10326 "MachineIndependent/glslang_tab.cpp"
    break;

  case 488: /* type_specifier_nonarray: IIMAGECUBEARRAY  */
#line 3291 "MachineIndependent/glslang.y"
                      {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, EsdCube, true);
    }
#line 10336 "MachineIndependent/glslang_tab.cpp"
    break;

  case 489: /* type_specifier_nonarray: UIMAGECUBEARRAY  */
#line 3296 "MachineIndependent/glslang.y"
                      {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, EsdCube, true);
    }
#line 10346 "MachineIndependent/glslang_tab.cpp"
    break;

  case 490: /* type_specifier_nonarray: IMAGE2DMS  */
#line 3301 "MachineIndependent/glslang.y"
                {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, Esd2D, false, false, true);
    }
#line 10356 "MachineIndependent/glslang_tab.cpp"
    break;

  case 491: /* type_specifier_nonarray: F16IMAGE2DMS  */
#line 3306 "MachineIndependent/glslang.y"
                   {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float image", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat16, Esd2D, false, false, true);
    }
#line 10367 "MachineIndependent/glslang_tab.cpp"
    break;

  case 492: /* type_specifier_nonarray: IIMAGE2DMS  */
#line 3312 "MachineIndependent/glslang.y"
                 {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, Esd2D, false, false, true);
    }
#line 10377 "MachineIndependent/glslang_tab.cpp"
    break;

  case 493: /* type_specifier_nonarray: UIMAGE2DMS  */
#line 3317 "MachineIndependent/glslang.y"
                 {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, Esd2D, false, false, true);
    }
#line 10387 "MachineIndependent/glslang_tab.cpp"
    break;

  case 494: /* type_specifier_nonarray: IMAGE2DMSARRAY  */
#line 3322 "MachineIndependent/glslang.y"
                     {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, Esd2D, true, false, true);
    }
#line 10397 "MachineIndependent/glslang_tab.cpp"
    break;

  case 495: /* type_specifier_nonarray: F16IMAGE2DMSARRAY  */
#line 3327 "MachineIndependent/glslang.y"
                        {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float image", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat16, Esd2D, true, false, true);
    }
#line 10408 "MachineIndependent/glslang_tab.cpp"
    break;

  case 496: /* type_specifier_nonarray: IIMAGE2DMSARRAY  */
#line 3333 "MachineIndependent/glslang.y"
                      {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, Esd2D, true, false, true);
    }
#line 10418 "MachineIndependent/glslang_tab.cpp"
    break;

  case 497: /* type_specifier_nonarray: UIMAGE2DMSARRAY  */
#line 3338 "MachineIndependent/glslang.y"
                      {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, Esd2D, true, false, true);
    }
#line 10428 "MachineIndependent/glslang_tab.cpp"
    break;

  case 498: /* type_specifier_nonarray: I64IMAGE1D  */
#line 3343 "MachineIndependent/glslang.y"
                 {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt64, Esd1D);
    }
#line 10438 "MachineIndependent/glslang_tab.cpp"
    break;

  case 499: /* type_specifier_nonarray: U64IMAGE1D  */
#line 3348 "MachineIndependent/glslang.y"
                 {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint64, Esd1D);
    }
#line 10448 "MachineIndependent/glslang_tab.cpp"
    break;

  case 500: /* type_specifier_nonarray: I64IMAGE2D  */
#line 3353 "MachineIndependent/glslang.y"
                 {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt64, Esd2D);
    }
#line 10458 "MachineIndependent/glslang_tab.cpp"
    break;

  case 501: /* type_specifier_nonarray: U64IMAGE2D  */
#line 3358 "MachineIndependent/glslang.y"
                 {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint64, Esd2D);
    }
#line 10468 "MachineIndependent/glslang_tab.cpp"
    break;

  case 502: /* type_specifier_nonarray: I64IMAGE3D  */
#line 3363 "MachineIndependent/glslang.y"
                 {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt64, Esd3D);
    }
#line 10478 "MachineIndependent/glslang_tab.cpp"
    break;

  case 503: /* type_specifier_nonarray: U64IMAGE3D  */
#line 3368 "MachineIndependent/glslang.y"
                 {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint64, Esd3D);
    }
#line 10488 "MachineIndependent/glslang_tab.cpp"
    break;

  case 504: /* type_specifier_nonarray: I64IMAGE2DRECT  */
#line 3373 "MachineIndependent/glslang.y"
                     {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt64, EsdRect);
    }
#line 10498 "MachineIndependent/glslang_tab.cpp"
    break;

  case 505: /* type_specifier_nonarray: U64IMAGE2DRECT  */
#line 3378 "MachineIndependent/glslang.y"
                     {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint64, EsdRect);
    }
#line 10508 "MachineIndependent/glslang_tab.cpp"
    break;

  case 506: /* type_specifier_nonarray: I64IMAGECUBE  */
#line 3383 "MachineIndependent/glslang.y"
                   {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt64, EsdCube);
    }
#line 10518 "MachineIndependent/glslang_tab.cpp"
    break;

  case 507: /* type_specifier_nonarray: U64IMAGECUBE  */
#line 3388 "MachineIndependent/glslang.y"
                   {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint64, EsdCube);
    }
#line 10528 "MachineIndependent/glslang_tab.cpp"
    break;

  case 508: /* type_specifier_nonarray: I64IMAGEBUFFER  */
#line 3393 "MachineIndependent/glslang.y"
                     {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt64, EsdBuffer);
    }
#line 10538 "MachineIndependent/glslang_tab.cpp"
    break;

  case 509: /* type_specifier_nonarray: U64IMAGEBUFFER  */
#line 3398 "MachineIndependent/glslang.y"
                     {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint64, EsdBuffer);
    }
#line 10548 "MachineIndependent/glslang_tab.cpp"
    break;

  case 510: /* type_specifier_nonarray: I64IMAGE1DARRAY  */
#line 3403 "MachineIndependent/glslang.y"
                      {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt64, Esd1D, true);
    }
#line 10558 "MachineIndependent/glslang_tab.cpp"
    break;

  case 511: /* type_specifier_nonarray: U64IMAGE1DARRAY  */
#line 3408 "MachineIndependent/glslang.y"
                      {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint64, Esd1D, true);
    }
#line 10568 "MachineIndependent/glslang_tab.cpp"
    break;

  case 512: /* type_specifier_nonarray: I64IMAGE2DARRAY  */
#line 3413 "MachineIndependent/glslang.y"
                      {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt64, Esd2D, true);
    }
#line 10578 "MachineIndependent/glslang_tab.cpp"
    break;

  case 513: /* type_specifier_nonarray: U64IMAGE2DARRAY  */
#line 3418 "MachineIndependent/glslang.y"
                      {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint64, Esd2D, true);
    }
#line 10588 "MachineIndependent/glslang_tab.cpp"
    break;

  case 514: /* type_specifier_nonarray: I64IMAGECUBEARRAY  */
#line 3423 "MachineIndependent/glslang.y"
                        {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt64, EsdCube, true);
    }
#line 10598 "MachineIndependent/glslang_tab.cpp"
    break;

  case 515: /* type_specifier_nonarray: U64IMAGECUBEARRAY  */
#line 3428 "MachineIndependent/glslang.y"
                        {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint64, EsdCube, true);
    }
#line 10608 "MachineIndependent/glslang_tab.cpp"
    break;

  case 516: /* type_specifier_nonarray: I64IMAGE2DMS  */
#line 3433 "MachineIndependent/glslang.y"
                   {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt64, Esd2D, false, false, true);
    }
#line 10618 "MachineIndependent/glslang_tab.cpp"
    break;

  case 517: /* type_specifier_nonarray: U64IMAGE2DMS  */
#line 3438 "MachineIndependent/glslang.y"
                   {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint64, Esd2D, false, false, true);
    }
#line 10628 "MachineIndependent/glslang_tab.cpp"
    break;

  case 518: /* type_specifier_nonarray: I64IMAGE2DMSARRAY  */
#line 3443 "MachineIndependent/glslang.y"
                        {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt64, Esd2D, true, false, true);
    }
#line 10638 "MachineIndependent/glslang_tab.cpp"
    break;

  case 519: /* type_specifier_nonarray: U64IMAGE2DMSARRAY  */
#line 3448 "MachineIndependent/glslang.y"
                        {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint64, Esd2D, true, false, true);
    }
#line 10648 "MachineIndependent/glslang_tab.cpp"
    break;

  case 520: /* type_specifier_nonarray: SAMPLEREXTERNALOES  */
#line 3453 "MachineIndependent/glslang.y"
                         {  // GL_OES_EGL_image_external
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D);
        (yyval.interm.type).sampler.external = true;
    }
#line 10659 "MachineIndependent/glslang_tab.cpp"
    break;

  case 521: /* type_specifier_nonarray: SAMPLEREXTERNAL2DY2YEXT  */
#line 3459 "MachineIndependent/glslang.y"
                              { // GL_EXT_YUV_target
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D);
        (yyval.interm.type).sampler.yuv = true;
    }
#line 10670 "MachineIndependent/glslang_tab.cpp"
    break;

  case 522: /* type_specifier_nonarray: ATTACHMENTEXT  */
#line 3465 "MachineIndependent/glslang.y"
                    {
        parseContext.requireStage((yyvsp[0].lex).loc, EShLangFragment, "attachmentEXT input");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setAttachmentEXT(EbtFloat);
    }
#line 10681 "MachineIndependent/glslang_tab.cpp"
    break;

  case 523: /* type_specifier_nonarray: IATTACHMENTEXT  */
#line 3471 "MachineIndependent/glslang.y"
                     {
        parseContext.requireStage((yyvsp[0].lex).loc, EShLangFragment, "attachmentEXT input");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setAttachmentEXT(EbtInt);
    }
#line 10692 "MachineIndependent/glslang_tab.cpp"
    break;

  case 524: /* type_specifier_nonarray: UATTACHMENTEXT  */
#line 3477 "MachineIndependent/glslang.y"
                     {
        parseContext.requireStage((yyvsp[0].lex).loc, EShLangFragment, "attachmentEXT input");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setAttachmentEXT(EbtUint);
    }
#line 10703 "MachineIndependent/glslang_tab.cpp"
    break;

  case 525: /* type_specifier_nonarray: SUBPASSINPUT  */
#line 3483 "MachineIndependent/glslang.y"
                   {
        parseContext.requireStage((yyvsp[0].lex).loc, EShLangFragment, "subpass input");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setSubpass(EbtFloat);
    }
#line 10714 "MachineIndependent/glslang_tab.cpp"
    break;

  case 526: /* type_specifier_nonarray: SUBPASSINPUTMS  */
#line 3489 "MachineIndependent/glslang.y"
                     {
        parseContext.requireStage((yyvsp[0].lex).loc, EShLangFragment, "subpass input");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setSubpass(EbtFloat, true);
    }
#line 10725 "MachineIndependent/glslang_tab.cpp"
    break;

  case 527: /* type_specifier_nonarray: F16SUBPASSINPUT  */
#line 3495 "MachineIndependent/glslang.y"
                      {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float subpass input", parseContext.symbolTable.atBuiltInLevel());
        parseContext.requireStage((yyvsp[0].lex).loc, EShLangFragment, "subpass input");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setSubpass(EbtFloat16);
    }
#line 10737 "MachineIndependent/glslang_tab.cpp"
    break;

  case 528: /* type_specifier_nonarray: F16SUBPASSINPUTMS  */
#line 3502 "MachineIndependent/glslang.y"
                        {
        parseContext.float16OpaqueCheck((yyvsp[0].lex).loc, "half float subpass input", parseContext.symbolTable.atBuiltInLevel());
        parseContext.requireStage((yyvsp[0].lex).loc, EShLangFragment, "subpass input");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setSubpass(EbtFloat16, true);
    }
#line 10749 "MachineIndependent/glslang_tab.cpp"
    break;

  case 529: /* type_specifier_nonarray: ISUBPASSINPUT  */
#line 3509 "MachineIndependent/glslang.y"
                    {
        parseContext.requireStage((yyvsp[0].lex).loc, EShLangFragment, "subpass input");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setSubpass(EbtInt);
    }
#line 10760 "MachineIndependent/glslang_tab.cpp"
    break;

  case 530: /* type_specifier_nonarray: ISUBPASSINPUTMS  */
#line 3515 "MachineIndependent/glslang.y"
                      {
        parseContext.requireStage((yyvsp[0].lex).loc, EShLangFragment, "subpass input");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setSubpass(EbtInt, true);
    }
#line 10771 "MachineIndependent/glslang_tab.cpp"
    break;

  case 531: /* type_specifier_nonarray: USUBPASSINPUT  */
#line 3521 "MachineIndependent/glslang.y"
                    {
        parseContext.requireStage((yyvsp[0].lex).loc, EShLangFragment, "subpass input");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setSubpass(EbtUint);
    }
#line 10782 "MachineIndependent/glslang_tab.cpp"
    break;

  case 532: /* type_specifier_nonarray: USUBPASSINPUTMS  */
#line 3527 "MachineIndependent/glslang.y"
                      {
        parseContext.requireStage((yyvsp[0].lex).loc, EShLangFragment, "subpass input");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setSubpass(EbtUint, true);
    }
#line 10793 "MachineIndependent/glslang_tab.cpp"
    break;

  case 533: /* type_specifier_nonarray: FCOOPMATNV  */
#line 3533 "MachineIndependent/glslang.y"
                 {
        parseContext.fcoopmatCheckNV((yyvsp[0].lex).loc, "fcoopmatNV", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).coopmatNV = true;
        (yyval.interm.type).coopmatKHR = false;
    }
#line 10805 "MachineIndependent/glslang_tab.cpp"
    break;

  case 534: /* type_specifier_nonarray: ICOOPMATNV  */
#line 3540 "MachineIndependent/glslang.y"
                 {
        parseContext.intcoopmatCheckNV((yyvsp[0].lex).loc, "icoopmatNV", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt;
        (yyval.interm.type).coopmatNV = true;
        (yyval.interm.type).coopmatKHR = false;
    }
#line 10817 "MachineIndependent/glslang_tab.cpp"
    break;

  case 535: /* type_specifier_nonarray: UCOOPMATNV  */
#line 3547 "MachineIndependent/glslang.y"
                 {
        parseContext.intcoopmatCheckNV((yyvsp[0].lex).loc, "ucoopmatNV", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint;
        (yyval.interm.type).coopmatNV = true;
        (yyval.interm.type).coopmatKHR = false;
    }
#line 10829 "MachineIndependent/glslang_tab.cpp"
    break;

  case 536: /* type_specifier_nonarray: COOPMAT  */
#line 3554 "MachineIndependent/glslang.y"
              {
        parseContext.coopmatCheck((yyvsp[0].lex).loc, "coopmat", parseContext.symbolTable.atBuiltInLevel());
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtCoopmat;
        (yyval.interm.type).coopmatNV = false;
        (yyval.interm.type).coopmatKHR = true;
    }
#line 10841 "MachineIndependent/glslang_tab.cpp"
    break;

  case 537: /* type_specifier_nonarray: spirv_type_specifier  */
#line 3561 "MachineIndependent/glslang.y"
                           {
        parseContext.requireExtensions((yyvsp[0].interm.type).loc, 1, &E_GL_EXT_spirv_intrinsics, "SPIR-V type specifier");
        (yyval.interm.type) = (yyvsp[0].interm.type);
    }
#line 10850 "MachineIndependent/glslang_tab.cpp"
    break;

  case 538: /* type_specifier_nonarray: HITOBJECTNV  */
#line 3565 "MachineIndependent/glslang.y"
                      {
       (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
       (yyval.interm.type).basicType = EbtHitObjectNV;
	}
#line 10859 "MachineIndependent/glslang_tab.cpp"
    break;

  case 539: /* type_specifier_nonarray: struct_specifier  */
#line 3570 "MachineIndependent/glslang.y"
                       {
        (yyval.interm.type) = (yyvsp[0].interm.type);
        (yyval.interm.type).qualifier.storage = parseContext.symbolTable.atGlobalLevel() ? EvqGlobal : EvqTemporary;
        parseContext.structTypeCheck((yyval.interm.type).loc, (yyval.interm.type));
    }
#line 10869 "MachineIndependent/glslang_tab.cpp"
    break;

  case 540: /* type_specifier_nonarray: TYPE_NAME  */
#line 3575 "MachineIndependent/glslang.y"
                {
        //
        // This is for user defined type names.  The lexical phase looked up the
        // type.
        //
        if (const TVariable* variable = ((yyvsp[0].lex).symbol)->getAsVariable()) {
            const TType& structure = variable->getType();
            (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
            (yyval.interm.type).basicType = EbtStruct;
            (yyval.interm.type).userDef = &structure;
        } else
            parseContext.error((yyvsp[0].lex).loc, "expected type name", (yyvsp[0].lex).string->c_str(), "");
    }
#line 10887 "MachineIndependent/glslang_tab.cpp"
    break;

  case 541: /* precision_qualifier: HIGH_PRECISION  */
#line 3591 "MachineIndependent/glslang.y"
                     {
        parseContext.profileRequires((yyvsp[0].lex).loc, ENoProfile, 130, 0, "highp precision qualifier");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        parseContext.handlePrecisionQualifier((yyvsp[0].lex).loc, (yyval.interm.type).qualifier, EpqHigh);
    }
#line 10897 "MachineIndependent/glslang_tab.cpp"
    break;

  case 542: /* precision_qualifier: MEDIUM_PRECISION  */
#line 3596 "MachineIndependent/glslang.y"
                       {
        parseContext.profileRequires((yyvsp[0].lex).loc, ENoProfile, 130, 0, "mediump precision qualifier");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        parseContext.handlePrecisionQualifier((yyvsp[0].lex).loc, (yyval.interm.type).qualifier, EpqMedium);
    }
#line 10907 "MachineIndependent/glslang_tab.cpp"
    break;

  case 543: /* precision_qualifier: LOW_PRECISION  */
#line 3601 "MachineIndependent/glslang.y"
                    {
        parseContext.profileRequires((yyvsp[0].lex).loc, ENoProfile, 130, 0, "lowp precision qualifier");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        parseContext.handlePrecisionQualifier((yyvsp[0].lex).loc, (yyval.interm.type).qualifier, EpqLow);
    }
#line 10917 "MachineIndependent/glslang_tab.cpp"
    break;

  case 544: /* $@3: %empty  */
#line 3609 "MachineIndependent/glslang.y"
                                   { parseContext.nestedStructCheck((yyvsp[-2].lex).loc); }
#line 10923 "MachineIndependent/glslang_tab.cpp"
    break;

  case 545: /* struct_specifier: STRUCT IDENTIFIER LEFT_BRACE $@3 struct_declaration_list RIGHT_BRACE  */
#line 3609 "MachineIndependent/glslang.y"
                                                                                                                   {
        TType* structure = new TType((yyvsp[-1].interm.typeList), *(yyvsp[-4].lex).string);
        parseContext.structArrayCheck((yyvsp[-4].lex).loc, *structure);
        TVariable* userTypeDef = new TVariable((yyvsp[-4].lex).string, *structure, true);
        if (! parseContext.symbolTable.insert(*userTypeDef))
            parseContext.error((yyvsp[-4].lex).loc, "redefinition", (yyvsp[-4].lex).string->c_str(), "struct");
        (yyval.interm.type).init((yyvsp[-5].lex).loc);
        (yyval.interm.type).basicType = EbtStruct;
        (yyval.interm.type).userDef = structure;
        --parseContext.structNestingLevel;
    }
#line 10939 "MachineIndependent/glslang_tab.cpp"
    break;

  case 546: /* $@4: %empty  */
#line 3620 "MachineIndependent/glslang.y"
                        { parseContext.nestedStructCheck((yyvsp[-1].lex).loc); }
#line 10945 "MachineIndependent/glslang_tab.cpp"
    break;

  case 547: /* struct_specifier: STRUCT LEFT_BRACE $@4 struct_declaration_list RIGHT_BRACE  */
#line 3620 "MachineIndependent/glslang.y"
                                                                                                        {
        TType* structure = new TType((yyvsp[-1].interm.typeList), TString(""));
        (yyval.interm.type).init((yyvsp[-4].lex).loc);
        (yyval.interm.type).basicType = EbtStruct;
        (yyval.interm.type).userDef = structure;
        --parseContext.structNestingLevel;
    }
#line 10957 "MachineIndependent/glslang_tab.cpp"
    break;

  case 548: /* struct_declaration_list: struct_declaration  */
#line 3630 "MachineIndependent/glslang.y"
                         {
        (yyval.interm.typeList) = (yyvsp[0].interm.typeList);
    }
#line 10965 "MachineIndependent/glslang_tab.cpp"
    break;

  case 549: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 3633 "MachineIndependent/glslang.y"
                                                 {
        (yyval.interm.typeList) = (yyvsp[-1].interm.typeList);
        for (unsigned int i = 0; i < (yyvsp[0].interm.typeList)->size(); ++i) {
            for (unsigned int j = 0; j < (yyval.interm.typeList)->size(); ++j) {
                if ((*(yyval.interm.typeList))[j].type->getFieldName() == (*(yyvsp[0].interm.typeList))[i].type->getFieldName())
                    parseContext.error((*(yyvsp[0].interm.typeList))[i].loc, "duplicate member name:", "", (*(yyvsp[0].interm.typeList))[i].type->getFieldName().c_str());
            }
            (yyval.interm.typeList)->push_back((*(yyvsp[0].interm.typeList))[i]);
        }
    }
#line 10980 "MachineIndependent/glslang_tab.cpp"
    break;

  case 550: /* struct_declaration: type_specifier struct_declarator_list SEMICOLON  */
#line 3646 "MachineIndependent/glslang.y"
                                                      {
        if ((yyvsp[-2].interm.type).arraySizes) {
            parseContext.profileRequires((yyvsp[-2].interm.type).loc, ENoProfile, 120, E_GL_3DL_array_objects, "arrayed type");
            parseContext.profileRequires((yyvsp[-2].interm.type).loc, EEsProfile, 300, 0, "arrayed type");
            if (parseContext.isEsProfile())
                parseContext.arraySizeRequiredCheck((yyvsp[-2].interm.type).loc, *(yyvsp[-2].interm.type).arraySizes);
        }

        (yyval.interm.typeList) = (yyvsp[-1].interm.typeList);

        parseContext.voidErrorCheck((yyvsp[-2].interm.type).loc, (*(yyvsp[-1].interm.typeList))[0].type->getFieldName(), (yyvsp[-2].interm.type).basicType);
        parseContext.precisionQualifierCheck((yyvsp[-2].interm.type).loc, (yyvsp[-2].interm.type).basicType, (yyvsp[-2].interm.type).qualifier, (yyvsp[-2].interm.type).isCoopmat());

        for (unsigned int i = 0; i < (yyval.interm.typeList)->size(); ++i) {
            TType type((yyvsp[-2].interm.type));
            type.setFieldName((*(yyval.interm.typeList))[i].type->getFieldName());
            type.transferArraySizes((*(yyval.interm.typeList))[i].type->getArraySizes());
            type.copyArrayInnerSizes((yyvsp[-2].interm.type).arraySizes);
            parseContext.arrayOfArrayVersionCheck((*(yyval.interm.typeList))[i].loc, type.getArraySizes());
            (*(yyval.interm.typeList))[i].type->shallowCopy(type);
        }
    }
#line 11007 "MachineIndependent/glslang_tab.cpp"
    break;

  case 551: /* struct_declaration: type_qualifier type_specifier struct_declarator_list SEMICOLON  */
#line 3668 "MachineIndependent/glslang.y"
                                                                     {
        if ((yyvsp[-2].interm.type).arraySizes) {
            parseContext.profileRequires((yyvsp[-2].interm.type).loc, ENoProfile, 120, E_GL_3DL_array_objects, "arrayed type");
            parseContext.profileRequires((yyvsp[-2].interm.type).loc, EEsProfile, 300, 0, "arrayed type");
            if (parseContext.isEsProfile())
                parseContext.arraySizeRequiredCheck((yyvsp[-2].interm.type).loc, *(yyvsp[-2].interm.type).arraySizes);
        }

        (yyval.interm.typeList) = (yyvsp[-1].interm.typeList);

        parseContext.memberQualifierCheck((yyvsp[-3].interm.type));
        parseContext.voidErrorCheck((yyvsp[-2].interm.type).loc, (*(yyvsp[-1].interm.typeList))[0].type->getFieldName(), (yyvsp[-2].interm.type).basicType);
        parseContext.mergeQualifiers((yyvsp[-2].interm.type).loc, (yyvsp[-2].interm.type).qualifier, (yyvsp[-3].interm.type).qualifier, true);
        parseContext.precisionQualifierCheck((yyvsp[-2].interm.type).loc, (yyvsp[-2].interm.type).basicType, (yyvsp[-2].interm.type).qualifier, (yyvsp[-2].interm.type).isCoopmat());

        for (unsigned int i = 0; i < (yyval.interm.typeList)->size(); ++i) {
            TType type((yyvsp[-2].interm.type));
            type.setFieldName((*(yyval.interm.typeList))[i].type->getFieldName());
            type.transferArraySizes((*(yyval.interm.typeList))[i].type->getArraySizes());
            type.copyArrayInnerSizes((yyvsp[-2].interm.type).arraySizes);
            parseContext.arrayOfArrayVersionCheck((*(yyval.interm.typeList))[i].loc, type.getArraySizes());
            (*(yyval.interm.typeList))[i].type->shallowCopy(type);
        }
    }
#line 11036 "MachineIndependent/glslang_tab.cpp"
    break;

  case 552: /* struct_declarator_list: struct_declarator  */
#line 3695 "MachineIndependent/glslang.y"
                        {
        (yyval.interm.typeList) = new TTypeList;
        (yyval.interm.typeList)->push_back((yyvsp[0].interm.typeLine));
    }
#line 11045 "MachineIndependent/glslang_tab.cpp"
    break;

  case 553: /* struct_declarator_list: struct_declarator_list COMMA struct_declarator  */
#line 3699 "MachineIndependent/glslang.y"
                                                     {
        (yyval.interm.typeList)->push_back((yyvsp[0].interm.typeLine));
    }
#line 11053 "MachineIndependent/glslang_tab.cpp"
    break;

  case 554: /* struct_declarator: IDENTIFIER  */
#line 3705 "MachineIndependent/glslang.y"
                 {
        (yyval.interm.typeLine).type = new TType(EbtVoid);
        (yyval.interm.typeLine).loc = (yyvsp[0].lex).loc;
        (yyval.interm.typeLine).type->setFieldName(*(yyvsp[0].lex).string);
    }
#line 11063 "MachineIndependent/glslang_tab.cpp"
    break;

  case 555: /* struct_declarator: IDENTIFIER array_specifier  */
#line 3710 "MachineIndependent/glslang.y"
                                 {
        parseContext.arrayOfArrayVersionCheck((yyvsp[-1].lex).loc, (yyvsp[0].interm).arraySizes);

        (yyval.interm.typeLine).type = new TType(EbtVoid);
        (yyval.interm.typeLine).loc = (yyvsp[-1].lex).loc;
        (yyval.interm.typeLine).type->setFieldName(*(yyvsp[-1].lex).string);
        (yyval.interm.typeLine).type->transferArraySizes((yyvsp[0].interm).arraySizes);
    }
#line 11076 "MachineIndependent/glslang_tab.cpp"
    break;

  case 556: /* initializer: assignment_expression  */
#line 3721 "MachineIndependent/glslang.y"
                            {
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 11084 "MachineIndependent/glslang_tab.cpp"
    break;

  case 557: /* initializer: LEFT_BRACE initializer_list RIGHT_BRACE  */
#line 3725 "MachineIndependent/glslang.y"
                                              {
        const char* initFeature = "{ } style initializers";
        parseContext.requireProfile((yyvsp[-2].lex).loc, ~EEsProfile, initFeature);
        parseContext.profileRequires((yyvsp[-2].lex).loc, ~EEsProfile, 420, E_GL_ARB_shading_language_420pack, initFeature);
        (yyval.interm.intermTypedNode) = (yyvsp[-1].interm.intermTypedNode);
    }
#line 11095 "MachineIndependent/glslang_tab.cpp"
    break;

  case 558: /* initializer: LEFT_BRACE initializer_list COMMA RIGHT_BRACE  */
#line 3731 "MachineIndependent/glslang.y"
                                                    {
        const char* initFeature = "{ } style initializers";
        parseContext.requireProfile((yyvsp[-3].lex).loc, ~EEsProfile, initFeature);
        parseContext.profileRequires((yyvsp[-3].lex).loc, ~EEsProfile, 420, E_GL_ARB_shading_language_420pack, initFeature);
        (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
    }
#line 11106 "MachineIndependent/glslang_tab.cpp"
    break;

  case 559: /* initializer: LEFT_BRACE RIGHT_BRACE  */
#line 3737 "MachineIndependent/glslang.y"
                             {
        const char* initFeature = "empty { } initializer";
        parseContext.profileRequires((yyvsp[-1].lex).loc, EEsProfile, 0, E_GL_EXT_null_initializer, initFeature);
        parseContext.profileRequires((yyvsp[-1].lex).loc, ~EEsProfile, 0, E_GL_EXT_null_initializer, initFeature);
        (yyval.interm.intermTypedNode) = parseContext.intermediate.makeAggregate((yyvsp[-1].lex).loc);
    }
#line 11117 "MachineIndependent/glslang_tab.cpp"
    break;

  case 560: /* initializer_list: initializer  */
#line 3748 "MachineIndependent/glslang.y"
                  {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.growAggregate(0, (yyvsp[0].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode)->getLoc());
    }
#line 11125 "MachineIndependent/glslang_tab.cpp"
    break;

  case 561: /* initializer_list: initializer_list COMMA initializer  */
#line 3751 "MachineIndependent/glslang.y"
                                         {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.growAggregate((yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
    }
#line 11133 "MachineIndependent/glslang_tab.cpp"
    break;

  case 562: /* declaration_statement: declaration  */
#line 3758 "MachineIndependent/glslang.y"
                  { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 11139 "MachineIndependent/glslang_tab.cpp"
    break;

  case 563: /* statement: compound_statement  */
#line 3762 "MachineIndependent/glslang.y"
                          { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 11145 "MachineIndependent/glslang_tab.cpp"
    break;

  case 564: /* statement: simple_statement  */
#line 3763 "MachineIndependent/glslang.y"
                          { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 11151 "MachineIndependent/glslang_tab.cpp"
    break;

  case 565: /* simple_statement: declaration_statement  */
#line 3769 "MachineIndependent/glslang.y"
                            { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 11157 "MachineIndependent/glslang_tab.cpp"
    break;

  case 566: /* simple_statement: expression_statement  */
#line 3770 "MachineIndependent/glslang.y"
                            { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 11163 "MachineIndependent/glslang_tab.cpp"
    break;

  case 567: /* simple_statement: selection_statement  */
#line 3771 "MachineIndependent/glslang.y"
                            { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 11169 "MachineIndependent/glslang_tab.cpp"
    break;

  case 568: /* simple_statement: switch_statement  */
#line 3772 "MachineIndependent/glslang.y"
                            { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 11175 "MachineIndependent/glslang_tab.cpp"
    break;

  case 569: /* simple_statement: case_label  */
#line 3773 "MachineIndependent/glslang.y"
                            { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 11181 "MachineIndependent/glslang_tab.cpp"
    break;

  case 570: /* simple_statement: iteration_statement  */
#line 3774 "MachineIndependent/glslang.y"
                            { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 11187 "MachineIndependent/glslang_tab.cpp"
    break;

  case 571: /* simple_statement: jump_statement  */
#line 3775 "MachineIndependent/glslang.y"
                            { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 11193 "MachineIndependent/glslang_tab.cpp"
    break;

  case 572: /* simple_statement: demote_statement  */
#line 3777 "MachineIndependent/glslang.y"
                            { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 11199 "MachineIndependent/glslang_tab.cpp"
    break;

  case 573: /* demote_statement: DEMOTE SEMICOLON  */
#line 3783 "MachineIndependent/glslang.y"
                       {
        parseContext.requireStage((yyvsp[-1].lex).loc, EShLangFragment, "demote");
        parseContext.requireExtensions((yyvsp[-1].lex).loc, 1, &E_GL_EXT_demote_to_helper_invocation, "demote");
        (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpDemote, (yyvsp[-1].lex).loc);
    }
#line 11209 "MachineIndependent/glslang_tab.cpp"
    break;

  case 574: /* compound_statement: LEFT_BRACE RIGHT_BRACE  */
#line 3792 "MachineIndependent/glslang.y"
                             { (yyval.interm.intermNode) = 0; }
#line 11215 "MachineIndependent/glslang_tab.cpp"
    break;

  case 575: /* $@5: %empty  */
#line 3793 "MachineIndependent/glslang.y"
                 {
        parseContext.symbolTable.push();
        ++parseContext.statementNestingLevel;
    }
#line 11224 "MachineIndependent/glslang_tab.cpp"
    break;

  case 576: /* $@6: %empty  */
#line 3797 "MachineIndependent/glslang.y"
                     {
        parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]);
        --parseContext.statementNestingLevel;
    }
#line 11233 "MachineIndependent/glslang_tab.cpp"
    break;

  case 577: /* compound_statement: LEFT_BRACE $@5 statement_list $@6 RIGHT_BRACE  */
#line 3801 "MachineIndependent/glslang.y"
                  {
        if ((yyvsp[-2].interm.intermNode) && (yyvsp[-2].interm.intermNode)->getAsAggregate())
            (yyvsp[-2].interm.intermNode)->getAsAggregate()->setOperator(parseContext.intermediate.getDebugInfo() ? EOpScope : EOpSequence);
        (yyval.interm.intermNode) = (yyvsp[-2].interm.intermNode);
    }
#line 11243 "MachineIndependent/glslang_tab.cpp"
    break;

  case 578: /* statement_no_new_scope: compound_statement_no_new_scope  */
#line 3809 "MachineIndependent/glslang.y"
                                      { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 11249 "MachineIndependent/glslang_tab.cpp"
    break;

  case 579: /* statement_no_new_scope: simple_statement  */
#line 3810 "MachineIndependent/glslang.y"
                                      { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 11255 "MachineIndependent/glslang_tab.cpp"
    break;

  case 580: /* $@7: %empty  */
#line 3814 "MachineIndependent/glslang.y"
      {
        ++parseContext.controlFlowNestingLevel;
    }
#line 11263 "MachineIndependent/glslang_tab.cpp"
    break;

  case 581: /* statement_scoped: $@7 compound_statement  */
#line 3817 "MachineIndependent/glslang.y"
                          {
        --parseContext.controlFlowNestingLevel;
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
    }
#line 11272 "MachineIndependent/glslang_tab.cpp"
    break;

  case 582: /* $@8: %empty  */
#line 3821 "MachineIndependent/glslang.y"
      {
        parseContext.symbolTable.push();
        ++parseContext.statementNestingLevel;
        ++parseContext.controlFlowNestingLevel;
    }
#line 11282 "MachineIndependent/glslang_tab.cpp"
    break;

  case 583: /* statement_scoped: $@8 simple_statement  */
#line 3826 "MachineIndependent/glslang.y"
                       {
        parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]);
        --parseContext.statementNestingLevel;
        --parseContext.controlFlowNestingLevel;
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
    }
#line 11293 "MachineIndependent/glslang_tab.cpp"
    break;

  case 584: /* compound_statement_no_new_scope: LEFT_BRACE RIGHT_BRACE  */
#line 3835 "MachineIndependent/glslang.y"
                             {
        (yyval.interm.intermNode) = 0;
    }
#line 11301 "MachineIndependent/glslang_tab.cpp"
    break;

  case 585: /* compound_statement_no_new_scope: LEFT_BRACE statement_list RIGHT_BRACE  */
#line 3838 "MachineIndependent/glslang.y"
                                            {
        if ((yyvsp[-1].interm.intermNode) && (yyvsp[-1].interm.intermNode)->getAsAggregate())
            (yyvsp[-1].interm.intermNode)->getAsAggregate()->setOperator(EOpSequence);
        (yyval.interm.intermNode) = (yyvsp[-1].interm.intermNode);
    }
#line 11311 "MachineIndependent/glslang_tab.cpp"
    break;

  case 586: /* statement_list: statement  */
#line 3846 "MachineIndependent/glslang.y"
                {
        (yyval.interm.intermNode) = parseContext.intermediate.makeAggregate((yyvsp[0].interm.intermNode));
        if ((yyvsp[0].interm.intermNode) && (yyvsp[0].interm.intermNode)->getAsBranchNode() && ((yyvsp[0].interm.intermNode)->getAsBranchNode()->getFlowOp() == EOpCase ||
                                            (yyvsp[0].interm.intermNode)->getAsBranchNode()->getFlowOp() == EOpDefault)) {
            parseContext.wrapupSwitchSubsequence(0, (yyvsp[0].interm.intermNode));
            (yyval.interm.intermNode) = 0;  // start a fresh subsequence for what's after this case
        }
    }
#line 11324 "MachineIndependent/glslang_tab.cpp"
    break;

  case 587: /* statement_list: statement_list statement  */
#line 3854 "MachineIndependent/glslang.y"
                               {
        if ((yyvsp[0].interm.intermNode) && (yyvsp[0].interm.intermNode)->getAsBranchNode() && ((yyvsp[0].interm.intermNode)->getAsBranchNode()->getFlowOp() == EOpCase ||
                                            (yyvsp[0].interm.intermNode)->getAsBranchNode()->getFlowOp() == EOpDefault)) {
            parseContext.wrapupSwitchSubsequence((yyvsp[-1].interm.intermNode) ? (yyvsp[-1].interm.intermNode)->getAsAggregate() : 0, (yyvsp[0].interm.intermNode));
            (yyval.interm.intermNode) = 0;  // start a fresh subsequence for what's after this case
        } else
            (yyval.interm.intermNode) = parseContext.intermediate.growAggregate((yyvsp[-1].interm.intermNode), (yyvsp[0].interm.intermNode));
    }
#line 11337 "MachineIndependent/glslang_tab.cpp"
    break;

  case 588: /* expression_statement: SEMICOLON  */
#line 3865 "MachineIndependent/glslang.y"
                 { (yyval.interm.intermNode) = 0; }
#line 11343 "MachineIndependent/glslang_tab.cpp"
    break;

  case 589: /* expression_statement: expression SEMICOLON  */
#line 3866 "MachineIndependent/glslang.y"
                            { (yyval.interm.intermNode) = static_cast<TIntermNode*>((yyvsp[-1].interm.intermTypedNode)); }
#line 11349 "MachineIndependent/glslang_tab.cpp"
    break;

  case 590: /* selection_statement: selection_statement_nonattributed  */
#line 3870 "MachineIndependent/glslang.y"
                                        {
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
    }
#line 11357 "MachineIndependent/glslang_tab.cpp"
    break;

  case 591: /* selection_statement: attribute selection_statement_nonattributed  */
#line 3874 "MachineIndependent/glslang.y"
                                                  {
        parseContext.requireExtensions((yyvsp[0].interm.intermNode)->getLoc(), 1, &E_GL_EXT_control_flow_attributes, "attribute");
        parseContext.handleSelectionAttributes(*(yyvsp[-1].interm.attributes), (yyvsp[0].interm.intermNode));
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
    }
#line 11367 "MachineIndependent/glslang_tab.cpp"
    break;

  case 592: /* selection_statement_nonattributed: IF LEFT_PAREN expression RIGHT_PAREN selection_rest_statement  */
#line 3882 "MachineIndependent/glslang.y"
                                                                    {
        parseContext.boolCheck((yyvsp[-4].lex).loc, (yyvsp[-2].interm.intermTypedNode));
        (yyval.interm.intermNode) = parseContext.intermediate.addSelection((yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.nodePair), (yyvsp[-4].lex).loc);
    }
#line 11376 "MachineIndependent/glslang_tab.cpp"
    break;

  case 593: /* selection_rest_statement: statement_scoped ELSE statement_scoped  */
#line 3889 "MachineIndependent/glslang.y"
                                             {
        (yyval.interm.nodePair).node1 = (yyvsp[-2].interm.intermNode);
        (yyval.interm.nodePair).node2 = (yyvsp[0].interm.intermNode);
    }
#line 11385 "MachineIndependent/glslang_tab.cpp"
    break;

  case 594: /* selection_rest_statement: statement_scoped  */
#line 3893 "MachineIndependent/glslang.y"
                       {
        (yyval.interm.nodePair).node1 = (yyvsp[0].interm.intermNode);
        (yyval.interm.nodePair).node2 = 0;
    }
#line 11394 "MachineIndependent/glslang_tab.cpp"
    break;

  case 595: /* condition: expression  */
#line 3901 "MachineIndependent/glslang.y"
                 {
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
        parseContext.boolCheck((yyvsp[0].interm.intermTypedNode)->getLoc(), (yyvsp[0].interm.intermTypedNode));
    }
#line 11403 "MachineIndependent/glslang_tab.cpp"
    break;

  case 596: /* condition: fully_specified_type IDENTIFIER EQUAL initializer  */
#line 3905 "MachineIndependent/glslang.y"
                                                        {
        parseContext.boolCheck((yyvsp[-2].lex).loc, (yyvsp[-3].interm.type));

        TType type((yyvsp[-3].interm.type));
        TIntermNode* initNode = parseContext.declareVariable((yyvsp[-2].lex).loc, *(yyvsp[-2].lex).string, (yyvsp[-3].interm.type), 0, (yyvsp[0].interm.intermTypedNode));
        if (initNode)
            (yyval.interm.intermTypedNode) = initNode->getAsTyped();
        else
            (yyval.interm.intermTypedNode) = 0;
    }
#line 11418 "MachineIndependent/glslang_tab.cpp"
    break;

  case 597: /* switch_statement: switch_statement_nonattributed  */
#line 3918 "MachineIndependent/glslang.y"
                                     {
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
    }
#line 11426 "MachineIndependent/glslang_tab.cpp"
    break;

  case 598: /* switch_statement: attribute switch_statement_nonattributed  */
#line 3922 "MachineIndependent/glslang.y"
                                               {
        parseContext.requireExtensions((yyvsp[0].interm.intermNode)->getLoc(), 1, &E_GL_EXT_control_flow_attributes, "attribute");
        parseContext.handleSwitchAttributes(*(yyvsp[-1].interm.attributes), (yyvsp[0].interm.intermNode));
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
    }
#line 11436 "MachineIndependent/glslang_tab.cpp"
    break;

  case 599: /* $@9: %empty  */
#line 3930 "MachineIndependent/glslang.y"
                                               {
        // start new switch sequence on the switch stack
        ++parseContext.controlFlowNestingLevel;
        ++parseContext.statementNestingLevel;
        parseContext.switchSequenceStack.push_back(new TIntermSequence);
        parseContext.switchLevel.push_back(parseContext.statementNestingLevel);
        parseContext.symbolTable.push();
    }
#line 11449 "MachineIndependent/glslang_tab.cpp"
    break;

  case 600: /* switch_statement_nonattributed: SWITCH LEFT_PAREN expression RIGHT_PAREN $@9 LEFT_BRACE switch_statement_list RIGHT_BRACE  */
#line 3938 "MachineIndependent/glslang.y"
                                                 {
        (yyval.interm.intermNode) = parseContext.addSwitch((yyvsp[-7].lex).loc, (yyvsp[-5].interm.intermTypedNode), (yyvsp[-1].interm.intermNode) ? (yyvsp[-1].interm.intermNode)->getAsAggregate() : 0);
        delete parseContext.switchSequenceStack.back();
        parseContext.switchSequenceStack.pop_back();
        parseContext.switchLevel.pop_back();
        parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]);
        --parseContext.statementNestingLevel;
        --parseContext.controlFlowNestingLevel;
    }
#line 11463 "MachineIndependent/glslang_tab.cpp"
    break;

  case 601: /* switch_statement_list: %empty  */
#line 3950 "MachineIndependent/glslang.y"
                    {
        (yyval.interm.intermNode) = 0;
    }
#line 11471 "MachineIndependent/glslang_tab.cpp"
    break;

  case 602: /* switch_statement_list: statement_list  */
#line 3953 "MachineIndependent/glslang.y"
                     {
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
    }
#line 11479 "MachineIndependent/glslang_tab.cpp"
    break;

  case 603: /* case_label: CASE expression COLON  */
#line 3959 "MachineIndependent/glslang.y"
                            {
        (yyval.interm.intermNode) = 0;
        if (parseContext.switchLevel.size() == 0)
            parseContext.error((yyvsp[-2].lex).loc, "cannot appear outside switch statement", "case", "");
        else if (parseContext.switchLevel.back() != parseContext.statementNestingLevel)
            parseContext.error((yyvsp[-2].lex).loc, "cannot be nested inside control flow", "case", "");
        else {
            parseContext.constantValueCheck((yyvsp[-1].interm.intermTypedNode), "case");
            parseContext.integerCheck((yyvsp[-1].interm.intermTypedNode), "case");
            (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpCase, (yyvsp[-1].interm.intermTypedNode), (yyvsp[-2].lex).loc);
        }
    }
#line 11496 "MachineIndependent/glslang_tab.cpp"
    break;

  case 604: /* case_label: DEFAULT COLON  */
#line 3971 "MachineIndependent/glslang.y"
                    {
        (yyval.interm.intermNode) = 0;
        if (parseContext.switchLevel.size() == 0)
            parseContext.error((yyvsp[-1].lex).loc, "cannot appear outside switch statement", "default", "");
        else if (parseContext.switchLevel.back() != parseContext.statementNestingLevel)
            parseContext.error((yyvsp[-1].lex).loc, "cannot be nested inside control flow", "default", "");
        else
            (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpDefault, (yyvsp[-1].lex).loc);
    }
#line 11510 "MachineIndependent/glslang_tab.cpp"
    break;

  case 605: /* iteration_statement: iteration_statement_nonattributed  */
#line 3983 "MachineIndependent/glslang.y"
                                        {
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
    }
#line 11518 "MachineIndependent/glslang_tab.cpp"
    break;

  case 606: /* iteration_statement: attribute iteration_statement_nonattributed  */
#line 3987 "MachineIndependent/glslang.y"
                                                  {
        parseContext.requireExtensions((yyvsp[0].interm.intermNode)->getLoc(), 1, &E_GL_EXT_control_flow_attributes, "attribute");
        parseContext.handleLoopAttributes(*(yyvsp[-1].interm.attributes), (yyvsp[0].interm.intermNode));
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
    }
#line 11528 "MachineIndependent/glslang_tab.cpp"
    break;

  case 607: /* $@10: %empty  */
#line 3995 "MachineIndependent/glslang.y"
                       {
        if (! parseContext.limits.whileLoops)
            parseContext.error((yyvsp[-1].lex).loc, "while loops not available", "limitation", "");
        parseContext.symbolTable.push();
        ++parseContext.loopNestingLevel;
        ++parseContext.statementNestingLevel;
        ++parseContext.controlFlowNestingLevel;
    }
#line 11541 "MachineIndependent/glslang_tab.cpp"
    break;

  case 608: /* iteration_statement_nonattributed: WHILE LEFT_PAREN $@10 condition RIGHT_PAREN statement_no_new_scope  */
#line 4003 "MachineIndependent/glslang.y"
                                                   {
        parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]);
        (yyval.interm.intermNode) = parseContext.intermediate.addLoop((yyvsp[0].interm.intermNode), (yyvsp[-2].interm.intermTypedNode), 0, true, (yyvsp[-5].lex).loc);
        --parseContext.loopNestingLevel;
        --parseContext.statementNestingLevel;
        --parseContext.controlFlowNestingLevel;
    }
#line 11553 "MachineIndependent/glslang_tab.cpp"
    break;

  case 609: /* $@11: %empty  */
#line 4010 "MachineIndependent/glslang.y"
         {
        parseContext.symbolTable.push();
        ++parseContext.loopNestingLevel;
        ++parseContext.statementNestingLevel;
        ++parseContext.controlFlowNestingLevel;
    }
#line 11564 "MachineIndependent/glslang_tab.cpp"
    break;

  case 610: /* iteration_statement_nonattributed: DO $@11 statement WHILE LEFT_PAREN expression RIGHT_PAREN SEMICOLON  */
#line 4016 "MachineIndependent/glslang.y"
                                                                  {
        if (! parseContext.limits.whileLoops)
            parseContext.error((yyvsp[-7].lex).loc, "do-while loops not available", "limitation", "");

        parseContext.boolCheck((yyvsp[0].lex).loc, (yyvsp[-2].interm.intermTypedNode));

        (yyval.interm.intermNode) = parseContext.intermediate.addLoop((yyvsp[-5].interm.intermNode), (yyvsp[-2].interm.intermTypedNode), 0, false, (yyvsp[-4].lex).loc);
        parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]);
        --parseContext.loopNestingLevel;
        --parseContext.statementNestingLevel;
        --parseContext.controlFlowNestingLevel;
    }
#line 11581 "MachineIndependent/glslang_tab.cpp"
    break;

  case 611: /* $@12: %empty  */
#line 4028 "MachineIndependent/glslang.y"
                     {
        parseContext.symbolTable.push();
        ++parseContext.loopNestingLevel;
        ++parseContext.statementNestingLevel;
        ++parseContext.controlFlowNestingLevel;
    }
#line 11592 "MachineIndependent/glslang_tab.cpp"
    break;

  case 612: /* iteration_statement_nonattributed: FOR LEFT_PAREN $@12 for_init_statement for_rest_statement RIGHT_PAREN statement_no_new_scope  */
#line 4034 "MachineIndependent/glslang.y"
                                                                               {
        parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]);
        (yyval.interm.intermNode) = parseContext.intermediate.makeAggregate((yyvsp[-3].interm.intermNode), (yyvsp[-5].lex).loc);
        TIntermLoop* forLoop = parseContext.intermediate.addLoop((yyvsp[0].interm.intermNode), reinterpret_cast<TIntermTyped*>((yyvsp[-2].interm.nodePair).node1), reinterpret_cast<TIntermTyped*>((yyvsp[-2].interm.nodePair).node2), true, (yyvsp[-6].lex).loc);
        if (! parseContext.limits.nonInductiveForLoops)
            parseContext.inductiveLoopCheck((yyvsp[-6].lex).loc, (yyvsp[-3].interm.intermNode), forLoop);
        (yyval.interm.intermNode) = parseContext.intermediate.growAggregate((yyval.interm.intermNode), forLoop, (yyvsp[-6].lex).loc);
        (yyval.interm.intermNode)->getAsAggregate()->setOperator(EOpSequence);
        --parseContext.loopNestingLevel;
        --parseContext.statementNestingLevel;
        --parseContext.controlFlowNestingLevel;
    }
#line 11609 "MachineIndependent/glslang_tab.cpp"
    break;

  case 613: /* for_init_statement: expression_statement  */
#line 4049 "MachineIndependent/glslang.y"
                           {
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
    }
#line 11617 "MachineIndependent/glslang_tab.cpp"
    break;

  case 614: /* for_init_statement: declaration_statement  */
#line 4052 "MachineIndependent/glslang.y"
                            {
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
    }
#line 11625 "MachineIndependent/glslang_tab.cpp"
    break;

  case 615: /* conditionopt: condition  */
#line 4058 "MachineIndependent/glslang.y"
                {
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 11633 "MachineIndependent/glslang_tab.cpp"
    break;

  case 616: /* conditionopt: %empty  */
#line 4061 "MachineIndependent/glslang.y"
                        {
        (yyval.interm.intermTypedNode) = 0;
    }
#line 11641 "MachineIndependent/glslang_tab.cpp"
    break;

  case 617: /* for_rest_statement: conditionopt SEMICOLON  */
#line 4067 "MachineIndependent/glslang.y"
                             {
        (yyval.interm.nodePair).node1 = (yyvsp[-1].interm.intermTypedNode);
        (yyval.interm.nodePair).node2 = 0;
    }
#line 11650 "MachineIndependent/glslang_tab.cpp"
    break;

  case 618: /* for_rest_statement: conditionopt SEMICOLON expression  */
#line 4071 "MachineIndependent/glslang.y"
                                         {
        (yyval.interm.nodePair).node1 = (yyvsp[-2].interm.intermTypedNode);
        (yyval.interm.nodePair).node2 = (yyvsp[0].interm.intermTypedNode);
    }
#line 11659 "MachineIndependent/glslang_tab.cpp"
    break;

  case 619: /* jump_statement: CONTINUE SEMICOLON  */
#line 4078 "MachineIndependent/glslang.y"
                         {
        if (parseContext.loopNestingLevel <= 0)
            parseContext.error((yyvsp[-1].lex).loc, "continue statement only allowed in loops", "", "");
        (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpContinue, (yyvsp[-1].lex).loc);
    }
#line 11669 "MachineIndependent/glslang_tab.cpp"
    break;

  case 620: /* jump_statement: BREAK SEMICOLON  */
#line 4083 "MachineIndependent/glslang.y"
                      {
        if (parseContext.loopNestingLevel + parseContext.switchSequenceStack.size() <= 0)
            parseContext.error((yyvsp[-1].lex).loc, "break statement only allowed in switch and loops", "", "");
        (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpBreak, (yyvsp[-1].lex).loc);
    }
#line 11679 "MachineIndependent/glslang_tab.cpp"
    break;

  case 621: /* jump_statement: RETURN SEMICOLON  */
#line 4088 "MachineIndependent/glslang.y"
                       {
        (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpReturn, (yyvsp[-1].lex).loc);
        if (parseContext.currentFunctionType->getBasicType() != EbtVoid)
            parseContext.error((yyvsp[-1].lex).loc, "non-void function must return a value", "return", "");
        if (parseContext.inMain)
            parseContext.postEntryPointReturn = true;
    }
#line 11691 "MachineIndependent/glslang_tab.cpp"
    break;

  case 622: /* jump_statement: RETURN expression SEMICOLON  */
#line 4095 "MachineIndependent/glslang.y"
                                  {
        (yyval.interm.intermNode) = parseContext.handleReturnValue((yyvsp[-2].lex).loc, (yyvsp[-1].interm.intermTypedNode));
    }
#line 11699 "MachineIndependent/glslang_tab.cpp"
    break;

  case 623: /* jump_statement: DISCARD SEMICOLON  */
#line 4098 "MachineIndependent/glslang.y"
                        {
        parseContext.requireStage((yyvsp[-1].lex).loc, EShLangFragment, "discard");
        (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpKill, (yyvsp[-1].lex).loc);
    }
#line 11708 "MachineIndependent/glslang_tab.cpp"
    break;

  case 624: /* jump_statement: TERMINATE_INVOCATION SEMICOLON  */
#line 4102 "MachineIndependent/glslang.y"
                                     {
        parseContext.requireStage((yyvsp[-1].lex).loc, EShLangFragment, "terminateInvocation");
        (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpTerminateInvocation, (yyvsp[-1].lex).loc);
    }
#line 11717 "MachineIndependent/glslang_tab.cpp"
    break;

  case 625: /* jump_statement: TERMINATE_RAY SEMICOLON  */
#line 4107 "MachineIndependent/glslang.y"
                              {
        parseContext.requireStage((yyvsp[-1].lex).loc, EShLangAnyHit, "terminateRayEXT");
        (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpTerminateRayKHR, (yyvsp[-1].lex).loc);
    }
#line 11726 "MachineIndependent/glslang_tab.cpp"
    break;

  case 626: /* jump_statement: IGNORE_INTERSECTION SEMICOLON  */
#line 4111 "MachineIndependent/glslang.y"
                                    {
        parseContext.requireStage((yyvsp[-1].lex).loc, EShLangAnyHit, "ignoreIntersectionEXT");
        (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpIgnoreIntersectionKHR, (yyvsp[-1].lex).loc);
    }
#line 11735 "MachineIndependent/glslang_tab.cpp"
    break;

  case 627: /* translation_unit: external_declaration  */
#line 4121 "MachineIndependent/glslang.y"
                           {
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
        parseContext.intermediate.setTreeRoot((yyval.interm.intermNode));
    }
#line 11744 "MachineIndependent/glslang_tab.cpp"
    break;

  case 628: /* translation_unit: translation_unit external_declaration  */
#line 4125 "MachineIndependent/glslang.y"
                                            {
        if ((yyvsp[0].interm.intermNode) != nullptr) {
            (yyval.interm.intermNode) = parseContext.intermediate.growAggregate((yyvsp[-1].interm.intermNode), (yyvsp[0].interm.intermNode));
            parseContext.intermediate.setTreeRoot((yyval.interm.intermNode));
        }
    }
#line 11755 "MachineIndependent/glslang_tab.cpp"
    break;

  case 629: /* external_declaration: function_definition  */
#line 4134 "MachineIndependent/glslang.y"
                          {
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
    }
#line 11763 "MachineIndependent/glslang_tab.cpp"
    break;

  case 630: /* external_declaration: declaration  */
#line 4137 "MachineIndependent/glslang.y"
                  {
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
    }
#line 11771 "MachineIndependent/glslang_tab.cpp"
    break;

  case 631: /* external_declaration: SEMICOLON  */
#line 4141 "MachineIndependent/glslang.y"
                {
        parseContext.requireProfile((yyvsp[0].lex).loc, ~EEsProfile, "extraneous semicolon");
        parseContext.profileRequires((yyvsp[0].lex).loc, ~EEsProfile, 460, nullptr, "extraneous semicolon");
        (yyval.interm.intermNode) = nullptr;
    }
#line 11781 "MachineIndependent/glslang_tab.cpp"
    break;

  case 632: /* $@13: %empty  */
#line 4150 "MachineIndependent/glslang.y"
                         {
        (yyvsp[0].interm).function = parseContext.handleFunctionDeclarator((yyvsp[0].interm).loc, *(yyvsp[0].interm).function, false /* not prototype */);
        (yyvsp[0].interm).intermNode = parseContext.handleFunctionDefinition((yyvsp[0].interm).loc, *(yyvsp[0].interm).function);

        // For ES 100 only, according to ES shading language 100 spec: A function
        // body has a scope nested inside the function's definition.
        if (parseContext.profile == EEsProfile && parseContext.version == 100)
        {
            parseContext.symbolTable.push();
            ++parseContext.statementNestingLevel;
        }
    }
#line 11798 "MachineIndependent/glslang_tab.cpp"
    break;

  case 633: /* function_definition: function_prototype $@13 compound_statement_no_new_scope  */
#line 4162 "MachineIndependent/glslang.y"
                                    {
        //   May be best done as post process phase on intermediate code
        if (parseContext.currentFunctionType->getBasicType() != EbtVoid && ! parseContext.functionReturnsValue)
            parseContext.error((yyvsp[-2].interm).loc, "function does not return a value:", "", (yyvsp[-2].interm).function->getName().c_str());
        parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]);
        (yyval.interm.intermNode) = parseContext.intermediate.growAggregate((yyvsp[-2].interm).intermNode, (yyvsp[0].interm.intermNode));
        parseContext.intermediate.setAggregateOperator((yyval.interm.intermNode), EOpFunction, (yyvsp[-2].interm).function->getType(), (yyvsp[-2].interm).loc);
        (yyval.interm.intermNode)->getAsAggregate()->setName((yyvsp[-2].interm).function->getMangledName().c_str());

        // store the pragma information for debug and optimize and other vendor specific
        // information. This information can be queried from the parse tree
        (yyval.interm.intermNode)->getAsAggregate()->setOptimize(parseContext.contextPragma.optimize);
        (yyval.interm.intermNode)->getAsAggregate()->setDebug(parseContext.contextPragma.debug);
        (yyval.interm.intermNode)->getAsAggregate()->setPragmaTable(parseContext.contextPragma.pragmaTable);

        // Set currentFunctionType to empty pointer when goes outside of the function
        parseContext.currentFunctionType = nullptr;

        // For ES 100 only, according to ES shading language 100 spec: A function
        // body has a scope nested inside the function's definition.
        if (parseContext.profile == EEsProfile && parseContext.version == 100)
        {
            parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]);
            --parseContext.statementNestingLevel;
        }
    }
#line 11829 "MachineIndependent/glslang_tab.cpp"
    break;

  case 634: /* attribute: LEFT_BRACKET LEFT_BRACKET attribute_list RIGHT_BRACKET RIGHT_BRACKET  */
#line 4192 "MachineIndependent/glslang.y"
                                                                           {
        (yyval.interm.attributes) = (yyvsp[-2].interm.attributes);
    }
#line 11837 "MachineIndependent/glslang_tab.cpp"
    break;

  case 635: /* attribute_list: single_attribute  */
#line 4197 "MachineIndependent/glslang.y"
                       {
        (yyval.interm.attributes) = (yyvsp[0].interm.attributes);
    }
#line 11845 "MachineIndependent/glslang_tab.cpp"
    break;

  case 636: /* attribute_list: attribute_list COMMA single_attribute  */
#line 4200 "MachineIndependent/glslang.y"
                                            {
        (yyval.interm.attributes) = parseContext.mergeAttributes((yyvsp[-2].interm.attributes), (yyvsp[0].interm.attributes));
    }
#line 11853 "MachineIndependent/glslang_tab.cpp"
    break;

  case 637: /* single_attribute: IDENTIFIER  */
#line 4205 "MachineIndependent/glslang.y"
                 {
        (yyval.interm.attributes) = parseContext.makeAttributes(*(yyvsp[0].lex).string);
    }
#line 11861 "MachineIndependent/glslang_tab.cpp"
    break;

  case 638: /* single_attribute: IDENTIFIER LEFT_PAREN constant_expression RIGHT_PAREN  */
#line 4208 "MachineIndependent/glslang.y"
                                                            {
        (yyval.interm.attributes) = parseContext.makeAttributes(*(yyvsp[-3].lex).string, (yyvsp[-1].interm.intermTypedNode));
    }
#line 11869 "MachineIndependent/glslang_tab.cpp"
    break;

  case 639: /* spirv_requirements_list: spirv_requirements_parameter  */
#line 4215 "MachineIndependent/glslang.y"
                                   {
        (yyval.interm.spirvReq) = (yyvsp[0].interm.spirvReq);
    }
#line 11877 "MachineIndependent/glslang_tab.cpp"
    break;

  case 640: /* spirv_requirements_list: spirv_requirements_list COMMA spirv_requirements_parameter  */
#line 4218 "MachineIndependent/glslang.y"
                                                                 {
        (yyval.interm.spirvReq) = parseContext.mergeSpirvRequirements((yyvsp[-1].lex).loc, (yyvsp[-2].interm.spirvReq), (yyvsp[0].interm.spirvReq));
    }
#line 11885 "MachineIndependent/glslang_tab.cpp"
    break;

  case 641: /* spirv_requirements_parameter: IDENTIFIER EQUAL LEFT_BRACKET spirv_extension_list RIGHT_BRACKET  */
#line 4223 "MachineIndependent/glslang.y"
                                                                       {
        (yyval.interm.spirvReq) = parseContext.makeSpirvRequirement((yyvsp[-3].lex).loc, *(yyvsp[-4].lex).string, (yyvsp[-1].interm.intermNode)->getAsAggregate(), nullptr);
    }
#line 11893 "MachineIndependent/glslang_tab.cpp"
    break;

  case 642: /* spirv_requirements_parameter: IDENTIFIER EQUAL LEFT_BRACKET spirv_capability_list RIGHT_BRACKET  */
#line 4226 "MachineIndependent/glslang.y"
                                                                        {
        (yyval.interm.spirvReq) = parseContext.makeSpirvRequirement((yyvsp[-3].lex).loc, *(yyvsp[-4].lex).string, nullptr, (yyvsp[-1].interm.intermNode)->getAsAggregate());
    }
#line 11901 "MachineIndependent/glslang_tab.cpp"
    break;

  case 643: /* spirv_extension_list: STRING_LITERAL  */
#line 4231 "MachineIndependent/glslang.y"
                     {
        (yyval.interm.intermNode) = parseContext.intermediate.makeAggregate(parseContext.intermediate.addConstantUnion((yyvsp[0].lex).string, (yyvsp[0].lex).loc, true));
    }
#line 11909 "MachineIndependent/glslang_tab.cpp"
    break;

  case 644: /* spirv_extension_list: spirv_extension_list COMMA STRING_LITERAL  */
#line 4234 "MachineIndependent/glslang.y"
                                                {
        (yyval.interm.intermNode) = parseContext.intermediate.growAggregate((yyvsp[-2].interm.intermNode), parseContext.intermediate.addConstantUnion((yyvsp[0].lex).string, (yyvsp[0].lex).loc, true));
    }
#line 11917 "MachineIndependent/glslang_tab.cpp"
    break;

  case 645: /* spirv_capability_list: INTCONSTANT  */
#line 4239 "MachineIndependent/glslang.y"
                  {
        (yyval.interm.intermNode) = parseContext.intermediate.makeAggregate(parseContext.intermediate.addConstantUnion((yyvsp[0].lex).i, (yyvsp[0].lex).loc, true));
    }
#line 11925 "MachineIndependent/glslang_tab.cpp"
    break;

  case 646: /* spirv_capability_list: spirv_capability_list COMMA INTCONSTANT  */
#line 4242 "MachineIndependent/glslang.y"
                                              {
        (yyval.interm.intermNode) = parseContext.intermediate.growAggregate((yyvsp[-2].interm.intermNode), parseContext.intermediate.addConstantUnion((yyvsp[0].lex).i, (yyvsp[0].lex).loc, true));
    }
#line 11933 "MachineIndependent/glslang_tab.cpp"
    break;

  case 647: /* spirv_execution_mode_qualifier: SPIRV_EXECUTION_MODE LEFT_PAREN INTCONSTANT RIGHT_PAREN  */
#line 4247 "MachineIndependent/glslang.y"
                                                              {
        parseContext.intermediate.insertSpirvExecutionMode((yyvsp[-1].lex).i);
        (yyval.interm.intermNode) = 0;
    }
#line 11942 "MachineIndependent/glslang_tab.cpp"
    break;

  case 648: /* spirv_execution_mode_qualifier: SPIRV_EXECUTION_MODE LEFT_PAREN spirv_requirements_list COMMA INTCONSTANT RIGHT_PAREN  */
#line 4251 "MachineIndependent/glslang.y"
                                                                                            {
        parseContext.intermediate.insertSpirvRequirement((yyvsp[-3].interm.spirvReq));
        parseContext.intermediate.insertSpirvExecutionMode((yyvsp[-1].lex).i);
        (yyval.interm.intermNode) = 0;
    }
#line 11952 "MachineIndependent/glslang_tab.cpp"
    break;

  case 649: /* spirv_execution_mode_qualifier: SPIRV_EXECUTION_MODE LEFT_PAREN INTCONSTANT COMMA spirv_execution_mode_parameter_list RIGHT_PAREN  */
#line 4256 "MachineIndependent/glslang.y"
                                                                                                        {
        parseContext.intermediate.insertSpirvExecutionMode((yyvsp[-3].lex).i, (yyvsp[-1].interm.intermNode)->getAsAggregate());
        (yyval.interm.intermNode) = 0;
    }
#line 11961 "MachineIndependent/glslang_tab.cpp"
    break;

  case 650: /* spirv_execution_mode_qualifier: SPIRV_EXECUTION_MODE LEFT_PAREN spirv_requirements_list COMMA INTCONSTANT COMMA spirv_execution_mode_parameter_list RIGHT_PAREN  */
#line 4260 "MachineIndependent/glslang.y"
                                                                                                                                      {
        parseContext.intermediate.insertSpirvRequirement((yyvsp[-5].interm.spirvReq));
        parseContext.intermediate.insertSpirvExecutionMode((yyvsp[-3].lex).i, (yyvsp[-1].interm.intermNode)->getAsAggregate());
        (yyval.interm.intermNode) = 0;
    }
#line 11971 "MachineIndependent/glslang_tab.cpp"
    break;

  case 651: /* spirv_execution_mode_qualifier: SPIRV_EXECUTION_MODE_ID LEFT_PAREN INTCONSTANT COMMA spirv_execution_mode_id_parameter_list RIGHT_PAREN  */
#line 4265 "MachineIndependent/glslang.y"
                                                                                                              {
        parseContext.intermediate.insertSpirvExecutionModeId((yyvsp[-3].lex).i, (yyvsp[-1].interm.intermNode)->getAsAggregate());
        (yyval.interm.intermNode) = 0;
    }
#line 11980 "MachineIndependent/glslang_tab.cpp"
    break;

  case 652: /* spirv_execution_mode_qualifier: SPIRV_EXECUTION_MODE_ID LEFT_PAREN spirv_requirements_list COMMA INTCONSTANT COMMA spirv_execution_mode_id_parameter_list RIGHT_PAREN  */
#line 4269 "MachineIndependent/glslang.y"
                                                                                                                                            {
        parseContext.intermediate.insertSpirvRequirement((yyvsp[-5].interm.spirvReq));
        parseContext.intermediate.insertSpirvExecutionModeId((yyvsp[-3].lex).i, (yyvsp[-1].interm.intermNode)->getAsAggregate());
        (yyval.interm.intermNode) = 0;
    }
#line 11990 "MachineIndependent/glslang_tab.cpp"
    break;

  case 653: /* spirv_execution_mode_parameter_list: spirv_execution_mode_parameter  */
#line 4276 "MachineIndependent/glslang.y"
                                     {
        (yyval.interm.intermNode) = parseContext.intermediate.makeAggregate((yyvsp[0].interm.intermNode));
    }
#line 11998 "MachineIndependent/glslang_tab.cpp"
    break;

  case 654: /* spirv_execution_mode_parameter_list: spirv_execution_mode_parameter_list COMMA spirv_execution_mode_parameter  */
#line 4279 "MachineIndependent/glslang.y"
                                                                               {
        (yyval.interm.intermNode) = parseContext.intermediate.growAggregate((yyvsp[-2].interm.intermNode), (yyvsp[0].interm.intermNode));
    }
#line 12006 "MachineIndependent/glslang_tab.cpp"
    break;

  case 655: /* spirv_execution_mode_parameter: FLOATCONSTANT  */
#line 4284 "MachineIndependent/glslang.y"
                    {
        (yyval.interm.intermNode) = parseContext.intermediate.addConstantUnion((yyvsp[0].lex).d, EbtFloat, (yyvsp[0].lex).loc, true);
    }
#line 12014 "MachineIndependent/glslang_tab.cpp"
    break;

  case 656: /* spirv_execution_mode_parameter: INTCONSTANT  */
#line 4287 "MachineIndependent/glslang.y"
                  {
        (yyval.interm.intermNode) = parseContext.intermediate.addConstantUnion((yyvsp[0].lex).i, (yyvsp[0].lex).loc, true);
    }
#line 12022 "MachineIndependent/glslang_tab.cpp"
    break;

  case 657: /* spirv_execution_mode_parameter: UINTCONSTANT  */
#line 4290 "MachineIndependent/glslang.y"
                   {
        (yyval.interm.intermNode) = parseContext.intermediate.addConstantUnion((yyvsp[0].lex).u, (yyvsp[0].lex).loc, true);
    }
#line 12030 "MachineIndependent/glslang_tab.cpp"
    break;

  case 658: /* spirv_execution_mode_parameter: BOOLCONSTANT  */
#line 4293 "MachineIndependent/glslang.y"
                   {
        (yyval.interm.intermNode) = parseContext.intermediate.addConstantUnion((yyvsp[0].lex).b, (yyvsp[0].lex).loc, true);
    }
#line 12038 "MachineIndependent/glslang_tab.cpp"
    break;

  case 659: /* spirv_execution_mode_parameter: STRING_LITERAL  */
#line 4296 "MachineIndependent/glslang.y"
                     {
        (yyval.interm.intermNode) = parseContext.intermediate.addConstantUnion((yyvsp[0].lex).string, (yyvsp[0].lex).loc, true);
    }
#line 12046 "MachineIndependent/glslang_tab.cpp"
    break;

  case 660: /* spirv_execution_mode_id_parameter_list: constant_expression  */
#line 4301 "MachineIndependent/glslang.y"
                          {
        if ((yyvsp[0].interm.intermTypedNode)->getBasicType() != EbtFloat &&
            (yyvsp[0].interm.intermTypedNode)->getBasicType() != EbtInt &&
            (yyvsp[0].interm.intermTypedNode)->getBasicType() != EbtUint &&
            (yyvsp[0].interm.intermTypedNode)->getBasicType() != EbtBool &&
            (yyvsp[0].interm.intermTypedNode)->getBasicType() != EbtString)
            parseContext.error((yyvsp[0].interm.intermTypedNode)->getLoc(), "this type not allowed", (yyvsp[0].interm.intermTypedNode)->getType().getBasicString(), "");
        (yyval.interm.intermNode) = parseContext.intermediate.makeAggregate((yyvsp[0].interm.intermTypedNode));
    }
#line 12060 "MachineIndependent/glslang_tab.cpp"
    break;

  case 661: /* spirv_execution_mode_id_parameter_list: spirv_execution_mode_id_parameter_list COMMA constant_expression  */
#line 4310 "MachineIndependent/glslang.y"
                                                                       {
        if ((yyvsp[0].interm.intermTypedNode)->getBasicType() != EbtFloat &&
            (yyvsp[0].interm.intermTypedNode)->getBasicType() != EbtInt &&
            (yyvsp[0].interm.intermTypedNode)->getBasicType() != EbtUint &&
            (yyvsp[0].interm.intermTypedNode)->getBasicType() != EbtBool &&
            (yyvsp[0].interm.intermTypedNode)->getBasicType() != EbtString)
            parseContext.error((yyvsp[0].interm.intermTypedNode)->getLoc(), "this type not allowed", (yyvsp[0].interm.intermTypedNode)->getType().getBasicString(), "");
        (yyval.interm.intermNode) = parseContext.intermediate.growAggregate((yyvsp[-2].interm.intermNode), (yyvsp[0].interm.intermTypedNode));
    }
#line 12074 "MachineIndependent/glslang_tab.cpp"
    break;

  case 662: /* spirv_storage_class_qualifier: SPIRV_STORAGE_CLASS LEFT_PAREN INTCONSTANT RIGHT_PAREN  */
#line 4321 "MachineIndependent/glslang.y"
                                                             {
        (yyval.interm.type).init((yyvsp[-3].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqSpirvStorageClass;
        (yyval.interm.type).qualifier.spirvStorageClass = (yyvsp[-1].lex).i;
    }
#line 12084 "MachineIndependent/glslang_tab.cpp"
    break;

  case 663: /* spirv_storage_class_qualifier: SPIRV_STORAGE_CLASS LEFT_PAREN spirv_requirements_list COMMA INTCONSTANT RIGHT_PAREN  */
#line 4326 "MachineIndependent/glslang.y"
                                                                                           {
        (yyval.interm.type).init((yyvsp[-5].lex).loc);
        parseContext.intermediate.insertSpirvRequirement((yyvsp[-3].interm.spirvReq));
        (yyval.interm.type).qualifier.storage = EvqSpirvStorageClass;
        (yyval.interm.type).qualifier.spirvStorageClass = (yyvsp[-1].lex).i;
    }
#line 12095 "MachineIndependent/glslang_tab.cpp"
    break;

  case 664: /* spirv_decorate_qualifier: SPIRV_DECORATE LEFT_PAREN INTCONSTANT RIGHT_PAREN  */
#line 4334 "MachineIndependent/glslang.y"
                                                       {
        (yyval.interm.type).init((yyvsp[-3].lex).loc);
        (yyval.interm.type).qualifier.setSpirvDecorate((yyvsp[-1].lex).i);
    }
#line 12104 "MachineIndependent/glslang_tab.cpp"
    break;

  case 665: /* spirv_decorate_qualifier: SPIRV_DECORATE LEFT_PAREN spirv_requirements_list COMMA INTCONSTANT RIGHT_PAREN  */
#line 4338 "MachineIndependent/glslang.y"
                                                                                     {
        (yyval.interm.type).init((yyvsp[-5].lex).loc);
        parseContext.intermediate.insertSpirvRequirement((yyvsp[-3].interm.spirvReq));
        (yyval.interm.type).qualifier.setSpirvDecorate((yyvsp[-1].lex).i);
    }
#line 12114 "MachineIndependent/glslang_tab.cpp"
    break;

  case 666: /* spirv_decorate_qualifier: SPIRV_DECORATE LEFT_PAREN INTCONSTANT COMMA spirv_decorate_parameter_list RIGHT_PAREN  */
#line 4343 "MachineIndependent/glslang.y"
                                                                                            {
        (yyval.interm.type).init((yyvsp[-5].lex).loc);
        (yyval.interm.type).qualifier.setSpirvDecorate((yyvsp[-3].lex).i, (yyvsp[-1].interm.intermNode)->getAsAggregate());
    }
#line 12123 "MachineIndependent/glslang_tab.cpp"
    break;

  case 667: /* spirv_decorate_qualifier: SPIRV_DECORATE LEFT_PAREN spirv_requirements_list COMMA INTCONSTANT COMMA spirv_decorate_parameter_list RIGHT_PAREN  */
#line 4347 "MachineIndependent/glslang.y"
                                                                                                                          {
        (yyval.interm.type).init((yyvsp[-7].lex).loc);
        parseContext.intermediate.insertSpirvRequirement((yyvsp[-5].interm.spirvReq));
        (yyval.interm.type).qualifier.setSpirvDecorate((yyvsp[-3].lex).i, (yyvsp[-1].interm.intermNode)->getAsAggregate());
    }
#line 12133 "MachineIndependent/glslang_tab.cpp"
    break;

  case 668: /* spirv_decorate_qualifier: SPIRV_DECORATE_ID LEFT_PAREN INTCONSTANT COMMA spirv_decorate_id_parameter_list RIGHT_PAREN  */
#line 4352 "MachineIndependent/glslang.y"
                                                                                                  {
        (yyval.interm.type).init((yyvsp[-5].lex).loc);
        (yyval.interm.type).qualifier.setSpirvDecorateId((yyvsp[-3].lex).i, (yyvsp[-1].interm.intermNode)->getAsAggregate());
    }
#line 12142 "MachineIndependent/glslang_tab.cpp"
    break;

  case 669: /* spirv_decorate_qualifier: SPIRV_DECORATE_ID LEFT_PAREN spirv_requirements_list COMMA INTCONSTANT COMMA spirv_decorate_id_parameter_list RIGHT_PAREN  */
#line 4356 "MachineIndependent/glslang.y"
                                                                                                                                {
        (yyval.interm.type).init((yyvsp[-7].lex).loc);
        parseContext.intermediate.insertSpirvRequirement((yyvsp[-5].interm.spirvReq));
        (yyval.interm.type).qualifier.setSpirvDecorateId((yyvsp[-3].lex).i, (yyvsp[-1].interm.intermNode)->getAsAggregate());
    }
#line 12152 "MachineIndependent/glslang_tab.cpp"
    break;

  case 670: /* spirv_decorate_qualifier: SPIRV_DECORATE_STRING LEFT_PAREN INTCONSTANT COMMA spirv_decorate_string_parameter_list RIGHT_PAREN  */
#line 4361 "MachineIndependent/glslang.y"
                                                                                                          {
        (yyval.interm.type).init((yyvsp[-5].lex).loc);
        (yyval.interm.type).qualifier.setSpirvDecorateString((yyvsp[-3].lex).i, (yyvsp[-1].interm.intermNode)->getAsAggregate());
    }
#line 12161 "MachineIndependent/glslang_tab.cpp"
    break;

  case 671: /* spirv_decorate_qualifier: SPIRV_DECORATE_STRING LEFT_PAREN spirv_requirements_list COMMA INTCONSTANT COMMA spirv_decorate_string_parameter_list RIGHT_PAREN  */
#line 4365 "MachineIndependent/glslang.y"
                                                                                                                                        {
        (yyval.interm.type).init((yyvsp[-7].lex).loc);
        parseContext.intermediate.insertSpirvRequirement((yyvsp[-5].interm.spirvReq));
        (yyval.interm.type).qualifier.setSpirvDecorateString((yyvsp[-3].lex).i, (yyvsp[-1].interm.intermNode)->getAsAggregate());
    }
#line 12171 "MachineIndependent/glslang_tab.cpp"
    break;

  case 672: /* spirv_decorate_parameter_list: spirv_decorate_parameter  */
#line 4372 "MachineIndependent/glslang.y"
                               {
        (yyval.interm.intermNode) = parseContext.intermediate.makeAggregate((yyvsp[0].interm.intermNode));
    }
#line 12179 "MachineIndependent/glslang_tab.cpp"
    break;

  case 673: /* spirv_decorate_parameter_list: spirv_decorate_parameter_list COMMA spirv_decorate_parameter  */
#line 4375 "MachineIndependent/glslang.y"
                                                                   {
        (yyval.interm.intermNode) = parseContext.intermediate.growAggregate((yyvsp[-2].interm.intermNode), (yyvsp[0].interm.intermNode));
    }
#line 12187 "MachineIndependent/glslang_tab.cpp"
    break;

  case 674: /* spirv_decorate_parameter: FLOATCONSTANT  */
#line 4380 "MachineIndependent/glslang.y"
                    {
        (yyval.interm.intermNode) = parseContext.intermediate.addConstantUnion((yyvsp[0].lex).d, EbtFloat, (yyvsp[0].lex).loc, true);
    }
#line 12195 "MachineIndependent/glslang_tab.cpp"
    break;

  case 675: /* spirv_decorate_parameter: INTCONSTANT  */
#line 4383 "MachineIndependent/glslang.y"
                  {
        (yyval.interm.intermNode) = parseContext.intermediate.addConstantUnion((yyvsp[0].lex).i, (yyvsp[0].lex).loc, true);
    }
#line 12203 "MachineIndependent/glslang_tab.cpp"
    break;

  case 676: /* spirv_decorate_parameter: UINTCONSTANT  */
#line 4386 "MachineIndependent/glslang.y"
                   {
        (yyval.interm.intermNode) = parseContext.intermediate.addConstantUnion((yyvsp[0].lex).u, (yyvsp[0].lex).loc, true);
    }
#line 12211 "MachineIndependent/glslang_tab.cpp"
    break;

  case 677: /* spirv_decorate_parameter: BOOLCONSTANT  */
#line 4389 "MachineIndependent/glslang.y"
                   {
        (yyval.interm.intermNode) = parseContext.intermediate.addConstantUnion((yyvsp[0].lex).b, (yyvsp[0].lex).loc, true);
    }
#line 12219 "MachineIndependent/glslang_tab.cpp"
    break;

  case 678: /* spirv_decorate_id_parameter_list: spirv_decorate_id_parameter  */
#line 4394 "MachineIndependent/glslang.y"
                                  {
        (yyval.interm.intermNode) = parseContext.intermediate.makeAggregate((yyvsp[0].interm.intermNode));
    }
#line 12227 "MachineIndependent/glslang_tab.cpp"
    break;

  case 679: /* spirv_decorate_id_parameter_list: spirv_decorate_id_parameter_list COMMA spirv_decorate_id_parameter  */
#line 4397 "MachineIndependent/glslang.y"
                                                                         {
        (yyval.interm.intermNode) = parseContext.intermediate.growAggregate((yyvsp[-2].interm.intermNode), (yyvsp[0].interm.intermNode));
    }
#line 12235 "MachineIndependent/glslang_tab.cpp"
    break;

  case 680: /* spirv_decorate_id_parameter: variable_identifier  */
#line 4402 "MachineIndependent/glslang.y"
                          {
        if ((yyvsp[0].interm.intermTypedNode)->getAsConstantUnion() || (yyvsp[0].interm.intermTypedNode)->getAsSymbolNode())
            (yyval.interm.intermNode) = (yyvsp[0].interm.intermTypedNode);
        else
            parseContext.error((yyvsp[0].interm.intermTypedNode)->getLoc(), "only allow constants or variables which are not elements of a composite", "", "");
    }
#line 12246 "MachineIndependent/glslang_tab.cpp"
    break;

  case 681: /* spirv_decorate_id_parameter: FLOATCONSTANT  */
#line 4408 "MachineIndependent/glslang.y"
                    {
        (yyval.interm.intermNode) = parseContext.intermediate.addConstantUnion((yyvsp[0].lex).d, EbtFloat, (yyvsp[0].lex).loc, true);
    }
#line 12254 "MachineIndependent/glslang_tab.cpp"
    break;

  case 682: /* spirv_decorate_id_parameter: INTCONSTANT  */
#line 4411 "MachineIndependent/glslang.y"
                  {
        (yyval.interm.intermNode) = parseContext.intermediate.addConstantUnion((yyvsp[0].lex).i, (yyvsp[0].lex).loc, true);
    }
#line 12262 "MachineIndependent/glslang_tab.cpp"
    break;

  case 683: /* spirv_decorate_id_parameter: UINTCONSTANT  */
#line 4414 "MachineIndependent/glslang.y"
                   {
        (yyval.interm.intermNode) = parseContext.intermediate.addConstantUnion((yyvsp[0].lex).u, (yyvsp[0].lex).loc, true);
    }
#line 12270 "MachineIndependent/glslang_tab.cpp"
    break;

  case 684: /* spirv_decorate_id_parameter: BOOLCONSTANT  */
#line 4417 "MachineIndependent/glslang.y"
                   {
        (yyval.interm.intermNode) = parseContext.intermediate.addConstantUnion((yyvsp[0].lex).b, (yyvsp[0].lex).loc, true);
    }
#line 12278 "MachineIndependent/glslang_tab.cpp"
    break;

  case 685: /* spirv_decorate_string_parameter_list: STRING_LITERAL  */
#line 4422 "MachineIndependent/glslang.y"
                     {
        (yyval.interm.intermNode) = parseContext.intermediate.makeAggregate(
            parseContext.intermediate.addConstantUnion((yyvsp[0].lex).string, (yyvsp[0].lex).loc, true));
    }
#line 12287 "MachineIndependent/glslang_tab.cpp"
    break;

  case 686: /* spirv_decorate_string_parameter_list: spirv_decorate_string_parameter_list COMMA STRING_LITERAL  */
#line 4426 "MachineIndependent/glslang.y"
                                                                {
        (yyval.interm.intermNode) = parseContext.intermediate.growAggregate((yyvsp[-2].interm.intermNode), parseContext.intermediate.addConstantUnion((yyvsp[0].lex).string, (yyvsp[0].lex).loc, true));
    }
#line 12295 "MachineIndependent/glslang_tab.cpp"
    break;

  case 687: /* spirv_type_specifier: SPIRV_TYPE LEFT_PAREN spirv_instruction_qualifier_list COMMA spirv_type_parameter_list RIGHT_PAREN  */
#line 4431 "MachineIndependent/glslang.y"
                                                                                                         {
        (yyval.interm.type).init((yyvsp[-5].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).setSpirvType(*(yyvsp[-3].interm.spirvInst), (yyvsp[-1].interm.spirvTypeParams));
    }
#line 12304 "MachineIndependent/glslang_tab.cpp"
    break;

  case 688: /* spirv_type_specifier: SPIRV_TYPE LEFT_PAREN spirv_requirements_list COMMA spirv_instruction_qualifier_list COMMA spirv_type_parameter_list RIGHT_PAREN  */
#line 4435 "MachineIndependent/glslang.y"
                                                                                                                                       {
        (yyval.interm.type).init((yyvsp[-7].lex).loc, parseContext.symbolTable.atGlobalLevel());
        parseContext.intermediate.insertSpirvRequirement((yyvsp[-5].interm.spirvReq));
        (yyval.interm.type).setSpirvType(*(yyvsp[-3].interm.spirvInst), (yyvsp[-1].interm.spirvTypeParams));
    }
#line 12314 "MachineIndependent/glslang_tab.cpp"
    break;

  case 689: /* spirv_type_specifier: SPIRV_TYPE LEFT_PAREN spirv_instruction_qualifier_list RIGHT_PAREN  */
#line 4440 "MachineIndependent/glslang.y"
                                                                         {
        (yyval.interm.type).init((yyvsp[-3].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).setSpirvType(*(yyvsp[-1].interm.spirvInst));
    }
#line 12323 "MachineIndependent/glslang_tab.cpp"
    break;

  case 690: /* spirv_type_specifier: SPIRV_TYPE LEFT_PAREN spirv_requirements_list COMMA spirv_instruction_qualifier_list RIGHT_PAREN  */
#line 4444 "MachineIndependent/glslang.y"
                                                                                                       {
        (yyval.interm.type).init((yyvsp[-5].lex).loc, parseContext.symbolTable.atGlobalLevel());
        parseContext.intermediate.insertSpirvRequirement((yyvsp[-3].interm.spirvReq));
        (yyval.interm.type).setSpirvType(*(yyvsp[-1].interm.spirvInst));
    }
#line 12333 "MachineIndependent/glslang_tab.cpp"
    break;

  case 691: /* spirv_type_parameter_list: spirv_type_parameter  */
#line 4451 "MachineIndependent/glslang.y"
                           {
        (yyval.interm.spirvTypeParams) = (yyvsp[0].interm.spirvTypeParams);
    }
#line 12341 "MachineIndependent/glslang_tab.cpp"
    break;

  case 692: /* spirv_type_parameter_list: spirv_type_parameter_list COMMA spirv_type_parameter  */
#line 4454 "MachineIndependent/glslang.y"
                                                           {
        (yyval.interm.spirvTypeParams) = parseContext.mergeSpirvTypeParameters((yyvsp[-2].interm.spirvTypeParams), (yyvsp[0].interm.spirvTypeParams));
    }
#line 12349 "MachineIndependent/glslang_tab.cpp"
    break;

  case 693: /* spirv_type_parameter: constant_expression  */
#line 4459 "MachineIndependent/glslang.y"
                          {
        (yyval.interm.spirvTypeParams) = parseContext.makeSpirvTypeParameters((yyvsp[0].interm.intermTypedNode)->getLoc(), (yyvsp[0].interm.intermTypedNode)->getAsConstantUnion());
    }
#line 12357 "MachineIndependent/glslang_tab.cpp"
    break;

  case 694: /* spirv_instruction_qualifier: SPIRV_INSTRUCTION LEFT_PAREN spirv_instruction_qualifier_list RIGHT_PAREN  */
#line 4464 "MachineIndependent/glslang.y"
                                                                                {
        (yyval.interm.spirvInst) = (yyvsp[-1].interm.spirvInst);
    }
#line 12365 "MachineIndependent/glslang_tab.cpp"
    break;

  case 695: /* spirv_instruction_qualifier: SPIRV_INSTRUCTION LEFT_PAREN spirv_requirements_list COMMA spirv_instruction_qualifier_list RIGHT_PAREN  */
#line 4467 "MachineIndependent/glslang.y"
                                                                                                              {
        parseContext.intermediate.insertSpirvRequirement((yyvsp[-3].interm.spirvReq));
        (yyval.interm.spirvInst) = (yyvsp[-1].interm.spirvInst);
    }
#line 12374 "MachineIndependent/glslang_tab.cpp"
    break;

  case 696: /* spirv_instruction_qualifier_list: spirv_instruction_qualifier_id  */
#line 4473 "MachineIndependent/glslang.y"
                                     {
        (yyval.interm.spirvInst) = (yyvsp[0].interm.spirvInst);
    }
#line 12382 "MachineIndependent/glslang_tab.cpp"
    break;

  case 697: /* spirv_instruction_qualifier_list: spirv_instruction_qualifier_list COMMA spirv_instruction_qualifier_id  */
#line 4476 "MachineIndependent/glslang.y"
                                                                            {
        (yyval.interm.spirvInst) = parseContext.mergeSpirvInstruction((yyvsp[-1].lex).loc, (yyvsp[-2].interm.spirvInst), (yyvsp[0].interm.spirvInst));
    }
#line 12390 "MachineIndependent/glslang_tab.cpp"
    break;

  case 698: /* spirv_instruction_qualifier_id: IDENTIFIER EQUAL STRING_LITERAL  */
#line 4481 "MachineIndependent/glslang.y"
                                      {
        (yyval.interm.spirvInst) = parseContext.makeSpirvInstruction((yyvsp[-1].lex).loc, *(yyvsp[-2].lex).string, *(yyvsp[0].lex).string);
    }
#line 12398 "MachineIndependent/glslang_tab.cpp"
    break;

  case 699: /* spirv_instruction_qualifier_id: IDENTIFIER EQUAL INTCONSTANT  */
#line 4484 "MachineIndependent/glslang.y"
                                   {
        (yyval.interm.spirvInst) = parseContext.makeSpirvInstruction((yyvsp[-1].lex).loc, *(yyvsp[-2].lex).string, (yyvsp[0].lex).i);
    }
#line 12406 "MachineIndependent/glslang_tab.cpp"
    break;


#line 12410 "MachineIndependent/glslang_tab.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (pParseContext, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, pParseContext);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, pParseContext);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (pParseContext, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, pParseContext);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, pParseContext);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 4489 "MachineIndependent/glslang.y"

