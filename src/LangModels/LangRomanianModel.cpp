/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1/GPL 2.0/LGPL 2.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is Mozilla Communicator client code.
 *
 * The Initial Developer of the Original Code is
 * Netscape Communications Corporation.
 * Portions created by the Initial Developer are Copyright (C) 1998
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPL"), or
 * the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
 * in which case the provisions of the GPL or the LGPL are applicable instead
 * of those above. If you wish to allow use of your version of this file only
 * under the terms of either the GPL or the LGPL, and not to allow others to
 * use your version of this file under the terms of the MPL, indicate your
 * decision by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL or the LGPL. If you do not delete
 * the provisions above, a recipient may use your version of this file under
 * the terms of any one of the MPL, the GPL or the LGPL.
 *
 * ***** END LICENSE BLOCK ***** */

#include "../nsSBCharSetProber.h"

/********* Language model for: Romanian *********/

/**
 * Generated by BuildLangModel.py
 * On: 2017-03-27 19:47:09.251304
 **/

/* Character Mapping Table:
 * ILL: illegal character.
 * CTR: control character specific to the charset.
 * RET: carriage/return.
 * SYM: symbol (punctuation) that does not belong to word.
 * NUM: 0 - 9.
 *
 * Other characters are ordered by probabilities
 * (0 is the most common character in the language).
 *
 * Orders are generic to a language. So the codepoint with order X in
 * CHARSET1 maps to the same character as the codepoint with the same
 * order X in CHARSET2 for the same language.
 * As such, it is possible to get missing order. For instance the
 * ligature of 'o' and 'e' exists in ISO-8859-15 but not in ISO-8859-1
 * even though they are both used for French. Same for the euro sign.
 */
static const unsigned char Iso_8859_2_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  2, 17,  9, 11,  0, 16, 15, 23,  1, 26, 27,  6, 12,  4,  8, /* 4X */
   13, 32,  3, 10,  5,  7, 20, 29, 25, 28, 22,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  2, 17,  9, 11,  0, 16, 15, 23,  1, 26, 27,  6, 12,  4,  8, /* 6X */
   13, 32,  3, 10,  5,  7, 20, 29, 25, 28, 22,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM, 60,SYM, 46,SYM, 61, 54,SYM,SYM, 38, 62, 63, 64,SYM, 40, 65, /* AX */
  SYM, 66,SYM, 46,SYM, 67, 54,SYM,SYM, 38, 68, 69, 70,SYM, 40, 71, /* BX */
   72, 30, 24, 14, 33, 73, 35, 42, 41, 31, 74, 51, 53, 37, 21, 75, /* CX */
   44, 52, 76, 34, 77, 45, 36,SYM, 57, 78, 47, 50, 39, 55, 79, 56, /* DX */
   80, 30, 24, 14, 33, 81, 35, 42, 41, 31, 82, 51, 53, 37, 21, 83, /* EX */
   44, 52, 84, 34, 85, 45, 36,SYM, 57, 86, 47, 50, 39, 55, 87,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_16_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  2, 17,  9, 11,  0, 16, 15, 23,  1, 26, 27,  6, 12,  4,  8, /* 4X */
   13, 32,  3, 10,  5,  7, 20, 29, 25, 28, 22,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  2, 17,  9, 11,  0, 16, 15, 23,  1, 26, 27,  6, 12,  4,  8, /* 6X */
   13, 32,  3, 10,  5,  7, 20, 29, 25, 28, 22,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM, 88, 89, 46,SYM,SYM, 38,SYM, 38,SYM, 19,SYM, 90,SYM, 91, 92, /* AX */
  SYM,SYM, 41, 46, 40,SYM,SYM,SYM, 40, 41, 19,SYM, 93, 94, 95, 96, /* BX */
   97, 30, 24, 14, 33, 35, 49, 42, 43, 31, 59, 51, 98, 37, 21, 48, /* CX */
   44, 52, 58, 34, 99, 45, 36, 54, 50,100, 47,101, 39,102, 18, 56, /* DX */
  103, 30, 24, 14, 33, 35, 49, 42, 43, 31, 59, 51,104, 37, 21, 48, /* EX */
   44, 52, 58, 34,105, 45, 36, 54, 50,106, 47,107, 39,108, 18,109, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1250_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  2, 17,  9, 11,  0, 16, 15, 23,  1, 26, 27,  6, 12,  4,  8, /* 4X */
   13, 32,  3, 10,  5,  7, 20, 29, 25, 28, 22,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  2, 17,  9, 11,  0, 16, 15, 23,  1, 26, 27,  6, 12,  4,  8, /* 6X */
   13, 32,  3, 10,  5,  7, 20, 29, 25, 28, 22,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM,ILL,SYM,SYM,SYM,SYM,ILL,SYM, 38,SYM, 54,110, 40,111, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,SYM, 38,SYM, 54,112, 40,113, /* 9X */
  SYM,SYM,SYM, 46,SYM,114,SYM,SYM,SYM,SYM,115,SYM,SYM,SYM,SYM,116, /* AX */
  SYM,SYM,SYM, 46,SYM,SYM,SYM,SYM,SYM,117,118,SYM,119,SYM,120,121, /* BX */
  122, 30, 24, 14, 33,123, 35, 42, 41, 31,124, 51, 53, 37, 21,125, /* CX */
   44, 52,126, 34,127, 45, 36,SYM, 57,128, 47, 50, 39, 55,129, 56, /* DX */
  130, 30, 24, 14, 33,131, 35, 42, 41, 31,132, 51, 53, 37, 21,133, /* EX */
   44, 52,134, 34,135, 45, 36,SYM, 57,136, 47, 50, 39, 55,137,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Ibm852_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  2, 17,  9, 11,  0, 16, 15, 23,  1, 26, 27,  6, 12,  4,  8, /* 4X */
   13, 32,  3, 10,  5,  7, 20, 29, 25, 28, 22,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  2, 17,  9, 11,  0, 16, 15, 23,  1, 26, 27,  6, 12,  4,  8, /* 6X */
   13, 32,  3, 10,  5,  7, 20, 29, 25, 28, 22,SYM,SYM,SYM,SYM,CTR, /* 7X */
   42, 39, 31, 24, 33,138, 35, 42, 46, 51, 45, 45, 21,139, 33, 35, /* 8X */
   31,140,141,142, 36,143,144, 54, 54, 36, 39,145,146, 46,SYM, 41, /* 9X */
   30, 37, 34, 47,147,148, 40, 40,149,150,SYM,151, 41,152,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 30, 24, 53,153,SYM,SYM,SYM,SYM,154,155,SYM, /* BX */
  SYM,SYM,SYM,SYM,SYM,SYM, 14, 14,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* CX */
   44, 44,156, 51,157,158, 37, 21, 53,SYM,SYM,SYM,SYM,159,160,SYM, /* DX */
   34, 56,161, 52, 52,162, 38, 38,163, 47,164, 50, 55, 55,165,SYM, /* EX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, 50, 57, 57,SYM,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */


/* Model Table:
 * Total sequences: 984
 * First 512 sequences: 0.997691920850908
 * Next 512 sequences (512-1024): 0.0023080791490920297
 * Rest: 5.204170427930421e-18
 * Negative sequences: TODO
 */
static const PRUint8 RomanianLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,0,3,3,3,3,3,2,0,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,0,3,3,2,3,3,3,2,2,0,0,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,3,3,3,0,3,3,0,3,3,3,3,3,0,2,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,2,2,3,3,2,2,2,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,0,3,3,3,0,3,3,3,3,2,2,2,
  3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,0,2,3,2,3,3,3,0,2,2,3,3,2,3,0,
  3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,0,2,2,3,0,3,3,3,2,2,2,0,
  3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,3,3,3,2,2,0,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,3,3,3,0,3,3,0,3,2,3,3,3,2,0,2,
  3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,2,2,3,2,3,0,2,3,3,0,3,3,3,2,0,2,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,0,2,2,3,3,3,0,2,3,3,3,2,2,2,
  3,3,3,3,3,2,3,3,3,2,3,3,3,2,3,3,2,2,0,0,3,0,2,2,3,0,2,2,3,3,3,2,0,
  3,3,3,2,3,3,2,3,3,3,3,2,3,3,3,2,2,3,3,2,2,2,2,3,3,2,0,0,3,2,2,2,0,
  3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,0,0,2,3,0,0,2,2,3,3,0,2,2,3,0,2,2,0,
  2,3,2,3,3,3,3,3,0,3,3,3,3,3,0,3,0,3,3,3,3,0,3,0,0,0,2,2,0,0,0,0,0,
  3,3,3,3,3,2,3,3,3,0,2,3,3,2,3,3,2,3,0,0,3,2,2,3,3,0,2,0,3,2,2,2,0,
  3,3,3,3,0,3,3,3,3,2,2,2,3,2,3,2,3,0,0,0,0,0,0,2,3,0,0,0,2,0,2,2,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,2,3,3,2,2,0,2,2,3,0,2,2,3,2,2,2,0,
  3,3,3,0,0,0,0,3,2,2,2,0,0,0,3,0,0,0,0,0,2,2,0,0,2,0,0,2,0,0,0,0,0,
  3,3,3,0,3,3,3,3,3,3,0,2,2,0,3,0,0,0,0,0,2,0,0,0,2,0,0,2,0,0,0,0,0,
  3,3,3,3,3,2,3,3,3,2,2,3,2,0,3,2,2,2,0,0,0,0,0,0,3,0,2,2,2,0,2,0,0,
  0,3,0,2,3,0,3,0,0,0,0,0,3,0,0,2,0,0,2,3,0,0,2,2,0,0,0,2,0,0,0,0,0,
  3,3,3,2,2,2,2,3,3,0,2,3,2,2,3,3,0,3,0,0,3,0,3,2,3,0,0,2,2,0,2,2,0,
  3,3,3,3,3,3,3,3,3,2,3,2,2,2,3,0,2,3,0,0,2,0,2,0,2,0,2,2,3,2,2,2,0,
  0,3,0,3,3,3,3,3,0,2,2,2,3,0,0,0,0,0,2,3,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,2,0,3,0,3,3,3,2,0,0,3,3,0,3,0,0,0,3,0,0,2,2,3,0,0,3,0,0,0,0,
  3,3,3,2,2,2,3,3,3,0,2,2,2,0,2,0,0,2,0,0,2,0,0,0,2,0,0,2,0,0,2,0,0,
  3,3,3,3,2,3,3,3,3,2,3,2,3,2,2,2,2,2,2,2,2,2,0,3,0,0,0,2,3,2,2,2,0,
  3,2,3,3,3,2,3,2,3,3,3,3,2,2,0,2,0,2,0,0,2,0,2,2,0,0,2,2,0,2,2,0,0,
  3,3,3,2,3,2,3,2,3,2,3,2,2,2,0,0,2,2,0,0,0,0,0,3,0,0,0,0,2,3,0,0,0,
  2,3,0,3,3,2,2,0,0,2,2,2,2,0,0,2,0,0,0,0,0,0,2,0,0,0,0,2,0,0,0,0,0,
  0,3,2,2,2,2,2,0,0,2,2,2,2,2,0,2,0,2,0,0,2,0,2,0,0,0,2,2,0,0,0,0,0,
  0,0,2,0,0,2,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,
};


const SequenceModel Iso_8859_2RomanianModel =
{
  Iso_8859_2_CharToOrderMap,
  RomanianLangModel,
  33,
  (float)0.997691920850908,
  PR_TRUE,
  "ISO-8859-2"
};

const SequenceModel Iso_8859_16RomanianModel =
{
  Iso_8859_16_CharToOrderMap,
  RomanianLangModel,
  33,
  (float)0.997691920850908,
  PR_TRUE,
  "ISO-8859-16"
};

const SequenceModel Windows_1250RomanianModel =
{
  Windows_1250_CharToOrderMap,
  RomanianLangModel,
  33,
  (float)0.997691920850908,
  PR_TRUE,
  "WINDOWS-1250"
};

const SequenceModel Ibm852RomanianModel =
{
  Ibm852_CharToOrderMap,
  RomanianLangModel,
  33,
  (float)0.997691920850908,
  PR_TRUE,
  "IBM852"
};