
// Generated from Solidity.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"




class  SolidityLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, T__45 = 46, T__46 = 47, T__47 = 48, T__48 = 49, T__49 = 50, 
    T__50 = 51, T__51 = 52, T__52 = 53, T__53 = 54, T__54 = 55, T__55 = 56, 
    T__56 = 57, T__57 = 58, T__58 = 59, T__59 = 60, T__60 = 61, T__61 = 62, 
    T__62 = 63, T__63 = 64, T__64 = 65, T__65 = 66, T__66 = 67, T__67 = 68, 
    T__68 = 69, T__69 = 70, T__70 = 71, T__71 = 72, T__72 = 73, T__73 = 74, 
    T__74 = 75, T__75 = 76, T__76 = 77, T__77 = 78, T__78 = 79, T__79 = 80, 
    T__80 = 81, T__81 = 82, T__82 = 83, T__83 = 84, T__84 = 85, T__85 = 86, 
    T__86 = 87, T__87 = 88, T__88 = 89, T__89 = 90, T__90 = 91, T__91 = 92, 
    NatSpecSingleLine = 93, NatSpecMultiLine = 94, Int = 95, Uint = 96, 
    Byte = 97, Fixed = 98, Ufixed = 99, VersionLiteral = 100, BooleanLiteral = 101, 
    DecimalNumber = 102, HexNumber = 103, RegularExpressionLiteral = 104, 
    NumberUnit = 105, HexLiteral = 106, ReservedKeyword = 107, AnonymousKeyword = 108, 
    BreakKeyword = 109, ConstantKeyword = 110, ContinueKeyword = 111, ExternalKeyword = 112, 
    IndexedKeyword = 113, InternalKeyword = 114, PayableKeyword = 115, PrivateKeyword = 116, 
    PublicKeyword = 117, PureKeyword = 118, TypeKeyword = 119, ViewKeyword = 120, 
    Identifier = 121, StringLiteral = 122, WS = 123, COMMENT = 124, LINE_COMMENT = 125
  };

  SolidityLexer(antlr4::CharStream *input);
  ~SolidityLexer();


                   
      // A flag indicating if the lexer should operate in strict mode.
      // When set to true, FutureReservedWords are tokenized, when false,
      // an octal literal can be tokenized.
      private bool strictMode = true;

      // The most recently produced token.
      private IToken lastToken = null;

      ///<summary>Returns <c>true</c> iff the lexer operates in strict mode</summary>
      /// <returns><c>true</c> iff the lexer operates in strict mode.</returns>
      public bool GetStrictMode() {
          return this.strictMode;
      }

  	///<summary>Sets whether the lexer operates in strict mode or not.</summary>
  	///<param name="strictMode">the flag indicating the lexer operates in strict mode or not.</param>
      public void SetStrictMode(bool strictMode) {
          this.strictMode = strictMode;
      }

      ///<summary>Return the next token from the character stream and records this last
      ///token in case it resides on the default channel. This recorded token
      ///is used to determine when the lexer could possibly match a regex
      ///literal.</summary>
      ///<returns>the next token from the character stream.</returns>
      public override IToken NextToken() {
          
          // Get the next token.
          IToken next = base.NextToken();
          
          if (next.Channel == Lexer.DefaultTokenChannel) {
              // Keep track of the last token on the default channel.                                              
              this.lastToken = next;
          }
          
          return next;
      }

      ///<summary>Returns <c>true</c> iff the lexer can match a regex literal.</summary>
      ///<returns><c>true</c> iff the lexer can match a regex literal.</returns>
      private bool isRegexPossible() {
                                         
          if (this.lastToken == null) {
              // No token has been produced yet: at the start of the input,
              // no division is possible, so a regex literal _is_ possible.
              return true;
          }
          
          switch (this.lastToken.Type) {
  //              case assemblyLiteral:
                case numberLiteral:
                case BooleanLiteral:
  							case identifier:
  							case StringLiteral:
                case returnstatement:
                case DecimalNumber:
                case HexNumber:
                  // After any of the tokens above, no regex literal can follow.
                  return false;
              default:
                  // In all other cases, a regex literal _is_ possible.
                  return true;
          }
      }

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.
  bool RegularExpressionLiteralSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

