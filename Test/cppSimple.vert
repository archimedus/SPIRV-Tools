#version 400

#define ON

float sum = 0.0;

void main()
{

#ifdef ON
//yes
sum += 1.0;
#endif

#ifdef OFF
//no
sum += 20.0;
#endif

#if defined(ON)
//yes
sum += 300.0;
#endif

#if defined(OFF)
//no
sum += 4000.0;
#endif

#if !defined(ON)
//no
sum += 50000.0;
#endif

#ifndef OFF
//yes
sum += 600000.0;
#else
//no
sum += 0.6;
#endif

#if defined(ON) && defined(OFF)
//no
sum += 0.7;
#elif !defined(OFF)
//yes
sum += 7000000.0;
#endif

#if defined(ON) && !defined(OFF)
//yes
sum += 80000000.0;
#endif

#if defined(OFF) || defined(ON)
//yes
sum += 900000000.0;
#endif

#if NEVER_DEFINED
//no
sum += 0.04;
#else
sum += 0.05;
#endif

// sum should be 987600301.7
    gl_Position = vec4(sum);
}

#define A 0
# define B 0
 #   define C 0

#if (A == B) || (A == C)
#error good1
#endif

#if A == B || (A == C)
#error good2
#endif

#if (A == B || (A == C))
#error good3
#endif

#if (AA == BB) || (AA == CC)
#error good4
#endif

#if AA == BB || (AA == CC)
#error good5
#endif

#if ((AA == BB || (AA == CC)))
#error good6
#endif

#if (A == B || (A == C)
#error bad1
#endif

#if A == B || A == C)
#error bad2
#endif

#if (A == B || (A == C)
#error bad3
#endif

#if AA == BB) || (AA == CC)
#error bad4
#endif

#if AA == BB || (AA == CC
#error bad5
#endif

#if ((AA == BB || (AA == CC))))
#error bad6
#endif extra tokens

int linenumber = __LINE__;
int filenumber = __FILE__;
int version = __VERSION__;

#define PI (3.14)
#define TWOPI (2.0 * PI)
float twoPi = TWOPI;

//#define PASTE(a,b) a ## b
//float PASTE(tod, ay) = 17;

"boo" // ERROR
int a = length("aoenatuh");  // ERROR

'int';  // ERROR

// ERROR: all the following are reserved
#define GL_
#define GL_Macro 1
#define __M 
#define M__
#define ABC__DE abc

#if 4
#else extra
#elif
// ERROR elif after else
#endif

#if blah
  #if 0
  #else extra
    #ifdef M
    #else
    #else
    // ERROR else after else
    #endif  extra
  #endif
#endif

#define m1(a,a)  // ERROR
#define m2(a,b)

// okay
#define m3 (a)
#define m3 (a)

// ERROR
#define m4(b)
#define m4 (b)

// ERROR
#define m5 (b)
#define m5(b)

// ERROR
#define m6(a)
#define m6

// ERROR (whitespace)
#define m7 (a)
#define m7 ( a)

#define m80(a,b) is + exactly m3 the same
#define m80(a,b) is + exactly m3 the same

// ERROR
#define m8(a,b) almost + exactly m3 the same
#define m8(a,b) almost + exactly m3 thee same

// ERROR
#define m9(a,b,c) aoe
#define m9(a,d,c) aoe

#define n1 0xf
int n = n1;

#define f1 .08e-2Lf
double f = f1;

#undef __VERSION__
#undef GL_ARB_texture_rectangle

#
 # 
		#	
##
# # 
# 0x25
####
####ff
#########ff fg 0x25
#pragma
#pragma(aoent)
	#	pragma
#pragma STDGL
#pragma	 optimize(	on)
#pragma  optimize(off)
#pragma debug( on)
#pragma debug(off	)
#pragma	 optimize(	on) anoteun
#pragma  optimize(off
#pragma debug( on) (
#pragma debug(off	aoeua)
#pragma	 optimize(	on)
#pragma  optimize(off,)
#pragma debug( on, aoeu)
#pragma debugoff	)
#pragma aontheu natoeh uantheo uasotea noeahuonea uonethau onethuanoeth aunotehau noeth anthoeua  anoethuantoeh uantoehu natoehu naoteh unotaehu noethua onetuh aou
# \

# \
 error good continuation

#flizbit

#define directive error

#directive directive was expanded

#line 12000
#error line should be 12001
#line 13000 7
#error line should be 13001, string 7
#define L1 14000
#define L2 13
#define F1 5
#define F2 7
#line L1 + L2
#error line should be 14014, string 7
#line L1 + L2 F1 + F2
#error line should be 14014, string 12
#line L1 + L2 + F1 + F2
#error line should be 14026, string 12
#line 1234 F1 + F2 extra
#line (20000)
#error line should be 20001
#line (20000+10)
#error line should be 20011
#line +20020
#error line should be 20021

#line 10000
#if 1
#else
// ERROR, missing #endif