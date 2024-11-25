
// Generated from Basic.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  BasicLexer : public antlr4::Lexer {
public:
  enum {
    DOLLAR = 1, PERCENT = 2, RETURN = 3, PRINT = 4, GOTO = 5, GOSUB = 6, 
    IF = 7, NEXT = 8, THEN = 9, REM = 10, CHR = 11, MID = 12, LEFT = 13, 
    RIGHT = 14, STR = 15, LPAREN = 16, RPAREN = 17, PLUS = 18, MINUS = 19, 
    TIMES = 20, DIV = 21, CLEAR = 22, GTE = 23, LTE = 24, GT = 25, LT = 26, 
    COMMA = 27, LIST = 28, RUN = 29, END = 30, LET = 31, EQ = 32, FOR = 33, 
    TO = 34, STEP = 35, INPUT = 36, SEMICOLON = 37, DIM = 38, SQR = 39, 
    COLON = 40, TEXT = 41, HGR = 42, HGR2 = 43, LEN = 44, CALL = 45, ASC = 46, 
    HPLOT = 47, VPLOT = 48, PRNUMBER = 49, INNUMBER = 50, VTAB = 51, HTAB = 52, 
    HOME = 53, ON = 54, PDL = 55, PLOT = 56, PEEK = 57, POKE = 58, INTF = 59, 
    STOP = 60, HIMEM = 61, LOMEM = 62, FLASH = 63, INVERSE = 64, NORMAL = 65, 
    ONERR = 66, SPC = 67, FRE = 68, POS = 69, USR = 70, TRACE = 71, NOTRACE = 72, 
    AND = 73, OR = 74, DATA = 75, WAIT = 76, READ = 77, XDRAW = 78, DRAW = 79, 
    AT = 80, DEF = 81, FN = 82, VAL = 83, TAB = 84, SPEED = 85, ROT = 86, 
    SCALE = 87, COLOR = 88, HCOLOR = 89, HLIN = 90, VLIN = 91, SCRN = 92, 
    POP = 93, SHLOAD = 94, SIN = 95, COS = 96, TAN = 97, ATN = 98, RND = 99, 
    SGN = 100, EXP = 101, LOG = 102, ABS = 103, STORE = 104, RECALL = 105, 
    GET = 106, EXPONENT = 107, AMPERSAND = 108, GR = 109, NOT = 110, RESTORE = 111, 
    SAVE = 112, LOAD = 113, QUESTION = 114, INCLUDE = 115, CLS = 116, COMMENT = 117, 
    STRINGLITERAL = 118, LETTERS = 119, NUMBER = 120, FLOAT = 121, WS = 122
  };

  explicit BasicLexer(antlr4::CharStream *input);

  ~BasicLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

