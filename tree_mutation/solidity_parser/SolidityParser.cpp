
// Generated from Solidity.g4 by ANTLR 4.7.2


#include "SolidityVisitor.h"

#include "SolidityParser.h"


using namespace antlrcpp;
using namespace antlr4;

SolidityParser::SolidityParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SolidityParser::~SolidityParser() {
  delete _interpreter;
}

std::string SolidityParser::getGrammarFileName() const {
  return "Solidity.g4";
}

const std::vector<std::string>& SolidityParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SolidityParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- SourceUnitContext ------------------------------------------------------------------

SolidityParser::SourceUnitContext::SourceUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SolidityParser::SourceUnitContext::EOF() {
  return getToken(SolidityParser::EOF, 0);
}

std::vector<SolidityParser::PragmaDirectiveContext *> SolidityParser::SourceUnitContext::pragmaDirective() {
  return getRuleContexts<SolidityParser::PragmaDirectiveContext>();
}

SolidityParser::PragmaDirectiveContext* SolidityParser::SourceUnitContext::pragmaDirective(size_t i) {
  return getRuleContext<SolidityParser::PragmaDirectiveContext>(i);
}

std::vector<SolidityParser::ImportDirectiveContext *> SolidityParser::SourceUnitContext::importDirective() {
  return getRuleContexts<SolidityParser::ImportDirectiveContext>();
}

SolidityParser::ImportDirectiveContext* SolidityParser::SourceUnitContext::importDirective(size_t i) {
  return getRuleContext<SolidityParser::ImportDirectiveContext>(i);
}

std::vector<SolidityParser::ContractDefinitionContext *> SolidityParser::SourceUnitContext::contractDefinition() {
  return getRuleContexts<SolidityParser::ContractDefinitionContext>();
}

SolidityParser::ContractDefinitionContext* SolidityParser::SourceUnitContext::contractDefinition(size_t i) {
  return getRuleContext<SolidityParser::ContractDefinitionContext>(i);
}


size_t SolidityParser::SourceUnitContext::getRuleIndex() const {
  return SolidityParser::RuleSourceUnit;
}


antlrcpp::Any SolidityParser::SourceUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitSourceUnit(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::SourceUnitContext* SolidityParser::sourceUnit() {
  SourceUnitContext *_localctx = _tracker.createInstance<SourceUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, SolidityParser::RuleSourceUnit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SolidityParser::T__0)
      | (1ULL << SolidityParser::T__10)
      | (1ULL << SolidityParser::T__16)
      | (1ULL << SolidityParser::T__17)
      | (1ULL << SolidityParser::T__18))) != 0) || _la == SolidityParser::NatSpecSingleLine

    || _la == SolidityParser::NatSpecMultiLine) {
      setState(173);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SolidityParser::T__0: {
          setState(170);
          pragmaDirective();
          break;
        }

        case SolidityParser::T__10: {
          setState(171);
          importDirective();
          break;
        }

        case SolidityParser::T__16:
        case SolidityParser::T__17:
        case SolidityParser::T__18:
        case SolidityParser::NatSpecSingleLine:
        case SolidityParser::NatSpecMultiLine: {
          setState(172);
          contractDefinition();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(177);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(178);
    match(SolidityParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PragmaDirectiveContext ------------------------------------------------------------------

SolidityParser::PragmaDirectiveContext::PragmaDirectiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::PragmaNameContext* SolidityParser::PragmaDirectiveContext::pragmaName() {
  return getRuleContext<SolidityParser::PragmaNameContext>(0);
}

SolidityParser::PragmaValueContext* SolidityParser::PragmaDirectiveContext::pragmaValue() {
  return getRuleContext<SolidityParser::PragmaValueContext>(0);
}


size_t SolidityParser::PragmaDirectiveContext::getRuleIndex() const {
  return SolidityParser::RulePragmaDirective;
}


antlrcpp::Any SolidityParser::PragmaDirectiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitPragmaDirective(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::PragmaDirectiveContext* SolidityParser::pragmaDirective() {
  PragmaDirectiveContext *_localctx = _tracker.createInstance<PragmaDirectiveContext>(_ctx, getState());
  enterRule(_localctx, 2, SolidityParser::RulePragmaDirective);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    match(SolidityParser::T__0);
    setState(181);
    pragmaName();
    setState(182);
    pragmaValue();
    setState(183);
    match(SolidityParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PragmaNameContext ------------------------------------------------------------------

SolidityParser::PragmaNameContext::PragmaNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::IdentifierContext* SolidityParser::PragmaNameContext::identifier() {
  return getRuleContext<SolidityParser::IdentifierContext>(0);
}


size_t SolidityParser::PragmaNameContext::getRuleIndex() const {
  return SolidityParser::RulePragmaName;
}


antlrcpp::Any SolidityParser::PragmaNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitPragmaName(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::PragmaNameContext* SolidityParser::pragmaName() {
  PragmaNameContext *_localctx = _tracker.createInstance<PragmaNameContext>(_ctx, getState());
  enterRule(_localctx, 4, SolidityParser::RulePragmaName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PragmaValueContext ------------------------------------------------------------------

SolidityParser::PragmaValueContext::PragmaValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::VersionContext* SolidityParser::PragmaValueContext::version() {
  return getRuleContext<SolidityParser::VersionContext>(0);
}

SolidityParser::ExpressionContext* SolidityParser::PragmaValueContext::expression() {
  return getRuleContext<SolidityParser::ExpressionContext>(0);
}


size_t SolidityParser::PragmaValueContext::getRuleIndex() const {
  return SolidityParser::RulePragmaValue;
}


antlrcpp::Any SolidityParser::PragmaValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitPragmaValue(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::PragmaValueContext* SolidityParser::pragmaValue() {
  PragmaValueContext *_localctx = _tracker.createInstance<PragmaValueContext>(_ctx, getState());
  enterRule(_localctx, 6, SolidityParser::RulePragmaValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(189);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(187);
      version();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(188);
      expression(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VersionContext ------------------------------------------------------------------

SolidityParser::VersionContext::VersionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SolidityParser::VersionConstraintContext *> SolidityParser::VersionContext::versionConstraint() {
  return getRuleContexts<SolidityParser::VersionConstraintContext>();
}

SolidityParser::VersionConstraintContext* SolidityParser::VersionContext::versionConstraint(size_t i) {
  return getRuleContext<SolidityParser::VersionConstraintContext>(i);
}


size_t SolidityParser::VersionContext::getRuleIndex() const {
  return SolidityParser::RuleVersion;
}


antlrcpp::Any SolidityParser::VersionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitVersion(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::VersionContext* SolidityParser::version() {
  VersionContext *_localctx = _tracker.createInstance<VersionContext>(_ctx, getState());
  enterRule(_localctx, 8, SolidityParser::RuleVersion);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(191);
    versionConstraint();
    setState(193);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SolidityParser::T__2)
      | (1ULL << SolidityParser::T__3)
      | (1ULL << SolidityParser::T__4)
      | (1ULL << SolidityParser::T__5)
      | (1ULL << SolidityParser::T__6)
      | (1ULL << SolidityParser::T__7)
      | (1ULL << SolidityParser::T__8))) != 0) || _la == SolidityParser::VersionLiteral) {
      setState(192);
      versionConstraint();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VersionOperatorContext ------------------------------------------------------------------

SolidityParser::VersionOperatorContext::VersionOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SolidityParser::VersionOperatorContext::getRuleIndex() const {
  return SolidityParser::RuleVersionOperator;
}


antlrcpp::Any SolidityParser::VersionOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitVersionOperator(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::VersionOperatorContext* SolidityParser::versionOperator() {
  VersionOperatorContext *_localctx = _tracker.createInstance<VersionOperatorContext>(_ctx, getState());
  enterRule(_localctx, 10, SolidityParser::RuleVersionOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(195);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SolidityParser::T__2)
      | (1ULL << SolidityParser::T__3)
      | (1ULL << SolidityParser::T__4)
      | (1ULL << SolidityParser::T__5)
      | (1ULL << SolidityParser::T__6)
      | (1ULL << SolidityParser::T__7)
      | (1ULL << SolidityParser::T__8))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VersionConstraintContext ------------------------------------------------------------------

SolidityParser::VersionConstraintContext::VersionConstraintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SolidityParser::VersionConstraintContext::VersionLiteral() {
  return getToken(SolidityParser::VersionLiteral, 0);
}

SolidityParser::VersionOperatorContext* SolidityParser::VersionConstraintContext::versionOperator() {
  return getRuleContext<SolidityParser::VersionOperatorContext>(0);
}


size_t SolidityParser::VersionConstraintContext::getRuleIndex() const {
  return SolidityParser::RuleVersionConstraint;
}


antlrcpp::Any SolidityParser::VersionConstraintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitVersionConstraint(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::VersionConstraintContext* SolidityParser::versionConstraint() {
  VersionConstraintContext *_localctx = _tracker.createInstance<VersionConstraintContext>(_ctx, getState());
  enterRule(_localctx, 12, SolidityParser::RuleVersionConstraint);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(198);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SolidityParser::T__2)
      | (1ULL << SolidityParser::T__3)
      | (1ULL << SolidityParser::T__4)
      | (1ULL << SolidityParser::T__5)
      | (1ULL << SolidityParser::T__6)
      | (1ULL << SolidityParser::T__7)
      | (1ULL << SolidityParser::T__8))) != 0)) {
      setState(197);
      versionOperator();
    }
    setState(200);
    match(SolidityParser::VersionLiteral);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportDeclarationContext ------------------------------------------------------------------

SolidityParser::ImportDeclarationContext::ImportDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SolidityParser::IdentifierContext *> SolidityParser::ImportDeclarationContext::identifier() {
  return getRuleContexts<SolidityParser::IdentifierContext>();
}

SolidityParser::IdentifierContext* SolidityParser::ImportDeclarationContext::identifier(size_t i) {
  return getRuleContext<SolidityParser::IdentifierContext>(i);
}


size_t SolidityParser::ImportDeclarationContext::getRuleIndex() const {
  return SolidityParser::RuleImportDeclaration;
}


antlrcpp::Any SolidityParser::ImportDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitImportDeclaration(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::ImportDeclarationContext* SolidityParser::importDeclaration() {
  ImportDeclarationContext *_localctx = _tracker.createInstance<ImportDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 14, SolidityParser::RuleImportDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(202);
    identifier();
    setState(205);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__9) {
      setState(203);
      match(SolidityParser::T__9);
      setState(204);
      identifier();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportDirectiveContext ------------------------------------------------------------------

SolidityParser::ImportDirectiveContext::ImportDirectiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SolidityParser::ImportDirectiveContext::StringLiteral() {
  return getToken(SolidityParser::StringLiteral, 0);
}

std::vector<SolidityParser::IdentifierContext *> SolidityParser::ImportDirectiveContext::identifier() {
  return getRuleContexts<SolidityParser::IdentifierContext>();
}

SolidityParser::IdentifierContext* SolidityParser::ImportDirectiveContext::identifier(size_t i) {
  return getRuleContext<SolidityParser::IdentifierContext>(i);
}

std::vector<SolidityParser::ImportDeclarationContext *> SolidityParser::ImportDirectiveContext::importDeclaration() {
  return getRuleContexts<SolidityParser::ImportDeclarationContext>();
}

SolidityParser::ImportDeclarationContext* SolidityParser::ImportDirectiveContext::importDeclaration(size_t i) {
  return getRuleContext<SolidityParser::ImportDeclarationContext>(i);
}


size_t SolidityParser::ImportDirectiveContext::getRuleIndex() const {
  return SolidityParser::RuleImportDirective;
}


antlrcpp::Any SolidityParser::ImportDirectiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitImportDirective(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::ImportDirectiveContext* SolidityParser::importDirective() {
  ImportDirectiveContext *_localctx = _tracker.createInstance<ImportDirectiveContext>(_ctx, getState());
  enterRule(_localctx, 16, SolidityParser::RuleImportDirective);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(241);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(207);
      match(SolidityParser::T__10);
      setState(208);
      match(SolidityParser::StringLiteral);
      setState(211);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SolidityParser::T__9) {
        setState(209);
        match(SolidityParser::T__9);
        setState(210);
        identifier();
      }
      setState(213);
      match(SolidityParser::T__1);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(214);
      match(SolidityParser::T__10);
      setState(217);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SolidityParser::T__11: {
          setState(215);
          match(SolidityParser::T__11);
          break;
        }

        case SolidityParser::T__12:
        case SolidityParser::T__39:
        case SolidityParser::Identifier: {
          setState(216);
          identifier();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(221);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SolidityParser::T__9) {
        setState(219);
        match(SolidityParser::T__9);
        setState(220);
        identifier();
      }
      setState(223);
      match(SolidityParser::T__12);
      setState(224);
      match(SolidityParser::StringLiteral);
      setState(225);
      match(SolidityParser::T__1);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(226);
      match(SolidityParser::T__10);
      setState(227);
      match(SolidityParser::T__13);
      setState(228);
      importDeclaration();
      setState(233);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SolidityParser::T__14) {
        setState(229);
        match(SolidityParser::T__14);
        setState(230);
        importDeclaration();
        setState(235);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(236);
      match(SolidityParser::T__15);
      setState(237);
      match(SolidityParser::T__12);
      setState(238);
      match(SolidityParser::StringLiteral);
      setState(239);
      match(SolidityParser::T__1);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NatSpecContext ------------------------------------------------------------------

SolidityParser::NatSpecContext::NatSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SolidityParser::NatSpecContext::NatSpecSingleLine() {
  return getToken(SolidityParser::NatSpecSingleLine, 0);
}

tree::TerminalNode* SolidityParser::NatSpecContext::NatSpecMultiLine() {
  return getToken(SolidityParser::NatSpecMultiLine, 0);
}


size_t SolidityParser::NatSpecContext::getRuleIndex() const {
  return SolidityParser::RuleNatSpec;
}


antlrcpp::Any SolidityParser::NatSpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitNatSpec(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::NatSpecContext* SolidityParser::natSpec() {
  NatSpecContext *_localctx = _tracker.createInstance<NatSpecContext>(_ctx, getState());
  enterRule(_localctx, 18, SolidityParser::RuleNatSpec);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(243);
    _la = _input->LA(1);
    if (!(_la == SolidityParser::NatSpecSingleLine

    || _la == SolidityParser::NatSpecMultiLine)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContractDefinitionContext ------------------------------------------------------------------

SolidityParser::ContractDefinitionContext::ContractDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::IdentifierContext* SolidityParser::ContractDefinitionContext::identifier() {
  return getRuleContext<SolidityParser::IdentifierContext>(0);
}

SolidityParser::NatSpecContext* SolidityParser::ContractDefinitionContext::natSpec() {
  return getRuleContext<SolidityParser::NatSpecContext>(0);
}

std::vector<SolidityParser::InheritanceSpecifierContext *> SolidityParser::ContractDefinitionContext::inheritanceSpecifier() {
  return getRuleContexts<SolidityParser::InheritanceSpecifierContext>();
}

SolidityParser::InheritanceSpecifierContext* SolidityParser::ContractDefinitionContext::inheritanceSpecifier(size_t i) {
  return getRuleContext<SolidityParser::InheritanceSpecifierContext>(i);
}

std::vector<SolidityParser::ContractPartContext *> SolidityParser::ContractDefinitionContext::contractPart() {
  return getRuleContexts<SolidityParser::ContractPartContext>();
}

SolidityParser::ContractPartContext* SolidityParser::ContractDefinitionContext::contractPart(size_t i) {
  return getRuleContext<SolidityParser::ContractPartContext>(i);
}


size_t SolidityParser::ContractDefinitionContext::getRuleIndex() const {
  return SolidityParser::RuleContractDefinition;
}


antlrcpp::Any SolidityParser::ContractDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitContractDefinition(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::ContractDefinitionContext* SolidityParser::contractDefinition() {
  ContractDefinitionContext *_localctx = _tracker.createInstance<ContractDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 20, SolidityParser::RuleContractDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(246);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::NatSpecSingleLine

    || _la == SolidityParser::NatSpecMultiLine) {
      setState(245);
      natSpec();
    }
    setState(248);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SolidityParser::T__16)
      | (1ULL << SolidityParser::T__17)
      | (1ULL << SolidityParser::T__18))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(249);
    identifier();
    setState(259);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__19) {
      setState(250);
      match(SolidityParser::T__19);
      setState(251);
      inheritanceSpecifier();
      setState(256);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SolidityParser::T__14) {
        setState(252);
        match(SolidityParser::T__14);
        setState(253);
        inheritanceSpecifier();
        setState(258);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(261);
    match(SolidityParser::T__13);
    setState(265);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SolidityParser::T__12)
      | (1ULL << SolidityParser::T__22)
      | (1ULL << SolidityParser::T__24)
      | (1ULL << SolidityParser::T__25)
      | (1ULL << SolidityParser::T__26)
      | (1ULL << SolidityParser::T__27)
      | (1ULL << SolidityParser::T__29)
      | (1ULL << SolidityParser::T__30)
      | (1ULL << SolidityParser::T__33)
      | (1ULL << SolidityParser::T__35)
      | (1ULL << SolidityParser::T__39)
      | (1ULL << SolidityParser::T__48)
      | (1ULL << SolidityParser::T__49)
      | (1ULL << SolidityParser::T__50)
      | (1ULL << SolidityParser::T__51))) != 0) || ((((_la - 91) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 91)) & ((1ULL << (SolidityParser::NatSpecSingleLine - 91))
      | (1ULL << (SolidityParser::NatSpecMultiLine - 91))
      | (1ULL << (SolidityParser::Int - 91))
      | (1ULL << (SolidityParser::Uint - 91))
      | (1ULL << (SolidityParser::Byte - 91))
      | (1ULL << (SolidityParser::Fixed - 91))
      | (1ULL << (SolidityParser::Ufixed - 91))
      | (1ULL << (SolidityParser::Identifier - 91)))) != 0)) {
      setState(262);
      contractPart();
      setState(267);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(268);
    match(SolidityParser::T__15);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InheritanceSpecifierContext ------------------------------------------------------------------

SolidityParser::InheritanceSpecifierContext::InheritanceSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::UserDefinedTypeNameContext* SolidityParser::InheritanceSpecifierContext::userDefinedTypeName() {
  return getRuleContext<SolidityParser::UserDefinedTypeNameContext>(0);
}

SolidityParser::ExpressionListContext* SolidityParser::InheritanceSpecifierContext::expressionList() {
  return getRuleContext<SolidityParser::ExpressionListContext>(0);
}


size_t SolidityParser::InheritanceSpecifierContext::getRuleIndex() const {
  return SolidityParser::RuleInheritanceSpecifier;
}


antlrcpp::Any SolidityParser::InheritanceSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitInheritanceSpecifier(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::InheritanceSpecifierContext* SolidityParser::inheritanceSpecifier() {
  InheritanceSpecifierContext *_localctx = _tracker.createInstance<InheritanceSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 22, SolidityParser::RuleInheritanceSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(270);
    userDefinedTypeName();
    setState(276);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__20) {
      setState(271);
      match(SolidityParser::T__20);
      setState(273);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SolidityParser::T__3)
        | (1ULL << SolidityParser::T__12)
        | (1ULL << SolidityParser::T__20)
        | (1ULL << SolidityParser::T__31)
        | (1ULL << SolidityParser::T__33)
        | (1ULL << SolidityParser::T__39)
        | (1ULL << SolidityParser::T__48)
        | (1ULL << SolidityParser::T__49)
        | (1ULL << SolidityParser::T__50)
        | (1ULL << SolidityParser::T__51)
        | (1ULL << SolidityParser::T__52)
        | (1ULL << SolidityParser::T__53)
        | (1ULL << SolidityParser::T__54)
        | (1ULL << SolidityParser::T__55)
        | (1ULL << SolidityParser::T__56)
        | (1ULL << SolidityParser::T__57)
        | (1ULL << SolidityParser::T__58)
        | (1ULL << SolidityParser::T__59))) != 0) || ((((_la - 93) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 93)) & ((1ULL << (SolidityParser::Int - 93))
        | (1ULL << (SolidityParser::Uint - 93))
        | (1ULL << (SolidityParser::Byte - 93))
        | (1ULL << (SolidityParser::Fixed - 93))
        | (1ULL << (SolidityParser::Ufixed - 93))
        | (1ULL << (SolidityParser::BooleanLiteral - 93))
        | (1ULL << (SolidityParser::DecimalNumber - 93))
        | (1ULL << (SolidityParser::HexNumber - 93))
        | (1ULL << (SolidityParser::HexLiteral - 93))
        | (1ULL << (SolidityParser::TypeKeyword - 93))
        | (1ULL << (SolidityParser::Identifier - 93))
        | (1ULL << (SolidityParser::StringLiteral - 93)))) != 0)) {
        setState(272);
        expressionList();
      }
      setState(275);
      match(SolidityParser::T__21);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContractPartContext ------------------------------------------------------------------

SolidityParser::ContractPartContext::ContractPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::StateVariableDeclarationContext* SolidityParser::ContractPartContext::stateVariableDeclaration() {
  return getRuleContext<SolidityParser::StateVariableDeclarationContext>(0);
}

SolidityParser::UsingForDeclarationContext* SolidityParser::ContractPartContext::usingForDeclaration() {
  return getRuleContext<SolidityParser::UsingForDeclarationContext>(0);
}

SolidityParser::StructDefinitionContext* SolidityParser::ContractPartContext::structDefinition() {
  return getRuleContext<SolidityParser::StructDefinitionContext>(0);
}

SolidityParser::ConstructorDefinitionContext* SolidityParser::ContractPartContext::constructorDefinition() {
  return getRuleContext<SolidityParser::ConstructorDefinitionContext>(0);
}

SolidityParser::ModifierDefinitionContext* SolidityParser::ContractPartContext::modifierDefinition() {
  return getRuleContext<SolidityParser::ModifierDefinitionContext>(0);
}

SolidityParser::FunctionDefinitionContext* SolidityParser::ContractPartContext::functionDefinition() {
  return getRuleContext<SolidityParser::FunctionDefinitionContext>(0);
}

SolidityParser::EventDefinitionContext* SolidityParser::ContractPartContext::eventDefinition() {
  return getRuleContext<SolidityParser::EventDefinitionContext>(0);
}

SolidityParser::EnumDefinitionContext* SolidityParser::ContractPartContext::enumDefinition() {
  return getRuleContext<SolidityParser::EnumDefinitionContext>(0);
}


size_t SolidityParser::ContractPartContext::getRuleIndex() const {
  return SolidityParser::RuleContractPart;
}


antlrcpp::Any SolidityParser::ContractPartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitContractPart(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::ContractPartContext* SolidityParser::contractPart() {
  ContractPartContext *_localctx = _tracker.createInstance<ContractPartContext>(_ctx, getState());
  enterRule(_localctx, 24, SolidityParser::RuleContractPart);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(286);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(278);
      stateVariableDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(279);
      usingForDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(280);
      structDefinition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(281);
      constructorDefinition();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(282);
      modifierDefinition();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(283);
      functionDefinition();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(284);
      eventDefinition();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(285);
      enumDefinition();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StateVariableDeclarationContext ------------------------------------------------------------------

SolidityParser::StateVariableDeclarationContext::StateVariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::TypeNameContext* SolidityParser::StateVariableDeclarationContext::typeName() {
  return getRuleContext<SolidityParser::TypeNameContext>(0);
}

SolidityParser::IdentifierContext* SolidityParser::StateVariableDeclarationContext::identifier() {
  return getRuleContext<SolidityParser::IdentifierContext>(0);
}

SolidityParser::ExpressionContext* SolidityParser::StateVariableDeclarationContext::expression() {
  return getRuleContext<SolidityParser::ExpressionContext>(0);
}

std::vector<tree::TerminalNode *> SolidityParser::StateVariableDeclarationContext::PublicKeyword() {
  return getTokens(SolidityParser::PublicKeyword);
}

tree::TerminalNode* SolidityParser::StateVariableDeclarationContext::PublicKeyword(size_t i) {
  return getToken(SolidityParser::PublicKeyword, i);
}

std::vector<tree::TerminalNode *> SolidityParser::StateVariableDeclarationContext::InternalKeyword() {
  return getTokens(SolidityParser::InternalKeyword);
}

tree::TerminalNode* SolidityParser::StateVariableDeclarationContext::InternalKeyword(size_t i) {
  return getToken(SolidityParser::InternalKeyword, i);
}

std::vector<tree::TerminalNode *> SolidityParser::StateVariableDeclarationContext::PrivateKeyword() {
  return getTokens(SolidityParser::PrivateKeyword);
}

tree::TerminalNode* SolidityParser::StateVariableDeclarationContext::PrivateKeyword(size_t i) {
  return getToken(SolidityParser::PrivateKeyword, i);
}

std::vector<tree::TerminalNode *> SolidityParser::StateVariableDeclarationContext::ConstantKeyword() {
  return getTokens(SolidityParser::ConstantKeyword);
}

tree::TerminalNode* SolidityParser::StateVariableDeclarationContext::ConstantKeyword(size_t i) {
  return getToken(SolidityParser::ConstantKeyword, i);
}


size_t SolidityParser::StateVariableDeclarationContext::getRuleIndex() const {
  return SolidityParser::RuleStateVariableDeclaration;
}


antlrcpp::Any SolidityParser::StateVariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitStateVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::StateVariableDeclarationContext* SolidityParser::stateVariableDeclaration() {
  StateVariableDeclarationContext *_localctx = _tracker.createInstance<StateVariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 26, SolidityParser::RuleStateVariableDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(288);
    typeName(0);
    setState(292);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 107) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 107)) & ((1ULL << (SolidityParser::ConstantKeyword - 107))
      | (1ULL << (SolidityParser::InternalKeyword - 107))
      | (1ULL << (SolidityParser::PrivateKeyword - 107))
      | (1ULL << (SolidityParser::PublicKeyword - 107)))) != 0)) {
      setState(289);
      _la = _input->LA(1);
      if (!(((((_la - 107) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 107)) & ((1ULL << (SolidityParser::ConstantKeyword - 107))
        | (1ULL << (SolidityParser::InternalKeyword - 107))
        | (1ULL << (SolidityParser::PrivateKeyword - 107))
        | (1ULL << (SolidityParser::PublicKeyword - 107)))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(294);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(295);
    identifier();
    setState(298);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__8) {
      setState(296);
      match(SolidityParser::T__8);
      setState(297);
      expression(0);
    }
    setState(300);
    match(SolidityParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UsingForDeclarationContext ------------------------------------------------------------------

SolidityParser::UsingForDeclarationContext::UsingForDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::IdentifierContext* SolidityParser::UsingForDeclarationContext::identifier() {
  return getRuleContext<SolidityParser::IdentifierContext>(0);
}

SolidityParser::TypeNameContext* SolidityParser::UsingForDeclarationContext::typeName() {
  return getRuleContext<SolidityParser::TypeNameContext>(0);
}


size_t SolidityParser::UsingForDeclarationContext::getRuleIndex() const {
  return SolidityParser::RuleUsingForDeclaration;
}


antlrcpp::Any SolidityParser::UsingForDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitUsingForDeclaration(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::UsingForDeclarationContext* SolidityParser::usingForDeclaration() {
  UsingForDeclarationContext *_localctx = _tracker.createInstance<UsingForDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 28, SolidityParser::RuleUsingForDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(302);
    match(SolidityParser::T__22);
    setState(303);
    identifier();
    setState(304);
    match(SolidityParser::T__23);
    setState(307);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SolidityParser::T__11: {
        setState(305);
        match(SolidityParser::T__11);
        break;
      }

      case SolidityParser::T__12:
      case SolidityParser::T__27:
      case SolidityParser::T__33:
      case SolidityParser::T__35:
      case SolidityParser::T__39:
      case SolidityParser::T__48:
      case SolidityParser::T__49:
      case SolidityParser::T__50:
      case SolidityParser::T__51:
      case SolidityParser::Int:
      case SolidityParser::Uint:
      case SolidityParser::Byte:
      case SolidityParser::Fixed:
      case SolidityParser::Ufixed:
      case SolidityParser::Identifier: {
        setState(306);
        typeName(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(309);
    match(SolidityParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDefinitionContext ------------------------------------------------------------------

SolidityParser::StructDefinitionContext::StructDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::IdentifierContext* SolidityParser::StructDefinitionContext::identifier() {
  return getRuleContext<SolidityParser::IdentifierContext>(0);
}

std::vector<SolidityParser::VariableDeclarationContext *> SolidityParser::StructDefinitionContext::variableDeclaration() {
  return getRuleContexts<SolidityParser::VariableDeclarationContext>();
}

SolidityParser::VariableDeclarationContext* SolidityParser::StructDefinitionContext::variableDeclaration(size_t i) {
  return getRuleContext<SolidityParser::VariableDeclarationContext>(i);
}


size_t SolidityParser::StructDefinitionContext::getRuleIndex() const {
  return SolidityParser::RuleStructDefinition;
}


antlrcpp::Any SolidityParser::StructDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitStructDefinition(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::StructDefinitionContext* SolidityParser::structDefinition() {
  StructDefinitionContext *_localctx = _tracker.createInstance<StructDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 30, SolidityParser::RuleStructDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(311);
    match(SolidityParser::T__24);
    setState(312);
    identifier();
    setState(313);
    match(SolidityParser::T__13);
    setState(324);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SolidityParser::T__12)
      | (1ULL << SolidityParser::T__27)
      | (1ULL << SolidityParser::T__33)
      | (1ULL << SolidityParser::T__35)
      | (1ULL << SolidityParser::T__39)
      | (1ULL << SolidityParser::T__48)
      | (1ULL << SolidityParser::T__49)
      | (1ULL << SolidityParser::T__50)
      | (1ULL << SolidityParser::T__51))) != 0) || ((((_la - 93) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 93)) & ((1ULL << (SolidityParser::Int - 93))
      | (1ULL << (SolidityParser::Uint - 93))
      | (1ULL << (SolidityParser::Byte - 93))
      | (1ULL << (SolidityParser::Fixed - 93))
      | (1ULL << (SolidityParser::Ufixed - 93))
      | (1ULL << (SolidityParser::Identifier - 93)))) != 0)) {
      setState(314);
      variableDeclaration();
      setState(315);
      match(SolidityParser::T__1);
      setState(321);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SolidityParser::T__12)
        | (1ULL << SolidityParser::T__27)
        | (1ULL << SolidityParser::T__33)
        | (1ULL << SolidityParser::T__35)
        | (1ULL << SolidityParser::T__39)
        | (1ULL << SolidityParser::T__48)
        | (1ULL << SolidityParser::T__49)
        | (1ULL << SolidityParser::T__50)
        | (1ULL << SolidityParser::T__51))) != 0) || ((((_la - 93) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 93)) & ((1ULL << (SolidityParser::Int - 93))
        | (1ULL << (SolidityParser::Uint - 93))
        | (1ULL << (SolidityParser::Byte - 93))
        | (1ULL << (SolidityParser::Fixed - 93))
        | (1ULL << (SolidityParser::Ufixed - 93))
        | (1ULL << (SolidityParser::Identifier - 93)))) != 0)) {
        setState(316);
        variableDeclaration();
        setState(317);
        match(SolidityParser::T__1);
        setState(323);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(326);
    match(SolidityParser::T__15);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructorDefinitionContext ------------------------------------------------------------------

SolidityParser::ConstructorDefinitionContext::ConstructorDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::ParameterListContext* SolidityParser::ConstructorDefinitionContext::parameterList() {
  return getRuleContext<SolidityParser::ParameterListContext>(0);
}

SolidityParser::ModifierListContext* SolidityParser::ConstructorDefinitionContext::modifierList() {
  return getRuleContext<SolidityParser::ModifierListContext>(0);
}

SolidityParser::BlockContext* SolidityParser::ConstructorDefinitionContext::block() {
  return getRuleContext<SolidityParser::BlockContext>(0);
}


size_t SolidityParser::ConstructorDefinitionContext::getRuleIndex() const {
  return SolidityParser::RuleConstructorDefinition;
}


antlrcpp::Any SolidityParser::ConstructorDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitConstructorDefinition(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::ConstructorDefinitionContext* SolidityParser::constructorDefinition() {
  ConstructorDefinitionContext *_localctx = _tracker.createInstance<ConstructorDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 32, SolidityParser::RuleConstructorDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(328);
    match(SolidityParser::T__25);
    setState(329);
    parameterList();
    setState(330);
    modifierList();
    setState(331);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModifierDefinitionContext ------------------------------------------------------------------

SolidityParser::ModifierDefinitionContext::ModifierDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::IdentifierContext* SolidityParser::ModifierDefinitionContext::identifier() {
  return getRuleContext<SolidityParser::IdentifierContext>(0);
}

SolidityParser::BlockContext* SolidityParser::ModifierDefinitionContext::block() {
  return getRuleContext<SolidityParser::BlockContext>(0);
}

SolidityParser::ParameterListContext* SolidityParser::ModifierDefinitionContext::parameterList() {
  return getRuleContext<SolidityParser::ParameterListContext>(0);
}


size_t SolidityParser::ModifierDefinitionContext::getRuleIndex() const {
  return SolidityParser::RuleModifierDefinition;
}


antlrcpp::Any SolidityParser::ModifierDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitModifierDefinition(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::ModifierDefinitionContext* SolidityParser::modifierDefinition() {
  ModifierDefinitionContext *_localctx = _tracker.createInstance<ModifierDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 34, SolidityParser::RuleModifierDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(333);
    match(SolidityParser::T__26);
    setState(334);
    identifier();
    setState(336);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__20) {
      setState(335);
      parameterList();
    }
    setState(338);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModifierInvocationContext ------------------------------------------------------------------

SolidityParser::ModifierInvocationContext::ModifierInvocationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::IdentifierContext* SolidityParser::ModifierInvocationContext::identifier() {
  return getRuleContext<SolidityParser::IdentifierContext>(0);
}

SolidityParser::ExpressionListContext* SolidityParser::ModifierInvocationContext::expressionList() {
  return getRuleContext<SolidityParser::ExpressionListContext>(0);
}


size_t SolidityParser::ModifierInvocationContext::getRuleIndex() const {
  return SolidityParser::RuleModifierInvocation;
}


antlrcpp::Any SolidityParser::ModifierInvocationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitModifierInvocation(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::ModifierInvocationContext* SolidityParser::modifierInvocation() {
  ModifierInvocationContext *_localctx = _tracker.createInstance<ModifierInvocationContext>(_ctx, getState());
  enterRule(_localctx, 36, SolidityParser::RuleModifierInvocation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(340);
    identifier();
    setState(346);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__20) {
      setState(341);
      match(SolidityParser::T__20);
      setState(343);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SolidityParser::T__3)
        | (1ULL << SolidityParser::T__12)
        | (1ULL << SolidityParser::T__20)
        | (1ULL << SolidityParser::T__31)
        | (1ULL << SolidityParser::T__33)
        | (1ULL << SolidityParser::T__39)
        | (1ULL << SolidityParser::T__48)
        | (1ULL << SolidityParser::T__49)
        | (1ULL << SolidityParser::T__50)
        | (1ULL << SolidityParser::T__51)
        | (1ULL << SolidityParser::T__52)
        | (1ULL << SolidityParser::T__53)
        | (1ULL << SolidityParser::T__54)
        | (1ULL << SolidityParser::T__55)
        | (1ULL << SolidityParser::T__56)
        | (1ULL << SolidityParser::T__57)
        | (1ULL << SolidityParser::T__58)
        | (1ULL << SolidityParser::T__59))) != 0) || ((((_la - 93) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 93)) & ((1ULL << (SolidityParser::Int - 93))
        | (1ULL << (SolidityParser::Uint - 93))
        | (1ULL << (SolidityParser::Byte - 93))
        | (1ULL << (SolidityParser::Fixed - 93))
        | (1ULL << (SolidityParser::Ufixed - 93))
        | (1ULL << (SolidityParser::BooleanLiteral - 93))
        | (1ULL << (SolidityParser::DecimalNumber - 93))
        | (1ULL << (SolidityParser::HexNumber - 93))
        | (1ULL << (SolidityParser::HexLiteral - 93))
        | (1ULL << (SolidityParser::TypeKeyword - 93))
        | (1ULL << (SolidityParser::Identifier - 93))
        | (1ULL << (SolidityParser::StringLiteral - 93)))) != 0)) {
        setState(342);
        expressionList();
      }
      setState(345);
      match(SolidityParser::T__21);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefinitionContext ------------------------------------------------------------------

SolidityParser::FunctionDefinitionContext::FunctionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::ParameterListContext* SolidityParser::FunctionDefinitionContext::parameterList() {
  return getRuleContext<SolidityParser::ParameterListContext>(0);
}

SolidityParser::ModifierListContext* SolidityParser::FunctionDefinitionContext::modifierList() {
  return getRuleContext<SolidityParser::ModifierListContext>(0);
}

SolidityParser::BlockContext* SolidityParser::FunctionDefinitionContext::block() {
  return getRuleContext<SolidityParser::BlockContext>(0);
}

SolidityParser::NatSpecContext* SolidityParser::FunctionDefinitionContext::natSpec() {
  return getRuleContext<SolidityParser::NatSpecContext>(0);
}

SolidityParser::IdentifierContext* SolidityParser::FunctionDefinitionContext::identifier() {
  return getRuleContext<SolidityParser::IdentifierContext>(0);
}

SolidityParser::ReturnParametersContext* SolidityParser::FunctionDefinitionContext::returnParameters() {
  return getRuleContext<SolidityParser::ReturnParametersContext>(0);
}


size_t SolidityParser::FunctionDefinitionContext::getRuleIndex() const {
  return SolidityParser::RuleFunctionDefinition;
}


antlrcpp::Any SolidityParser::FunctionDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitFunctionDefinition(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::FunctionDefinitionContext* SolidityParser::functionDefinition() {
  FunctionDefinitionContext *_localctx = _tracker.createInstance<FunctionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 38, SolidityParser::RuleFunctionDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(349);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::NatSpecSingleLine

    || _la == SolidityParser::NatSpecMultiLine) {
      setState(348);
      natSpec();
    }
    setState(351);
    match(SolidityParser::T__27);
    setState(353);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__12

    || _la == SolidityParser::T__39 || _la == SolidityParser::Identifier) {
      setState(352);
      identifier();
    }
    setState(355);
    parameterList();
    setState(356);
    modifierList();
    setState(358);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__28) {
      setState(357);
      returnParameters();
    }
    setState(362);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SolidityParser::T__1: {
        setState(360);
        match(SolidityParser::T__1);
        break;
      }

      case SolidityParser::T__13: {
        setState(361);
        block();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnParametersContext ------------------------------------------------------------------

SolidityParser::ReturnParametersContext::ReturnParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::ParameterListContext* SolidityParser::ReturnParametersContext::parameterList() {
  return getRuleContext<SolidityParser::ParameterListContext>(0);
}


size_t SolidityParser::ReturnParametersContext::getRuleIndex() const {
  return SolidityParser::RuleReturnParameters;
}


antlrcpp::Any SolidityParser::ReturnParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitReturnParameters(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::ReturnParametersContext* SolidityParser::returnParameters() {
  ReturnParametersContext *_localctx = _tracker.createInstance<ReturnParametersContext>(_ctx, getState());
  enterRule(_localctx, 40, SolidityParser::RuleReturnParameters);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(364);
    match(SolidityParser::T__28);
    setState(365);
    parameterList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModifierListContext ------------------------------------------------------------------

SolidityParser::ModifierListContext::ModifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SolidityParser::ModifierInvocationContext *> SolidityParser::ModifierListContext::modifierInvocation() {
  return getRuleContexts<SolidityParser::ModifierInvocationContext>();
}

SolidityParser::ModifierInvocationContext* SolidityParser::ModifierListContext::modifierInvocation(size_t i) {
  return getRuleContext<SolidityParser::ModifierInvocationContext>(i);
}

std::vector<SolidityParser::StateMutabilityContext *> SolidityParser::ModifierListContext::stateMutability() {
  return getRuleContexts<SolidityParser::StateMutabilityContext>();
}

SolidityParser::StateMutabilityContext* SolidityParser::ModifierListContext::stateMutability(size_t i) {
  return getRuleContext<SolidityParser::StateMutabilityContext>(i);
}

std::vector<tree::TerminalNode *> SolidityParser::ModifierListContext::ExternalKeyword() {
  return getTokens(SolidityParser::ExternalKeyword);
}

tree::TerminalNode* SolidityParser::ModifierListContext::ExternalKeyword(size_t i) {
  return getToken(SolidityParser::ExternalKeyword, i);
}

std::vector<tree::TerminalNode *> SolidityParser::ModifierListContext::PublicKeyword() {
  return getTokens(SolidityParser::PublicKeyword);
}

tree::TerminalNode* SolidityParser::ModifierListContext::PublicKeyword(size_t i) {
  return getToken(SolidityParser::PublicKeyword, i);
}

std::vector<tree::TerminalNode *> SolidityParser::ModifierListContext::InternalKeyword() {
  return getTokens(SolidityParser::InternalKeyword);
}

tree::TerminalNode* SolidityParser::ModifierListContext::InternalKeyword(size_t i) {
  return getToken(SolidityParser::InternalKeyword, i);
}

std::vector<tree::TerminalNode *> SolidityParser::ModifierListContext::PrivateKeyword() {
  return getTokens(SolidityParser::PrivateKeyword);
}

tree::TerminalNode* SolidityParser::ModifierListContext::PrivateKeyword(size_t i) {
  return getToken(SolidityParser::PrivateKeyword, i);
}


size_t SolidityParser::ModifierListContext::getRuleIndex() const {
  return SolidityParser::RuleModifierList;
}


antlrcpp::Any SolidityParser::ModifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitModifierList(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::ModifierListContext* SolidityParser::modifierList() {
  ModifierListContext *_localctx = _tracker.createInstance<ModifierListContext>(_ctx, getState());
  enterRule(_localctx, 42, SolidityParser::RuleModifierList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(375);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SolidityParser::T__12

    || _la == SolidityParser::T__39 || ((((_la - 107) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 107)) & ((1ULL << (SolidityParser::ConstantKeyword - 107))
      | (1ULL << (SolidityParser::ExternalKeyword - 107))
      | (1ULL << (SolidityParser::InternalKeyword - 107))
      | (1ULL << (SolidityParser::PayableKeyword - 107))
      | (1ULL << (SolidityParser::PrivateKeyword - 107))
      | (1ULL << (SolidityParser::PublicKeyword - 107))
      | (1ULL << (SolidityParser::PureKeyword - 107))
      | (1ULL << (SolidityParser::ViewKeyword - 107))
      | (1ULL << (SolidityParser::Identifier - 107)))) != 0)) {
      setState(373);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SolidityParser::T__12:
        case SolidityParser::T__39:
        case SolidityParser::Identifier: {
          setState(367);
          modifierInvocation();
          break;
        }

        case SolidityParser::ConstantKeyword:
        case SolidityParser::PayableKeyword:
        case SolidityParser::PureKeyword:
        case SolidityParser::ViewKeyword: {
          setState(368);
          stateMutability();
          break;
        }

        case SolidityParser::ExternalKeyword: {
          setState(369);
          match(SolidityParser::ExternalKeyword);
          break;
        }

        case SolidityParser::PublicKeyword: {
          setState(370);
          match(SolidityParser::PublicKeyword);
          break;
        }

        case SolidityParser::InternalKeyword: {
          setState(371);
          match(SolidityParser::InternalKeyword);
          break;
        }

        case SolidityParser::PrivateKeyword: {
          setState(372);
          match(SolidityParser::PrivateKeyword);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(377);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EventDefinitionContext ------------------------------------------------------------------

SolidityParser::EventDefinitionContext::EventDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::IdentifierContext* SolidityParser::EventDefinitionContext::identifier() {
  return getRuleContext<SolidityParser::IdentifierContext>(0);
}

SolidityParser::EventParameterListContext* SolidityParser::EventDefinitionContext::eventParameterList() {
  return getRuleContext<SolidityParser::EventParameterListContext>(0);
}

SolidityParser::NatSpecContext* SolidityParser::EventDefinitionContext::natSpec() {
  return getRuleContext<SolidityParser::NatSpecContext>(0);
}

tree::TerminalNode* SolidityParser::EventDefinitionContext::AnonymousKeyword() {
  return getToken(SolidityParser::AnonymousKeyword, 0);
}


size_t SolidityParser::EventDefinitionContext::getRuleIndex() const {
  return SolidityParser::RuleEventDefinition;
}


antlrcpp::Any SolidityParser::EventDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitEventDefinition(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::EventDefinitionContext* SolidityParser::eventDefinition() {
  EventDefinitionContext *_localctx = _tracker.createInstance<EventDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 44, SolidityParser::RuleEventDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(379);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::NatSpecSingleLine

    || _la == SolidityParser::NatSpecMultiLine) {
      setState(378);
      natSpec();
    }
    setState(381);
    match(SolidityParser::T__29);
    setState(382);
    identifier();
    setState(383);
    eventParameterList();
    setState(385);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::AnonymousKeyword) {
      setState(384);
      match(SolidityParser::AnonymousKeyword);
    }
    setState(387);
    match(SolidityParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumValueContext ------------------------------------------------------------------

SolidityParser::EnumValueContext::EnumValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::IdentifierContext* SolidityParser::EnumValueContext::identifier() {
  return getRuleContext<SolidityParser::IdentifierContext>(0);
}


size_t SolidityParser::EnumValueContext::getRuleIndex() const {
  return SolidityParser::RuleEnumValue;
}


antlrcpp::Any SolidityParser::EnumValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitEnumValue(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::EnumValueContext* SolidityParser::enumValue() {
  EnumValueContext *_localctx = _tracker.createInstance<EnumValueContext>(_ctx, getState());
  enterRule(_localctx, 46, SolidityParser::RuleEnumValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(389);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumDefinitionContext ------------------------------------------------------------------

SolidityParser::EnumDefinitionContext::EnumDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::IdentifierContext* SolidityParser::EnumDefinitionContext::identifier() {
  return getRuleContext<SolidityParser::IdentifierContext>(0);
}

std::vector<SolidityParser::EnumValueContext *> SolidityParser::EnumDefinitionContext::enumValue() {
  return getRuleContexts<SolidityParser::EnumValueContext>();
}

SolidityParser::EnumValueContext* SolidityParser::EnumDefinitionContext::enumValue(size_t i) {
  return getRuleContext<SolidityParser::EnumValueContext>(i);
}


size_t SolidityParser::EnumDefinitionContext::getRuleIndex() const {
  return SolidityParser::RuleEnumDefinition;
}


antlrcpp::Any SolidityParser::EnumDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitEnumDefinition(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::EnumDefinitionContext* SolidityParser::enumDefinition() {
  EnumDefinitionContext *_localctx = _tracker.createInstance<EnumDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 48, SolidityParser::RuleEnumDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(391);
    match(SolidityParser::T__30);
    setState(392);
    identifier();
    setState(393);
    match(SolidityParser::T__13);
    setState(395);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__12

    || _la == SolidityParser::T__39 || _la == SolidityParser::Identifier) {
      setState(394);
      enumValue();
    }
    setState(401);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SolidityParser::T__14) {
      setState(397);
      match(SolidityParser::T__14);
      setState(398);
      enumValue();
      setState(403);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(404);
    match(SolidityParser::T__15);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterListContext ------------------------------------------------------------------

SolidityParser::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SolidityParser::ParameterContext *> SolidityParser::ParameterListContext::parameter() {
  return getRuleContexts<SolidityParser::ParameterContext>();
}

SolidityParser::ParameterContext* SolidityParser::ParameterListContext::parameter(size_t i) {
  return getRuleContext<SolidityParser::ParameterContext>(i);
}


size_t SolidityParser::ParameterListContext::getRuleIndex() const {
  return SolidityParser::RuleParameterList;
}


antlrcpp::Any SolidityParser::ParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitParameterList(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::ParameterListContext* SolidityParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 50, SolidityParser::RuleParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(406);
    match(SolidityParser::T__20);
    setState(415);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SolidityParser::T__12)
      | (1ULL << SolidityParser::T__27)
      | (1ULL << SolidityParser::T__33)
      | (1ULL << SolidityParser::T__35)
      | (1ULL << SolidityParser::T__39)
      | (1ULL << SolidityParser::T__48)
      | (1ULL << SolidityParser::T__49)
      | (1ULL << SolidityParser::T__50)
      | (1ULL << SolidityParser::T__51))) != 0) || ((((_la - 93) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 93)) & ((1ULL << (SolidityParser::Int - 93))
      | (1ULL << (SolidityParser::Uint - 93))
      | (1ULL << (SolidityParser::Byte - 93))
      | (1ULL << (SolidityParser::Fixed - 93))
      | (1ULL << (SolidityParser::Ufixed - 93))
      | (1ULL << (SolidityParser::Identifier - 93)))) != 0)) {
      setState(407);
      parameter();
      setState(412);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SolidityParser::T__14) {
        setState(408);
        match(SolidityParser::T__14);
        setState(409);
        parameter();
        setState(414);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(417);
    match(SolidityParser::T__21);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

SolidityParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::TypeNameContext* SolidityParser::ParameterContext::typeName() {
  return getRuleContext<SolidityParser::TypeNameContext>(0);
}

SolidityParser::StorageLocationContext* SolidityParser::ParameterContext::storageLocation() {
  return getRuleContext<SolidityParser::StorageLocationContext>(0);
}

SolidityParser::IdentifierContext* SolidityParser::ParameterContext::identifier() {
  return getRuleContext<SolidityParser::IdentifierContext>(0);
}


size_t SolidityParser::ParameterContext::getRuleIndex() const {
  return SolidityParser::RuleParameter;
}


antlrcpp::Any SolidityParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::ParameterContext* SolidityParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 52, SolidityParser::RuleParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(419);
    typeName(0);
    setState(421);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      setState(420);
      storageLocation();
      break;
    }

    }
    setState(424);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__12

    || _la == SolidityParser::T__39 || _la == SolidityParser::Identifier) {
      setState(423);
      identifier();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EventParameterListContext ------------------------------------------------------------------

SolidityParser::EventParameterListContext::EventParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SolidityParser::EventParameterContext *> SolidityParser::EventParameterListContext::eventParameter() {
  return getRuleContexts<SolidityParser::EventParameterContext>();
}

SolidityParser::EventParameterContext* SolidityParser::EventParameterListContext::eventParameter(size_t i) {
  return getRuleContext<SolidityParser::EventParameterContext>(i);
}


size_t SolidityParser::EventParameterListContext::getRuleIndex() const {
  return SolidityParser::RuleEventParameterList;
}


antlrcpp::Any SolidityParser::EventParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitEventParameterList(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::EventParameterListContext* SolidityParser::eventParameterList() {
  EventParameterListContext *_localctx = _tracker.createInstance<EventParameterListContext>(_ctx, getState());
  enterRule(_localctx, 54, SolidityParser::RuleEventParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(426);
    match(SolidityParser::T__20);
    setState(435);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SolidityParser::T__12)
      | (1ULL << SolidityParser::T__27)
      | (1ULL << SolidityParser::T__33)
      | (1ULL << SolidityParser::T__35)
      | (1ULL << SolidityParser::T__39)
      | (1ULL << SolidityParser::T__48)
      | (1ULL << SolidityParser::T__49)
      | (1ULL << SolidityParser::T__50)
      | (1ULL << SolidityParser::T__51))) != 0) || ((((_la - 93) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 93)) & ((1ULL << (SolidityParser::Int - 93))
      | (1ULL << (SolidityParser::Uint - 93))
      | (1ULL << (SolidityParser::Byte - 93))
      | (1ULL << (SolidityParser::Fixed - 93))
      | (1ULL << (SolidityParser::Ufixed - 93))
      | (1ULL << (SolidityParser::Identifier - 93)))) != 0)) {
      setState(427);
      eventParameter();
      setState(432);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SolidityParser::T__14) {
        setState(428);
        match(SolidityParser::T__14);
        setState(429);
        eventParameter();
        setState(434);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(437);
    match(SolidityParser::T__21);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EventParameterContext ------------------------------------------------------------------

SolidityParser::EventParameterContext::EventParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::TypeNameContext* SolidityParser::EventParameterContext::typeName() {
  return getRuleContext<SolidityParser::TypeNameContext>(0);
}

tree::TerminalNode* SolidityParser::EventParameterContext::IndexedKeyword() {
  return getToken(SolidityParser::IndexedKeyword, 0);
}

SolidityParser::IdentifierContext* SolidityParser::EventParameterContext::identifier() {
  return getRuleContext<SolidityParser::IdentifierContext>(0);
}


size_t SolidityParser::EventParameterContext::getRuleIndex() const {
  return SolidityParser::RuleEventParameter;
}


antlrcpp::Any SolidityParser::EventParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitEventParameter(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::EventParameterContext* SolidityParser::eventParameter() {
  EventParameterContext *_localctx = _tracker.createInstance<EventParameterContext>(_ctx, getState());
  enterRule(_localctx, 56, SolidityParser::RuleEventParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(439);
    typeName(0);
    setState(441);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::IndexedKeyword) {
      setState(440);
      match(SolidityParser::IndexedKeyword);
    }
    setState(444);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__12

    || _la == SolidityParser::T__39 || _la == SolidityParser::Identifier) {
      setState(443);
      identifier();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionTypeParameterListContext ------------------------------------------------------------------

SolidityParser::FunctionTypeParameterListContext::FunctionTypeParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SolidityParser::FunctionTypeParameterContext *> SolidityParser::FunctionTypeParameterListContext::functionTypeParameter() {
  return getRuleContexts<SolidityParser::FunctionTypeParameterContext>();
}

SolidityParser::FunctionTypeParameterContext* SolidityParser::FunctionTypeParameterListContext::functionTypeParameter(size_t i) {
  return getRuleContext<SolidityParser::FunctionTypeParameterContext>(i);
}


size_t SolidityParser::FunctionTypeParameterListContext::getRuleIndex() const {
  return SolidityParser::RuleFunctionTypeParameterList;
}


antlrcpp::Any SolidityParser::FunctionTypeParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitFunctionTypeParameterList(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::FunctionTypeParameterListContext* SolidityParser::functionTypeParameterList() {
  FunctionTypeParameterListContext *_localctx = _tracker.createInstance<FunctionTypeParameterListContext>(_ctx, getState());
  enterRule(_localctx, 58, SolidityParser::RuleFunctionTypeParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(446);
    match(SolidityParser::T__20);
    setState(455);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SolidityParser::T__12)
      | (1ULL << SolidityParser::T__27)
      | (1ULL << SolidityParser::T__33)
      | (1ULL << SolidityParser::T__35)
      | (1ULL << SolidityParser::T__39)
      | (1ULL << SolidityParser::T__48)
      | (1ULL << SolidityParser::T__49)
      | (1ULL << SolidityParser::T__50)
      | (1ULL << SolidityParser::T__51))) != 0) || ((((_la - 93) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 93)) & ((1ULL << (SolidityParser::Int - 93))
      | (1ULL << (SolidityParser::Uint - 93))
      | (1ULL << (SolidityParser::Byte - 93))
      | (1ULL << (SolidityParser::Fixed - 93))
      | (1ULL << (SolidityParser::Ufixed - 93))
      | (1ULL << (SolidityParser::Identifier - 93)))) != 0)) {
      setState(447);
      functionTypeParameter();
      setState(452);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SolidityParser::T__14) {
        setState(448);
        match(SolidityParser::T__14);
        setState(449);
        functionTypeParameter();
        setState(454);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(457);
    match(SolidityParser::T__21);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionTypeParameterContext ------------------------------------------------------------------

SolidityParser::FunctionTypeParameterContext::FunctionTypeParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::TypeNameContext* SolidityParser::FunctionTypeParameterContext::typeName() {
  return getRuleContext<SolidityParser::TypeNameContext>(0);
}

SolidityParser::StorageLocationContext* SolidityParser::FunctionTypeParameterContext::storageLocation() {
  return getRuleContext<SolidityParser::StorageLocationContext>(0);
}


size_t SolidityParser::FunctionTypeParameterContext::getRuleIndex() const {
  return SolidityParser::RuleFunctionTypeParameter;
}


antlrcpp::Any SolidityParser::FunctionTypeParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitFunctionTypeParameter(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::FunctionTypeParameterContext* SolidityParser::functionTypeParameter() {
  FunctionTypeParameterContext *_localctx = _tracker.createInstance<FunctionTypeParameterContext>(_ctx, getState());
  enterRule(_localctx, 60, SolidityParser::RuleFunctionTypeParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(459);
    typeName(0);
    setState(461);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SolidityParser::T__37)
      | (1ULL << SolidityParser::T__38)
      | (1ULL << SolidityParser::T__39))) != 0)) {
      setState(460);
      storageLocation();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

SolidityParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::TypeNameContext* SolidityParser::VariableDeclarationContext::typeName() {
  return getRuleContext<SolidityParser::TypeNameContext>(0);
}

SolidityParser::IdentifierContext* SolidityParser::VariableDeclarationContext::identifier() {
  return getRuleContext<SolidityParser::IdentifierContext>(0);
}

SolidityParser::StorageLocationContext* SolidityParser::VariableDeclarationContext::storageLocation() {
  return getRuleContext<SolidityParser::StorageLocationContext>(0);
}


size_t SolidityParser::VariableDeclarationContext::getRuleIndex() const {
  return SolidityParser::RuleVariableDeclaration;
}


antlrcpp::Any SolidityParser::VariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::VariableDeclarationContext* SolidityParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 62, SolidityParser::RuleVariableDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(463);
    typeName(0);
    setState(465);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      setState(464);
      storageLocation();
      break;
    }

    }
    setState(467);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeNameContext ------------------------------------------------------------------

SolidityParser::TypeNameContext::TypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::ElementaryTypeNameContext* SolidityParser::TypeNameContext::elementaryTypeName() {
  return getRuleContext<SolidityParser::ElementaryTypeNameContext>(0);
}

SolidityParser::UserDefinedTypeNameContext* SolidityParser::TypeNameContext::userDefinedTypeName() {
  return getRuleContext<SolidityParser::UserDefinedTypeNameContext>(0);
}

SolidityParser::MappingContext* SolidityParser::TypeNameContext::mapping() {
  return getRuleContext<SolidityParser::MappingContext>(0);
}

SolidityParser::FunctionTypeNameContext* SolidityParser::TypeNameContext::functionTypeName() {
  return getRuleContext<SolidityParser::FunctionTypeNameContext>(0);
}

tree::TerminalNode* SolidityParser::TypeNameContext::PayableKeyword() {
  return getToken(SolidityParser::PayableKeyword, 0);
}

SolidityParser::TypeNameContext* SolidityParser::TypeNameContext::typeName() {
  return getRuleContext<SolidityParser::TypeNameContext>(0);
}

SolidityParser::ExpressionContext* SolidityParser::TypeNameContext::expression() {
  return getRuleContext<SolidityParser::ExpressionContext>(0);
}


size_t SolidityParser::TypeNameContext::getRuleIndex() const {
  return SolidityParser::RuleTypeName;
}


antlrcpp::Any SolidityParser::TypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitTypeName(this);
  else
    return visitor->visitChildren(this);
}


SolidityParser::TypeNameContext* SolidityParser::typeName() {
   return typeName(0);
}

SolidityParser::TypeNameContext* SolidityParser::typeName(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SolidityParser::TypeNameContext *_localctx = _tracker.createInstance<TypeNameContext>(_ctx, parentState);
  SolidityParser::TypeNameContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 64;
  enterRecursionRule(_localctx, 64, SolidityParser::RuleTypeName, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(476);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
    case 1: {
      setState(470);
      elementaryTypeName();
      break;
    }

    case 2: {
      setState(471);
      userDefinedTypeName();
      break;
    }

    case 3: {
      setState(472);
      mapping();
      break;
    }

    case 4: {
      setState(473);
      functionTypeName();
      break;
    }

    case 5: {
      setState(474);
      match(SolidityParser::T__33);
      setState(475);
      match(SolidityParser::PayableKeyword);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(486);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TypeNameContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTypeName);
        setState(478);

        if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
        setState(479);
        match(SolidityParser::T__31);
        setState(481);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << SolidityParser::T__3)
          | (1ULL << SolidityParser::T__12)
          | (1ULL << SolidityParser::T__20)
          | (1ULL << SolidityParser::T__31)
          | (1ULL << SolidityParser::T__33)
          | (1ULL << SolidityParser::T__39)
          | (1ULL << SolidityParser::T__48)
          | (1ULL << SolidityParser::T__49)
          | (1ULL << SolidityParser::T__50)
          | (1ULL << SolidityParser::T__51)
          | (1ULL << SolidityParser::T__52)
          | (1ULL << SolidityParser::T__53)
          | (1ULL << SolidityParser::T__54)
          | (1ULL << SolidityParser::T__55)
          | (1ULL << SolidityParser::T__56)
          | (1ULL << SolidityParser::T__57)
          | (1ULL << SolidityParser::T__58)
          | (1ULL << SolidityParser::T__59))) != 0) || ((((_la - 93) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 93)) & ((1ULL << (SolidityParser::Int - 93))
          | (1ULL << (SolidityParser::Uint - 93))
          | (1ULL << (SolidityParser::Byte - 93))
          | (1ULL << (SolidityParser::Fixed - 93))
          | (1ULL << (SolidityParser::Ufixed - 93))
          | (1ULL << (SolidityParser::BooleanLiteral - 93))
          | (1ULL << (SolidityParser::DecimalNumber - 93))
          | (1ULL << (SolidityParser::HexNumber - 93))
          | (1ULL << (SolidityParser::HexLiteral - 93))
          | (1ULL << (SolidityParser::TypeKeyword - 93))
          | (1ULL << (SolidityParser::Identifier - 93))
          | (1ULL << (SolidityParser::StringLiteral - 93)))) != 0)) {
          setState(480);
          expression(0);
        }
        setState(483);
        match(SolidityParser::T__32); 
      }
      setState(488);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- UserDefinedTypeNameContext ------------------------------------------------------------------

SolidityParser::UserDefinedTypeNameContext::UserDefinedTypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SolidityParser::IdentifierContext *> SolidityParser::UserDefinedTypeNameContext::identifier() {
  return getRuleContexts<SolidityParser::IdentifierContext>();
}

SolidityParser::IdentifierContext* SolidityParser::UserDefinedTypeNameContext::identifier(size_t i) {
  return getRuleContext<SolidityParser::IdentifierContext>(i);
}


size_t SolidityParser::UserDefinedTypeNameContext::getRuleIndex() const {
  return SolidityParser::RuleUserDefinedTypeName;
}


antlrcpp::Any SolidityParser::UserDefinedTypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitUserDefinedTypeName(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::UserDefinedTypeNameContext* SolidityParser::userDefinedTypeName() {
  UserDefinedTypeNameContext *_localctx = _tracker.createInstance<UserDefinedTypeNameContext>(_ctx, getState());
  enterRule(_localctx, 66, SolidityParser::RuleUserDefinedTypeName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(489);
    identifier();
    setState(494);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(490);
        match(SolidityParser::T__34);
        setState(491);
        identifier(); 
      }
      setState(496);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MappingContext ------------------------------------------------------------------

SolidityParser::MappingContext::MappingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::ElementaryTypeNameContext* SolidityParser::MappingContext::elementaryTypeName() {
  return getRuleContext<SolidityParser::ElementaryTypeNameContext>(0);
}

SolidityParser::TypeNameContext* SolidityParser::MappingContext::typeName() {
  return getRuleContext<SolidityParser::TypeNameContext>(0);
}


size_t SolidityParser::MappingContext::getRuleIndex() const {
  return SolidityParser::RuleMapping;
}


antlrcpp::Any SolidityParser::MappingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitMapping(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::MappingContext* SolidityParser::mapping() {
  MappingContext *_localctx = _tracker.createInstance<MappingContext>(_ctx, getState());
  enterRule(_localctx, 68, SolidityParser::RuleMapping);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(497);
    match(SolidityParser::T__35);
    setState(498);
    match(SolidityParser::T__20);
    setState(499);
    elementaryTypeName();
    setState(500);
    match(SolidityParser::T__36);
    setState(501);
    typeName(0);
    setState(502);
    match(SolidityParser::T__21);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionTypeNameContext ------------------------------------------------------------------

SolidityParser::FunctionTypeNameContext::FunctionTypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SolidityParser::FunctionTypeParameterListContext *> SolidityParser::FunctionTypeNameContext::functionTypeParameterList() {
  return getRuleContexts<SolidityParser::FunctionTypeParameterListContext>();
}

SolidityParser::FunctionTypeParameterListContext* SolidityParser::FunctionTypeNameContext::functionTypeParameterList(size_t i) {
  return getRuleContext<SolidityParser::FunctionTypeParameterListContext>(i);
}

std::vector<tree::TerminalNode *> SolidityParser::FunctionTypeNameContext::InternalKeyword() {
  return getTokens(SolidityParser::InternalKeyword);
}

tree::TerminalNode* SolidityParser::FunctionTypeNameContext::InternalKeyword(size_t i) {
  return getToken(SolidityParser::InternalKeyword, i);
}

std::vector<tree::TerminalNode *> SolidityParser::FunctionTypeNameContext::ExternalKeyword() {
  return getTokens(SolidityParser::ExternalKeyword);
}

tree::TerminalNode* SolidityParser::FunctionTypeNameContext::ExternalKeyword(size_t i) {
  return getToken(SolidityParser::ExternalKeyword, i);
}

std::vector<SolidityParser::StateMutabilityContext *> SolidityParser::FunctionTypeNameContext::stateMutability() {
  return getRuleContexts<SolidityParser::StateMutabilityContext>();
}

SolidityParser::StateMutabilityContext* SolidityParser::FunctionTypeNameContext::stateMutability(size_t i) {
  return getRuleContext<SolidityParser::StateMutabilityContext>(i);
}


size_t SolidityParser::FunctionTypeNameContext::getRuleIndex() const {
  return SolidityParser::RuleFunctionTypeName;
}


antlrcpp::Any SolidityParser::FunctionTypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitFunctionTypeName(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::FunctionTypeNameContext* SolidityParser::functionTypeName() {
  FunctionTypeNameContext *_localctx = _tracker.createInstance<FunctionTypeNameContext>(_ctx, getState());
  enterRule(_localctx, 70, SolidityParser::RuleFunctionTypeName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(504);
    match(SolidityParser::T__27);
    setState(505);
    functionTypeParameterList();
    setState(511);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(509);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case SolidityParser::InternalKeyword: {
            setState(506);
            match(SolidityParser::InternalKeyword);
            break;
          }

          case SolidityParser::ExternalKeyword: {
            setState(507);
            match(SolidityParser::ExternalKeyword);
            break;
          }

          case SolidityParser::ConstantKeyword:
          case SolidityParser::PayableKeyword:
          case SolidityParser::PureKeyword:
          case SolidityParser::ViewKeyword: {
            setState(508);
            stateMutability();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(513);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
    }
    setState(516);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      setState(514);
      match(SolidityParser::T__28);
      setState(515);
      functionTypeParameterList();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StorageLocationContext ------------------------------------------------------------------

SolidityParser::StorageLocationContext::StorageLocationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SolidityParser::StorageLocationContext::getRuleIndex() const {
  return SolidityParser::RuleStorageLocation;
}


antlrcpp::Any SolidityParser::StorageLocationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitStorageLocation(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::StorageLocationContext* SolidityParser::storageLocation() {
  StorageLocationContext *_localctx = _tracker.createInstance<StorageLocationContext>(_ctx, getState());
  enterRule(_localctx, 72, SolidityParser::RuleStorageLocation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(518);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SolidityParser::T__37)
      | (1ULL << SolidityParser::T__38)
      | (1ULL << SolidityParser::T__39))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StateMutabilityContext ------------------------------------------------------------------

SolidityParser::StateMutabilityContext::StateMutabilityContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SolidityParser::StateMutabilityContext::PureKeyword() {
  return getToken(SolidityParser::PureKeyword, 0);
}

tree::TerminalNode* SolidityParser::StateMutabilityContext::ConstantKeyword() {
  return getToken(SolidityParser::ConstantKeyword, 0);
}

tree::TerminalNode* SolidityParser::StateMutabilityContext::ViewKeyword() {
  return getToken(SolidityParser::ViewKeyword, 0);
}

tree::TerminalNode* SolidityParser::StateMutabilityContext::PayableKeyword() {
  return getToken(SolidityParser::PayableKeyword, 0);
}


size_t SolidityParser::StateMutabilityContext::getRuleIndex() const {
  return SolidityParser::RuleStateMutability;
}


antlrcpp::Any SolidityParser::StateMutabilityContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitStateMutability(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::StateMutabilityContext* SolidityParser::stateMutability() {
  StateMutabilityContext *_localctx = _tracker.createInstance<StateMutabilityContext>(_ctx, getState());
  enterRule(_localctx, 74, SolidityParser::RuleStateMutability);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(520);
    _la = _input->LA(1);
    if (!(((((_la - 107) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 107)) & ((1ULL << (SolidityParser::ConstantKeyword - 107))
      | (1ULL << (SolidityParser::PayableKeyword - 107))
      | (1ULL << (SolidityParser::PureKeyword - 107))
      | (1ULL << (SolidityParser::ViewKeyword - 107)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

SolidityParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SolidityParser::StatementContext *> SolidityParser::BlockContext::statement() {
  return getRuleContexts<SolidityParser::StatementContext>();
}

SolidityParser::StatementContext* SolidityParser::BlockContext::statement(size_t i) {
  return getRuleContext<SolidityParser::StatementContext>(i);
}


size_t SolidityParser::BlockContext::getRuleIndex() const {
  return SolidityParser::RuleBlock;
}


antlrcpp::Any SolidityParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::BlockContext* SolidityParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 76, SolidityParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(522);
    match(SolidityParser::T__13);
    setState(526);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SolidityParser::T__3)
      | (1ULL << SolidityParser::T__12)
      | (1ULL << SolidityParser::T__13)
      | (1ULL << SolidityParser::T__20)
      | (1ULL << SolidityParser::T__23)
      | (1ULL << SolidityParser::T__27)
      | (1ULL << SolidityParser::T__31)
      | (1ULL << SolidityParser::T__33)
      | (1ULL << SolidityParser::T__35)
      | (1ULL << SolidityParser::T__39)
      | (1ULL << SolidityParser::T__40)
      | (1ULL << SolidityParser::T__42)
      | (1ULL << SolidityParser::T__43)
      | (1ULL << SolidityParser::T__44)
      | (1ULL << SolidityParser::T__45)
      | (1ULL << SolidityParser::T__46)
      | (1ULL << SolidityParser::T__47)
      | (1ULL << SolidityParser::T__48)
      | (1ULL << SolidityParser::T__49)
      | (1ULL << SolidityParser::T__50)
      | (1ULL << SolidityParser::T__51)
      | (1ULL << SolidityParser::T__52)
      | (1ULL << SolidityParser::T__53)
      | (1ULL << SolidityParser::T__54)
      | (1ULL << SolidityParser::T__55)
      | (1ULL << SolidityParser::T__56)
      | (1ULL << SolidityParser::T__57)
      | (1ULL << SolidityParser::T__58)
      | (1ULL << SolidityParser::T__59))) != 0) || ((((_la - 93) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 93)) & ((1ULL << (SolidityParser::Int - 93))
      | (1ULL << (SolidityParser::Uint - 93))
      | (1ULL << (SolidityParser::Byte - 93))
      | (1ULL << (SolidityParser::Fixed - 93))
      | (1ULL << (SolidityParser::Ufixed - 93))
      | (1ULL << (SolidityParser::BooleanLiteral - 93))
      | (1ULL << (SolidityParser::DecimalNumber - 93))
      | (1ULL << (SolidityParser::HexNumber - 93))
      | (1ULL << (SolidityParser::HexLiteral - 93))
      | (1ULL << (SolidityParser::BreakKeyword - 93))
      | (1ULL << (SolidityParser::ContinueKeyword - 93))
      | (1ULL << (SolidityParser::TypeKeyword - 93))
      | (1ULL << (SolidityParser::Identifier - 93))
      | (1ULL << (SolidityParser::StringLiteral - 93)))) != 0)) {
      setState(523);
      statement();
      setState(528);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(529);
    match(SolidityParser::T__15);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

SolidityParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::IfStatementContext* SolidityParser::StatementContext::ifStatement() {
  return getRuleContext<SolidityParser::IfStatementContext>(0);
}

SolidityParser::WhileStatementContext* SolidityParser::StatementContext::whileStatement() {
  return getRuleContext<SolidityParser::WhileStatementContext>(0);
}

SolidityParser::ForStatementContext* SolidityParser::StatementContext::forStatement() {
  return getRuleContext<SolidityParser::ForStatementContext>(0);
}

SolidityParser::BlockContext* SolidityParser::StatementContext::block() {
  return getRuleContext<SolidityParser::BlockContext>(0);
}

SolidityParser::InlineAssemblyStatementContext* SolidityParser::StatementContext::inlineAssemblyStatement() {
  return getRuleContext<SolidityParser::InlineAssemblyStatementContext>(0);
}

SolidityParser::DoWhileStatementContext* SolidityParser::StatementContext::doWhileStatement() {
  return getRuleContext<SolidityParser::DoWhileStatementContext>(0);
}

SolidityParser::ContinueStatementContext* SolidityParser::StatementContext::continueStatement() {
  return getRuleContext<SolidityParser::ContinueStatementContext>(0);
}

SolidityParser::BreakStatementContext* SolidityParser::StatementContext::breakStatement() {
  return getRuleContext<SolidityParser::BreakStatementContext>(0);
}

SolidityParser::ReturnStatementContext* SolidityParser::StatementContext::returnStatement() {
  return getRuleContext<SolidityParser::ReturnStatementContext>(0);
}

SolidityParser::ThrowStatementContext* SolidityParser::StatementContext::throwStatement() {
  return getRuleContext<SolidityParser::ThrowStatementContext>(0);
}

SolidityParser::EmitStatementContext* SolidityParser::StatementContext::emitStatement() {
  return getRuleContext<SolidityParser::EmitStatementContext>(0);
}

SolidityParser::SimpleStatementContext* SolidityParser::StatementContext::simpleStatement() {
  return getRuleContext<SolidityParser::SimpleStatementContext>(0);
}


size_t SolidityParser::StatementContext::getRuleIndex() const {
  return SolidityParser::RuleStatement;
}


antlrcpp::Any SolidityParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::StatementContext* SolidityParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 78, SolidityParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(543);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SolidityParser::T__40: {
        enterOuterAlt(_localctx, 1);
        setState(531);
        ifStatement();
        break;
      }

      case SolidityParser::T__42: {
        enterOuterAlt(_localctx, 2);
        setState(532);
        whileStatement();
        break;
      }

      case SolidityParser::T__23: {
        enterOuterAlt(_localctx, 3);
        setState(533);
        forStatement();
        break;
      }

      case SolidityParser::T__13: {
        enterOuterAlt(_localctx, 4);
        setState(534);
        block();
        break;
      }

      case SolidityParser::T__43: {
        enterOuterAlt(_localctx, 5);
        setState(535);
        inlineAssemblyStatement();
        break;
      }

      case SolidityParser::T__44: {
        enterOuterAlt(_localctx, 6);
        setState(536);
        doWhileStatement();
        break;
      }

      case SolidityParser::ContinueKeyword: {
        enterOuterAlt(_localctx, 7);
        setState(537);
        continueStatement();
        break;
      }

      case SolidityParser::BreakKeyword: {
        enterOuterAlt(_localctx, 8);
        setState(538);
        breakStatement();
        break;
      }

      case SolidityParser::T__45: {
        enterOuterAlt(_localctx, 9);
        setState(539);
        returnStatement();
        break;
      }

      case SolidityParser::T__46: {
        enterOuterAlt(_localctx, 10);
        setState(540);
        throwStatement();
        break;
      }

      case SolidityParser::T__47: {
        enterOuterAlt(_localctx, 11);
        setState(541);
        emitStatement();
        break;
      }

      case SolidityParser::T__3:
      case SolidityParser::T__12:
      case SolidityParser::T__20:
      case SolidityParser::T__27:
      case SolidityParser::T__31:
      case SolidityParser::T__33:
      case SolidityParser::T__35:
      case SolidityParser::T__39:
      case SolidityParser::T__48:
      case SolidityParser::T__49:
      case SolidityParser::T__50:
      case SolidityParser::T__51:
      case SolidityParser::T__52:
      case SolidityParser::T__53:
      case SolidityParser::T__54:
      case SolidityParser::T__55:
      case SolidityParser::T__56:
      case SolidityParser::T__57:
      case SolidityParser::T__58:
      case SolidityParser::T__59:
      case SolidityParser::Int:
      case SolidityParser::Uint:
      case SolidityParser::Byte:
      case SolidityParser::Fixed:
      case SolidityParser::Ufixed:
      case SolidityParser::BooleanLiteral:
      case SolidityParser::DecimalNumber:
      case SolidityParser::HexNumber:
      case SolidityParser::HexLiteral:
      case SolidityParser::TypeKeyword:
      case SolidityParser::Identifier:
      case SolidityParser::StringLiteral: {
        enterOuterAlt(_localctx, 12);
        setState(542);
        simpleStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionStatementContext ------------------------------------------------------------------

SolidityParser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::ExpressionContext* SolidityParser::ExpressionStatementContext::expression() {
  return getRuleContext<SolidityParser::ExpressionContext>(0);
}


size_t SolidityParser::ExpressionStatementContext::getRuleIndex() const {
  return SolidityParser::RuleExpressionStatement;
}


antlrcpp::Any SolidityParser::ExpressionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitExpressionStatement(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::ExpressionStatementContext* SolidityParser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 80, SolidityParser::RuleExpressionStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(545);
    expression(0);
    setState(546);
    match(SolidityParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

SolidityParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::ExpressionContext* SolidityParser::IfStatementContext::expression() {
  return getRuleContext<SolidityParser::ExpressionContext>(0);
}

std::vector<SolidityParser::StatementContext *> SolidityParser::IfStatementContext::statement() {
  return getRuleContexts<SolidityParser::StatementContext>();
}

SolidityParser::StatementContext* SolidityParser::IfStatementContext::statement(size_t i) {
  return getRuleContext<SolidityParser::StatementContext>(i);
}


size_t SolidityParser::IfStatementContext::getRuleIndex() const {
  return SolidityParser::RuleIfStatement;
}


antlrcpp::Any SolidityParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::IfStatementContext* SolidityParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 82, SolidityParser::RuleIfStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(548);
    match(SolidityParser::T__40);
    setState(549);
    match(SolidityParser::T__20);
    setState(550);
    expression(0);
    setState(551);
    match(SolidityParser::T__21);
    setState(552);
    statement();
    setState(555);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
    case 1: {
      setState(553);
      match(SolidityParser::T__41);
      setState(554);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

SolidityParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::ExpressionContext* SolidityParser::WhileStatementContext::expression() {
  return getRuleContext<SolidityParser::ExpressionContext>(0);
}

SolidityParser::StatementContext* SolidityParser::WhileStatementContext::statement() {
  return getRuleContext<SolidityParser::StatementContext>(0);
}


size_t SolidityParser::WhileStatementContext::getRuleIndex() const {
  return SolidityParser::RuleWhileStatement;
}


antlrcpp::Any SolidityParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::WhileStatementContext* SolidityParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 84, SolidityParser::RuleWhileStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(557);
    match(SolidityParser::T__42);
    setState(558);
    match(SolidityParser::T__20);
    setState(559);
    expression(0);
    setState(560);
    match(SolidityParser::T__21);
    setState(561);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleStatementContext ------------------------------------------------------------------

SolidityParser::SimpleStatementContext::SimpleStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::VariableDeclarationStatementContext* SolidityParser::SimpleStatementContext::variableDeclarationStatement() {
  return getRuleContext<SolidityParser::VariableDeclarationStatementContext>(0);
}

SolidityParser::ExpressionStatementContext* SolidityParser::SimpleStatementContext::expressionStatement() {
  return getRuleContext<SolidityParser::ExpressionStatementContext>(0);
}


size_t SolidityParser::SimpleStatementContext::getRuleIndex() const {
  return SolidityParser::RuleSimpleStatement;
}


antlrcpp::Any SolidityParser::SimpleStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitSimpleStatement(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::SimpleStatementContext* SolidityParser::simpleStatement() {
  SimpleStatementContext *_localctx = _tracker.createInstance<SimpleStatementContext>(_ctx, getState());
  enterRule(_localctx, 86, SolidityParser::RuleSimpleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(565);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx)) {
    case 1: {
      setState(563);
      variableDeclarationStatement();
      break;
    }

    case 2: {
      setState(564);
      expressionStatement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementContext ------------------------------------------------------------------

SolidityParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::StatementContext* SolidityParser::ForStatementContext::statement() {
  return getRuleContext<SolidityParser::StatementContext>(0);
}

SolidityParser::SimpleStatementContext* SolidityParser::ForStatementContext::simpleStatement() {
  return getRuleContext<SolidityParser::SimpleStatementContext>(0);
}

SolidityParser::ExpressionStatementContext* SolidityParser::ForStatementContext::expressionStatement() {
  return getRuleContext<SolidityParser::ExpressionStatementContext>(0);
}

SolidityParser::ExpressionContext* SolidityParser::ForStatementContext::expression() {
  return getRuleContext<SolidityParser::ExpressionContext>(0);
}


size_t SolidityParser::ForStatementContext::getRuleIndex() const {
  return SolidityParser::RuleForStatement;
}


antlrcpp::Any SolidityParser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::ForStatementContext* SolidityParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 88, SolidityParser::RuleForStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(567);
    match(SolidityParser::T__23);
    setState(568);
    match(SolidityParser::T__20);
    setState(571);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SolidityParser::T__3:
      case SolidityParser::T__12:
      case SolidityParser::T__20:
      case SolidityParser::T__27:
      case SolidityParser::T__31:
      case SolidityParser::T__33:
      case SolidityParser::T__35:
      case SolidityParser::T__39:
      case SolidityParser::T__48:
      case SolidityParser::T__49:
      case SolidityParser::T__50:
      case SolidityParser::T__51:
      case SolidityParser::T__52:
      case SolidityParser::T__53:
      case SolidityParser::T__54:
      case SolidityParser::T__55:
      case SolidityParser::T__56:
      case SolidityParser::T__57:
      case SolidityParser::T__58:
      case SolidityParser::T__59:
      case SolidityParser::Int:
      case SolidityParser::Uint:
      case SolidityParser::Byte:
      case SolidityParser::Fixed:
      case SolidityParser::Ufixed:
      case SolidityParser::BooleanLiteral:
      case SolidityParser::DecimalNumber:
      case SolidityParser::HexNumber:
      case SolidityParser::HexLiteral:
      case SolidityParser::TypeKeyword:
      case SolidityParser::Identifier:
      case SolidityParser::StringLiteral: {
        setState(569);
        simpleStatement();
        break;
      }

      case SolidityParser::T__1: {
        setState(570);
        match(SolidityParser::T__1);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(575);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SolidityParser::T__3:
      case SolidityParser::T__12:
      case SolidityParser::T__20:
      case SolidityParser::T__31:
      case SolidityParser::T__33:
      case SolidityParser::T__39:
      case SolidityParser::T__48:
      case SolidityParser::T__49:
      case SolidityParser::T__50:
      case SolidityParser::T__51:
      case SolidityParser::T__52:
      case SolidityParser::T__53:
      case SolidityParser::T__54:
      case SolidityParser::T__55:
      case SolidityParser::T__56:
      case SolidityParser::T__57:
      case SolidityParser::T__58:
      case SolidityParser::T__59:
      case SolidityParser::Int:
      case SolidityParser::Uint:
      case SolidityParser::Byte:
      case SolidityParser::Fixed:
      case SolidityParser::Ufixed:
      case SolidityParser::BooleanLiteral:
      case SolidityParser::DecimalNumber:
      case SolidityParser::HexNumber:
      case SolidityParser::HexLiteral:
      case SolidityParser::TypeKeyword:
      case SolidityParser::Identifier:
      case SolidityParser::StringLiteral: {
        setState(573);
        expressionStatement();
        break;
      }

      case SolidityParser::T__1: {
        setState(574);
        match(SolidityParser::T__1);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(578);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SolidityParser::T__3)
      | (1ULL << SolidityParser::T__12)
      | (1ULL << SolidityParser::T__20)
      | (1ULL << SolidityParser::T__31)
      | (1ULL << SolidityParser::T__33)
      | (1ULL << SolidityParser::T__39)
      | (1ULL << SolidityParser::T__48)
      | (1ULL << SolidityParser::T__49)
      | (1ULL << SolidityParser::T__50)
      | (1ULL << SolidityParser::T__51)
      | (1ULL << SolidityParser::T__52)
      | (1ULL << SolidityParser::T__53)
      | (1ULL << SolidityParser::T__54)
      | (1ULL << SolidityParser::T__55)
      | (1ULL << SolidityParser::T__56)
      | (1ULL << SolidityParser::T__57)
      | (1ULL << SolidityParser::T__58)
      | (1ULL << SolidityParser::T__59))) != 0) || ((((_la - 93) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 93)) & ((1ULL << (SolidityParser::Int - 93))
      | (1ULL << (SolidityParser::Uint - 93))
      | (1ULL << (SolidityParser::Byte - 93))
      | (1ULL << (SolidityParser::Fixed - 93))
      | (1ULL << (SolidityParser::Ufixed - 93))
      | (1ULL << (SolidityParser::BooleanLiteral - 93))
      | (1ULL << (SolidityParser::DecimalNumber - 93))
      | (1ULL << (SolidityParser::HexNumber - 93))
      | (1ULL << (SolidityParser::HexLiteral - 93))
      | (1ULL << (SolidityParser::TypeKeyword - 93))
      | (1ULL << (SolidityParser::Identifier - 93))
      | (1ULL << (SolidityParser::StringLiteral - 93)))) != 0)) {
      setState(577);
      expression(0);
    }
    setState(580);
    match(SolidityParser::T__21);
    setState(581);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InlineAssemblyStatementContext ------------------------------------------------------------------

SolidityParser::InlineAssemblyStatementContext::InlineAssemblyStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::AssemblyBlockContext* SolidityParser::InlineAssemblyStatementContext::assemblyBlock() {
  return getRuleContext<SolidityParser::AssemblyBlockContext>(0);
}

tree::TerminalNode* SolidityParser::InlineAssemblyStatementContext::StringLiteral() {
  return getToken(SolidityParser::StringLiteral, 0);
}


size_t SolidityParser::InlineAssemblyStatementContext::getRuleIndex() const {
  return SolidityParser::RuleInlineAssemblyStatement;
}


antlrcpp::Any SolidityParser::InlineAssemblyStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitInlineAssemblyStatement(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::InlineAssemblyStatementContext* SolidityParser::inlineAssemblyStatement() {
  InlineAssemblyStatementContext *_localctx = _tracker.createInstance<InlineAssemblyStatementContext>(_ctx, getState());
  enterRule(_localctx, 90, SolidityParser::RuleInlineAssemblyStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(583);
    match(SolidityParser::T__43);
    setState(585);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::StringLiteral) {
      setState(584);
      match(SolidityParser::StringLiteral);
    }
    setState(587);
    assemblyBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DoWhileStatementContext ------------------------------------------------------------------

SolidityParser::DoWhileStatementContext::DoWhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::StatementContext* SolidityParser::DoWhileStatementContext::statement() {
  return getRuleContext<SolidityParser::StatementContext>(0);
}

SolidityParser::ExpressionContext* SolidityParser::DoWhileStatementContext::expression() {
  return getRuleContext<SolidityParser::ExpressionContext>(0);
}


size_t SolidityParser::DoWhileStatementContext::getRuleIndex() const {
  return SolidityParser::RuleDoWhileStatement;
}


antlrcpp::Any SolidityParser::DoWhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitDoWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::DoWhileStatementContext* SolidityParser::doWhileStatement() {
  DoWhileStatementContext *_localctx = _tracker.createInstance<DoWhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 92, SolidityParser::RuleDoWhileStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(589);
    match(SolidityParser::T__44);
    setState(590);
    statement();
    setState(591);
    match(SolidityParser::T__42);
    setState(592);
    match(SolidityParser::T__20);
    setState(593);
    expression(0);
    setState(594);
    match(SolidityParser::T__21);
    setState(595);
    match(SolidityParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContinueStatementContext ------------------------------------------------------------------

SolidityParser::ContinueStatementContext::ContinueStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SolidityParser::ContinueStatementContext::ContinueKeyword() {
  return getToken(SolidityParser::ContinueKeyword, 0);
}


size_t SolidityParser::ContinueStatementContext::getRuleIndex() const {
  return SolidityParser::RuleContinueStatement;
}


antlrcpp::Any SolidityParser::ContinueStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitContinueStatement(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::ContinueStatementContext* SolidityParser::continueStatement() {
  ContinueStatementContext *_localctx = _tracker.createInstance<ContinueStatementContext>(_ctx, getState());
  enterRule(_localctx, 94, SolidityParser::RuleContinueStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(597);
    match(SolidityParser::ContinueKeyword);
    setState(598);
    match(SolidityParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakStatementContext ------------------------------------------------------------------

SolidityParser::BreakStatementContext::BreakStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SolidityParser::BreakStatementContext::BreakKeyword() {
  return getToken(SolidityParser::BreakKeyword, 0);
}


size_t SolidityParser::BreakStatementContext::getRuleIndex() const {
  return SolidityParser::RuleBreakStatement;
}


antlrcpp::Any SolidityParser::BreakStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitBreakStatement(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::BreakStatementContext* SolidityParser::breakStatement() {
  BreakStatementContext *_localctx = _tracker.createInstance<BreakStatementContext>(_ctx, getState());
  enterRule(_localctx, 96, SolidityParser::RuleBreakStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(600);
    match(SolidityParser::BreakKeyword);
    setState(601);
    match(SolidityParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

SolidityParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::ExpressionContext* SolidityParser::ReturnStatementContext::expression() {
  return getRuleContext<SolidityParser::ExpressionContext>(0);
}


size_t SolidityParser::ReturnStatementContext::getRuleIndex() const {
  return SolidityParser::RuleReturnStatement;
}


antlrcpp::Any SolidityParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::ReturnStatementContext* SolidityParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 98, SolidityParser::RuleReturnStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(603);
    match(SolidityParser::T__45);
    setState(605);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SolidityParser::T__3)
      | (1ULL << SolidityParser::T__12)
      | (1ULL << SolidityParser::T__20)
      | (1ULL << SolidityParser::T__31)
      | (1ULL << SolidityParser::T__33)
      | (1ULL << SolidityParser::T__39)
      | (1ULL << SolidityParser::T__48)
      | (1ULL << SolidityParser::T__49)
      | (1ULL << SolidityParser::T__50)
      | (1ULL << SolidityParser::T__51)
      | (1ULL << SolidityParser::T__52)
      | (1ULL << SolidityParser::T__53)
      | (1ULL << SolidityParser::T__54)
      | (1ULL << SolidityParser::T__55)
      | (1ULL << SolidityParser::T__56)
      | (1ULL << SolidityParser::T__57)
      | (1ULL << SolidityParser::T__58)
      | (1ULL << SolidityParser::T__59))) != 0) || ((((_la - 93) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 93)) & ((1ULL << (SolidityParser::Int - 93))
      | (1ULL << (SolidityParser::Uint - 93))
      | (1ULL << (SolidityParser::Byte - 93))
      | (1ULL << (SolidityParser::Fixed - 93))
      | (1ULL << (SolidityParser::Ufixed - 93))
      | (1ULL << (SolidityParser::BooleanLiteral - 93))
      | (1ULL << (SolidityParser::DecimalNumber - 93))
      | (1ULL << (SolidityParser::HexNumber - 93))
      | (1ULL << (SolidityParser::HexLiteral - 93))
      | (1ULL << (SolidityParser::TypeKeyword - 93))
      | (1ULL << (SolidityParser::Identifier - 93))
      | (1ULL << (SolidityParser::StringLiteral - 93)))) != 0)) {
      setState(604);
      expression(0);
    }
    setState(607);
    match(SolidityParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThrowStatementContext ------------------------------------------------------------------

SolidityParser::ThrowStatementContext::ThrowStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SolidityParser::ThrowStatementContext::getRuleIndex() const {
  return SolidityParser::RuleThrowStatement;
}


antlrcpp::Any SolidityParser::ThrowStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitThrowStatement(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::ThrowStatementContext* SolidityParser::throwStatement() {
  ThrowStatementContext *_localctx = _tracker.createInstance<ThrowStatementContext>(_ctx, getState());
  enterRule(_localctx, 100, SolidityParser::RuleThrowStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(609);
    match(SolidityParser::T__46);
    setState(610);
    match(SolidityParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmitStatementContext ------------------------------------------------------------------

SolidityParser::EmitStatementContext::EmitStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::FunctionCallContext* SolidityParser::EmitStatementContext::functionCall() {
  return getRuleContext<SolidityParser::FunctionCallContext>(0);
}


size_t SolidityParser::EmitStatementContext::getRuleIndex() const {
  return SolidityParser::RuleEmitStatement;
}


antlrcpp::Any SolidityParser::EmitStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitEmitStatement(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::EmitStatementContext* SolidityParser::emitStatement() {
  EmitStatementContext *_localctx = _tracker.createInstance<EmitStatementContext>(_ctx, getState());
  enterRule(_localctx, 102, SolidityParser::RuleEmitStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(612);
    match(SolidityParser::T__47);
    setState(613);
    functionCall();
    setState(614);
    match(SolidityParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationStatementContext ------------------------------------------------------------------

SolidityParser::VariableDeclarationStatementContext::VariableDeclarationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::IdentifierListContext* SolidityParser::VariableDeclarationStatementContext::identifierList() {
  return getRuleContext<SolidityParser::IdentifierListContext>(0);
}

SolidityParser::VariableDeclarationContext* SolidityParser::VariableDeclarationStatementContext::variableDeclaration() {
  return getRuleContext<SolidityParser::VariableDeclarationContext>(0);
}

SolidityParser::VariableDeclarationListContext* SolidityParser::VariableDeclarationStatementContext::variableDeclarationList() {
  return getRuleContext<SolidityParser::VariableDeclarationListContext>(0);
}

SolidityParser::ExpressionContext* SolidityParser::VariableDeclarationStatementContext::expression() {
  return getRuleContext<SolidityParser::ExpressionContext>(0);
}


size_t SolidityParser::VariableDeclarationStatementContext::getRuleIndex() const {
  return SolidityParser::RuleVariableDeclarationStatement;
}


antlrcpp::Any SolidityParser::VariableDeclarationStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitVariableDeclarationStatement(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::VariableDeclarationStatementContext* SolidityParser::variableDeclarationStatement() {
  VariableDeclarationStatementContext *_localctx = _tracker.createInstance<VariableDeclarationStatementContext>(_ctx, getState());
  enterRule(_localctx, 104, SolidityParser::RuleVariableDeclarationStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(623);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx)) {
    case 1: {
      setState(616);
      match(SolidityParser::T__48);
      setState(617);
      identifierList();
      break;
    }

    case 2: {
      setState(618);
      variableDeclaration();
      break;
    }

    case 3: {
      setState(619);
      match(SolidityParser::T__20);
      setState(620);
      variableDeclarationList();
      setState(621);
      match(SolidityParser::T__21);
      break;
    }

    }
    setState(627);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__8) {
      setState(625);
      match(SolidityParser::T__8);
      setState(626);
      expression(0);
    }
    setState(629);
    match(SolidityParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationListContext ------------------------------------------------------------------

SolidityParser::VariableDeclarationListContext::VariableDeclarationListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SolidityParser::VariableDeclarationContext *> SolidityParser::VariableDeclarationListContext::variableDeclaration() {
  return getRuleContexts<SolidityParser::VariableDeclarationContext>();
}

SolidityParser::VariableDeclarationContext* SolidityParser::VariableDeclarationListContext::variableDeclaration(size_t i) {
  return getRuleContext<SolidityParser::VariableDeclarationContext>(i);
}


size_t SolidityParser::VariableDeclarationListContext::getRuleIndex() const {
  return SolidityParser::RuleVariableDeclarationList;
}


antlrcpp::Any SolidityParser::VariableDeclarationListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitVariableDeclarationList(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::VariableDeclarationListContext* SolidityParser::variableDeclarationList() {
  VariableDeclarationListContext *_localctx = _tracker.createInstance<VariableDeclarationListContext>(_ctx, getState());
  enterRule(_localctx, 106, SolidityParser::RuleVariableDeclarationList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(632);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SolidityParser::T__12)
      | (1ULL << SolidityParser::T__27)
      | (1ULL << SolidityParser::T__33)
      | (1ULL << SolidityParser::T__35)
      | (1ULL << SolidityParser::T__39)
      | (1ULL << SolidityParser::T__48)
      | (1ULL << SolidityParser::T__49)
      | (1ULL << SolidityParser::T__50)
      | (1ULL << SolidityParser::T__51))) != 0) || ((((_la - 93) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 93)) & ((1ULL << (SolidityParser::Int - 93))
      | (1ULL << (SolidityParser::Uint - 93))
      | (1ULL << (SolidityParser::Byte - 93))
      | (1ULL << (SolidityParser::Fixed - 93))
      | (1ULL << (SolidityParser::Ufixed - 93))
      | (1ULL << (SolidityParser::Identifier - 93)))) != 0)) {
      setState(631);
      variableDeclaration();
    }
    setState(640);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SolidityParser::T__14) {
      setState(634);
      match(SolidityParser::T__14);
      setState(636);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SolidityParser::T__12)
        | (1ULL << SolidityParser::T__27)
        | (1ULL << SolidityParser::T__33)
        | (1ULL << SolidityParser::T__35)
        | (1ULL << SolidityParser::T__39)
        | (1ULL << SolidityParser::T__48)
        | (1ULL << SolidityParser::T__49)
        | (1ULL << SolidityParser::T__50)
        | (1ULL << SolidityParser::T__51))) != 0) || ((((_la - 93) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 93)) & ((1ULL << (SolidityParser::Int - 93))
        | (1ULL << (SolidityParser::Uint - 93))
        | (1ULL << (SolidityParser::Byte - 93))
        | (1ULL << (SolidityParser::Fixed - 93))
        | (1ULL << (SolidityParser::Ufixed - 93))
        | (1ULL << (SolidityParser::Identifier - 93)))) != 0)) {
        setState(635);
        variableDeclaration();
      }
      setState(642);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierListContext ------------------------------------------------------------------

SolidityParser::IdentifierListContext::IdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SolidityParser::IdentifierContext *> SolidityParser::IdentifierListContext::identifier() {
  return getRuleContexts<SolidityParser::IdentifierContext>();
}

SolidityParser::IdentifierContext* SolidityParser::IdentifierListContext::identifier(size_t i) {
  return getRuleContext<SolidityParser::IdentifierContext>(i);
}


size_t SolidityParser::IdentifierListContext::getRuleIndex() const {
  return SolidityParser::RuleIdentifierList;
}


antlrcpp::Any SolidityParser::IdentifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitIdentifierList(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::IdentifierListContext* SolidityParser::identifierList() {
  IdentifierListContext *_localctx = _tracker.createInstance<IdentifierListContext>(_ctx, getState());
  enterRule(_localctx, 108, SolidityParser::RuleIdentifierList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(643);
    match(SolidityParser::T__20);
    setState(650);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(645);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SolidityParser::T__12

        || _la == SolidityParser::T__39 || _la == SolidityParser::Identifier) {
          setState(644);
          identifier();
        }
        setState(647);
        match(SolidityParser::T__14); 
      }
      setState(652);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx);
    }
    setState(654);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__12

    || _la == SolidityParser::T__39 || _la == SolidityParser::Identifier) {
      setState(653);
      identifier();
    }
    setState(656);
    match(SolidityParser::T__21);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementaryTypeNameContext ------------------------------------------------------------------

SolidityParser::ElementaryTypeNameContext::ElementaryTypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SolidityParser::ElementaryTypeNameContext::Int() {
  return getToken(SolidityParser::Int, 0);
}

tree::TerminalNode* SolidityParser::ElementaryTypeNameContext::Uint() {
  return getToken(SolidityParser::Uint, 0);
}

tree::TerminalNode* SolidityParser::ElementaryTypeNameContext::Byte() {
  return getToken(SolidityParser::Byte, 0);
}

tree::TerminalNode* SolidityParser::ElementaryTypeNameContext::Fixed() {
  return getToken(SolidityParser::Fixed, 0);
}

tree::TerminalNode* SolidityParser::ElementaryTypeNameContext::Ufixed() {
  return getToken(SolidityParser::Ufixed, 0);
}


size_t SolidityParser::ElementaryTypeNameContext::getRuleIndex() const {
  return SolidityParser::RuleElementaryTypeName;
}


antlrcpp::Any SolidityParser::ElementaryTypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitElementaryTypeName(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::ElementaryTypeNameContext* SolidityParser::elementaryTypeName() {
  ElementaryTypeNameContext *_localctx = _tracker.createInstance<ElementaryTypeNameContext>(_ctx, getState());
  enterRule(_localctx, 110, SolidityParser::RuleElementaryTypeName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(658);
    _la = _input->LA(1);
    if (!(((((_la - 34) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 34)) & ((1ULL << (SolidityParser::T__33 - 34))
      | (1ULL << (SolidityParser::T__48 - 34))
      | (1ULL << (SolidityParser::T__49 - 34))
      | (1ULL << (SolidityParser::T__50 - 34))
      | (1ULL << (SolidityParser::T__51 - 34))
      | (1ULL << (SolidityParser::Int - 34))
      | (1ULL << (SolidityParser::Uint - 34))
      | (1ULL << (SolidityParser::Byte - 34))
      | (1ULL << (SolidityParser::Fixed - 34))
      | (1ULL << (SolidityParser::Ufixed - 34)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

SolidityParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::TypeNameContext* SolidityParser::ExpressionContext::typeName() {
  return getRuleContext<SolidityParser::TypeNameContext>(0);
}

std::vector<SolidityParser::ExpressionContext *> SolidityParser::ExpressionContext::expression() {
  return getRuleContexts<SolidityParser::ExpressionContext>();
}

SolidityParser::ExpressionContext* SolidityParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<SolidityParser::ExpressionContext>(i);
}

SolidityParser::PrimaryExpressionContext* SolidityParser::ExpressionContext::primaryExpression() {
  return getRuleContext<SolidityParser::PrimaryExpressionContext>(0);
}

SolidityParser::FunctionCallArgumentsContext* SolidityParser::ExpressionContext::functionCallArguments() {
  return getRuleContext<SolidityParser::FunctionCallArgumentsContext>(0);
}

SolidityParser::IdentifierContext* SolidityParser::ExpressionContext::identifier() {
  return getRuleContext<SolidityParser::IdentifierContext>(0);
}


size_t SolidityParser::ExpressionContext::getRuleIndex() const {
  return SolidityParser::RuleExpression;
}


antlrcpp::Any SolidityParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


SolidityParser::ExpressionContext* SolidityParser::expression() {
   return expression(0);
}

SolidityParser::ExpressionContext* SolidityParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SolidityParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  SolidityParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 112;
  enterRecursionRule(_localctx, 112, SolidityParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(678);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx)) {
    case 1: {
      setState(661);
      match(SolidityParser::T__54);
      setState(662);
      typeName(0);
      break;
    }

    case 2: {
      setState(663);
      match(SolidityParser::T__20);
      setState(664);
      expression(0);
      setState(665);
      match(SolidityParser::T__21);
      break;
    }

    case 3: {
      setState(667);
      _la = _input->LA(1);
      if (!(_la == SolidityParser::T__52

      || _la == SolidityParser::T__53)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(668);
      expression(19);
      break;
    }

    case 4: {
      setState(669);
      _la = _input->LA(1);
      if (!(_la == SolidityParser::T__55

      || _la == SolidityParser::T__56)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(670);
      expression(18);
      break;
    }

    case 5: {
      setState(671);
      _la = _input->LA(1);
      if (!(_la == SolidityParser::T__57

      || _la == SolidityParser::T__58)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(672);
      expression(17);
      break;
    }

    case 6: {
      setState(673);
      match(SolidityParser::T__59);
      setState(674);
      expression(16);
      break;
    }

    case 7: {
      setState(675);
      match(SolidityParser::T__3);
      setState(676);
      expression(15);
      break;
    }

    case 8: {
      setState(677);
      primaryExpression();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(739);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(737);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(680);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(681);
          match(SolidityParser::T__60);
          setState(682);
          expression(15);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(683);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(684);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << SolidityParser::T__11)
            | (1ULL << SolidityParser::T__61)
            | (1ULL << SolidityParser::T__62))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(685);
          expression(14);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(686);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(687);
          _la = _input->LA(1);
          if (!(_la == SolidityParser::T__55

          || _la == SolidityParser::T__56)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(688);
          expression(13);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(689);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(690);
          _la = _input->LA(1);
          if (!(_la == SolidityParser::T__63

          || _la == SolidityParser::T__64)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(691);
          expression(12);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(692);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(693);
          match(SolidityParser::T__65);
          setState(694);
          expression(11);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(695);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(696);
          match(SolidityParser::T__2);
          setState(697);
          expression(10);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(698);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(699);
          match(SolidityParser::T__66);
          setState(700);
          expression(9);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(701);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(702);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << SolidityParser::T__4)
            | (1ULL << SolidityParser::T__5)
            | (1ULL << SolidityParser::T__6)
            | (1ULL << SolidityParser::T__7))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(703);
          expression(8);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(704);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(705);
          _la = _input->LA(1);
          if (!(_la == SolidityParser::T__67

          || _la == SolidityParser::T__68)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(706);
          expression(7);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(707);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(708);
          match(SolidityParser::T__69);
          setState(709);
          expression(6);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(710);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(711);
          match(SolidityParser::T__70);
          setState(712);
          expression(5);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(713);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(714);
          match(SolidityParser::T__71);
          setState(715);
          expression(0);
          setState(716);
          match(SolidityParser::T__72);
          setState(717);
          expression(4);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(719);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(720);
          _la = _input->LA(1);
          if (!(_la == SolidityParser::T__8 || ((((_la - 74) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 74)) & ((1ULL << (SolidityParser::T__73 - 74))
            | (1ULL << (SolidityParser::T__74 - 74))
            | (1ULL << (SolidityParser::T__75 - 74))
            | (1ULL << (SolidityParser::T__76 - 74))
            | (1ULL << (SolidityParser::T__77 - 74))
            | (1ULL << (SolidityParser::T__78 - 74))
            | (1ULL << (SolidityParser::T__79 - 74))
            | (1ULL << (SolidityParser::T__80 - 74))
            | (1ULL << (SolidityParser::T__81 - 74))
            | (1ULL << (SolidityParser::T__82 - 74)))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(721);
          expression(3);
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(722);

          if (!(precpred(_ctx, 25))) throw FailedPredicateException(this, "precpred(_ctx, 25)");
          setState(723);
          _la = _input->LA(1);
          if (!(_la == SolidityParser::T__52

          || _la == SolidityParser::T__53)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        case 15: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(724);

          if (!(precpred(_ctx, 23))) throw FailedPredicateException(this, "precpred(_ctx, 23)");
          setState(725);
          match(SolidityParser::T__31);
          setState(726);
          expression(0);
          setState(727);
          match(SolidityParser::T__32);
          break;
        }

        case 16: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(729);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(730);
          match(SolidityParser::T__20);
          setState(731);
          functionCallArguments();
          setState(732);
          match(SolidityParser::T__21);
          break;
        }

        case 17: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(734);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(735);
          match(SolidityParser::T__34);
          setState(736);
          identifier();
          break;
        }

        } 
      }
      setState(741);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PrimaryExpressionContext ------------------------------------------------------------------

SolidityParser::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SolidityParser::PrimaryExpressionContext::BooleanLiteral() {
  return getToken(SolidityParser::BooleanLiteral, 0);
}

SolidityParser::NumberLiteralContext* SolidityParser::PrimaryExpressionContext::numberLiteral() {
  return getRuleContext<SolidityParser::NumberLiteralContext>(0);
}

tree::TerminalNode* SolidityParser::PrimaryExpressionContext::HexLiteral() {
  return getToken(SolidityParser::HexLiteral, 0);
}

tree::TerminalNode* SolidityParser::PrimaryExpressionContext::StringLiteral() {
  return getToken(SolidityParser::StringLiteral, 0);
}

SolidityParser::IdentifierContext* SolidityParser::PrimaryExpressionContext::identifier() {
  return getRuleContext<SolidityParser::IdentifierContext>(0);
}

tree::TerminalNode* SolidityParser::PrimaryExpressionContext::TypeKeyword() {
  return getToken(SolidityParser::TypeKeyword, 0);
}

SolidityParser::TupleExpressionContext* SolidityParser::PrimaryExpressionContext::tupleExpression() {
  return getRuleContext<SolidityParser::TupleExpressionContext>(0);
}

SolidityParser::TypeNameExpressionContext* SolidityParser::PrimaryExpressionContext::typeNameExpression() {
  return getRuleContext<SolidityParser::TypeNameExpressionContext>(0);
}


size_t SolidityParser::PrimaryExpressionContext::getRuleIndex() const {
  return SolidityParser::RulePrimaryExpression;
}


antlrcpp::Any SolidityParser::PrimaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitPrimaryExpression(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::PrimaryExpressionContext* SolidityParser::primaryExpression() {
  PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 114, SolidityParser::RulePrimaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(758);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(742);
      match(SolidityParser::BooleanLiteral);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(743);
      numberLiteral();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(744);
      match(SolidityParser::HexLiteral);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(745);
      match(SolidityParser::StringLiteral);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(746);
      identifier();
      setState(749);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
      case 1: {
        setState(747);
        match(SolidityParser::T__31);
        setState(748);
        match(SolidityParser::T__32);
        break;
      }

      }
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(751);
      match(SolidityParser::TypeKeyword);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(752);
      tupleExpression();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(753);
      typeNameExpression();
      setState(756);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx)) {
      case 1: {
        setState(754);
        match(SolidityParser::T__31);
        setState(755);
        match(SolidityParser::T__32);
        break;
      }

      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionListContext ------------------------------------------------------------------

SolidityParser::ExpressionListContext::ExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SolidityParser::ExpressionContext *> SolidityParser::ExpressionListContext::expression() {
  return getRuleContexts<SolidityParser::ExpressionContext>();
}

SolidityParser::ExpressionContext* SolidityParser::ExpressionListContext::expression(size_t i) {
  return getRuleContext<SolidityParser::ExpressionContext>(i);
}


size_t SolidityParser::ExpressionListContext::getRuleIndex() const {
  return SolidityParser::RuleExpressionList;
}


antlrcpp::Any SolidityParser::ExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitExpressionList(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::ExpressionListContext* SolidityParser::expressionList() {
  ExpressionListContext *_localctx = _tracker.createInstance<ExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 116, SolidityParser::RuleExpressionList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(760);
    expression(0);
    setState(765);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SolidityParser::T__14) {
      setState(761);
      match(SolidityParser::T__14);
      setState(762);
      expression(0);
      setState(767);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameValueListContext ------------------------------------------------------------------

SolidityParser::NameValueListContext::NameValueListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SolidityParser::NameValueContext *> SolidityParser::NameValueListContext::nameValue() {
  return getRuleContexts<SolidityParser::NameValueContext>();
}

SolidityParser::NameValueContext* SolidityParser::NameValueListContext::nameValue(size_t i) {
  return getRuleContext<SolidityParser::NameValueContext>(i);
}


size_t SolidityParser::NameValueListContext::getRuleIndex() const {
  return SolidityParser::RuleNameValueList;
}


antlrcpp::Any SolidityParser::NameValueListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitNameValueList(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::NameValueListContext* SolidityParser::nameValueList() {
  NameValueListContext *_localctx = _tracker.createInstance<NameValueListContext>(_ctx, getState());
  enterRule(_localctx, 118, SolidityParser::RuleNameValueList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(768);
    nameValue();
    setState(773);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(769);
        match(SolidityParser::T__14);
        setState(770);
        nameValue(); 
      }
      setState(775);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx);
    }
    setState(777);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__14) {
      setState(776);
      match(SolidityParser::T__14);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameValueContext ------------------------------------------------------------------

SolidityParser::NameValueContext::NameValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::IdentifierContext* SolidityParser::NameValueContext::identifier() {
  return getRuleContext<SolidityParser::IdentifierContext>(0);
}

SolidityParser::ExpressionContext* SolidityParser::NameValueContext::expression() {
  return getRuleContext<SolidityParser::ExpressionContext>(0);
}


size_t SolidityParser::NameValueContext::getRuleIndex() const {
  return SolidityParser::RuleNameValue;
}


antlrcpp::Any SolidityParser::NameValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitNameValue(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::NameValueContext* SolidityParser::nameValue() {
  NameValueContext *_localctx = _tracker.createInstance<NameValueContext>(_ctx, getState());
  enterRule(_localctx, 120, SolidityParser::RuleNameValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(779);
    identifier();
    setState(780);
    match(SolidityParser::T__72);
    setState(781);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallArgumentsContext ------------------------------------------------------------------

SolidityParser::FunctionCallArgumentsContext::FunctionCallArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::NameValueListContext* SolidityParser::FunctionCallArgumentsContext::nameValueList() {
  return getRuleContext<SolidityParser::NameValueListContext>(0);
}

SolidityParser::ExpressionListContext* SolidityParser::FunctionCallArgumentsContext::expressionList() {
  return getRuleContext<SolidityParser::ExpressionListContext>(0);
}


size_t SolidityParser::FunctionCallArgumentsContext::getRuleIndex() const {
  return SolidityParser::RuleFunctionCallArguments;
}


antlrcpp::Any SolidityParser::FunctionCallArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitFunctionCallArguments(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::FunctionCallArgumentsContext* SolidityParser::functionCallArguments() {
  FunctionCallArgumentsContext *_localctx = _tracker.createInstance<FunctionCallArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 122, SolidityParser::RuleFunctionCallArguments);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(791);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SolidityParser::T__13: {
        enterOuterAlt(_localctx, 1);
        setState(783);
        match(SolidityParser::T__13);
        setState(785);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SolidityParser::T__12

        || _la == SolidityParser::T__39 || _la == SolidityParser::Identifier) {
          setState(784);
          nameValueList();
        }
        setState(787);
        match(SolidityParser::T__15);
        break;
      }

      case SolidityParser::T__3:
      case SolidityParser::T__12:
      case SolidityParser::T__20:
      case SolidityParser::T__21:
      case SolidityParser::T__31:
      case SolidityParser::T__33:
      case SolidityParser::T__39:
      case SolidityParser::T__48:
      case SolidityParser::T__49:
      case SolidityParser::T__50:
      case SolidityParser::T__51:
      case SolidityParser::T__52:
      case SolidityParser::T__53:
      case SolidityParser::T__54:
      case SolidityParser::T__55:
      case SolidityParser::T__56:
      case SolidityParser::T__57:
      case SolidityParser::T__58:
      case SolidityParser::T__59:
      case SolidityParser::Int:
      case SolidityParser::Uint:
      case SolidityParser::Byte:
      case SolidityParser::Fixed:
      case SolidityParser::Ufixed:
      case SolidityParser::BooleanLiteral:
      case SolidityParser::DecimalNumber:
      case SolidityParser::HexNumber:
      case SolidityParser::HexLiteral:
      case SolidityParser::TypeKeyword:
      case SolidityParser::Identifier:
      case SolidityParser::StringLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(789);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << SolidityParser::T__3)
          | (1ULL << SolidityParser::T__12)
          | (1ULL << SolidityParser::T__20)
          | (1ULL << SolidityParser::T__31)
          | (1ULL << SolidityParser::T__33)
          | (1ULL << SolidityParser::T__39)
          | (1ULL << SolidityParser::T__48)
          | (1ULL << SolidityParser::T__49)
          | (1ULL << SolidityParser::T__50)
          | (1ULL << SolidityParser::T__51)
          | (1ULL << SolidityParser::T__52)
          | (1ULL << SolidityParser::T__53)
          | (1ULL << SolidityParser::T__54)
          | (1ULL << SolidityParser::T__55)
          | (1ULL << SolidityParser::T__56)
          | (1ULL << SolidityParser::T__57)
          | (1ULL << SolidityParser::T__58)
          | (1ULL << SolidityParser::T__59))) != 0) || ((((_la - 93) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 93)) & ((1ULL << (SolidityParser::Int - 93))
          | (1ULL << (SolidityParser::Uint - 93))
          | (1ULL << (SolidityParser::Byte - 93))
          | (1ULL << (SolidityParser::Fixed - 93))
          | (1ULL << (SolidityParser::Ufixed - 93))
          | (1ULL << (SolidityParser::BooleanLiteral - 93))
          | (1ULL << (SolidityParser::DecimalNumber - 93))
          | (1ULL << (SolidityParser::HexNumber - 93))
          | (1ULL << (SolidityParser::HexLiteral - 93))
          | (1ULL << (SolidityParser::TypeKeyword - 93))
          | (1ULL << (SolidityParser::Identifier - 93))
          | (1ULL << (SolidityParser::StringLiteral - 93)))) != 0)) {
          setState(788);
          expressionList();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

SolidityParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::ExpressionContext* SolidityParser::FunctionCallContext::expression() {
  return getRuleContext<SolidityParser::ExpressionContext>(0);
}

SolidityParser::FunctionCallArgumentsContext* SolidityParser::FunctionCallContext::functionCallArguments() {
  return getRuleContext<SolidityParser::FunctionCallArgumentsContext>(0);
}


size_t SolidityParser::FunctionCallContext::getRuleIndex() const {
  return SolidityParser::RuleFunctionCall;
}


antlrcpp::Any SolidityParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::FunctionCallContext* SolidityParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 124, SolidityParser::RuleFunctionCall);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(793);
    expression(0);
    setState(794);
    match(SolidityParser::T__20);
    setState(795);
    functionCallArguments();
    setState(796);
    match(SolidityParser::T__21);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblyBlockContext ------------------------------------------------------------------

SolidityParser::AssemblyBlockContext::AssemblyBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SolidityParser::AssemblyItemContext *> SolidityParser::AssemblyBlockContext::assemblyItem() {
  return getRuleContexts<SolidityParser::AssemblyItemContext>();
}

SolidityParser::AssemblyItemContext* SolidityParser::AssemblyBlockContext::assemblyItem(size_t i) {
  return getRuleContext<SolidityParser::AssemblyItemContext>(i);
}


size_t SolidityParser::AssemblyBlockContext::getRuleIndex() const {
  return SolidityParser::RuleAssemblyBlock;
}


antlrcpp::Any SolidityParser::AssemblyBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitAssemblyBlock(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::AssemblyBlockContext* SolidityParser::assemblyBlock() {
  AssemblyBlockContext *_localctx = _tracker.createInstance<AssemblyBlockContext>(_ctx, getState());
  enterRule(_localctx, 126, SolidityParser::RuleAssemblyBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(798);
    match(SolidityParser::T__13);
    setState(802);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SolidityParser::T__12)
      | (1ULL << SolidityParser::T__13)
      | (1ULL << SolidityParser::T__20)
      | (1ULL << SolidityParser::T__23)
      | (1ULL << SolidityParser::T__27)
      | (1ULL << SolidityParser::T__33)
      | (1ULL << SolidityParser::T__39)
      | (1ULL << SolidityParser::T__40)
      | (1ULL << SolidityParser::T__43)
      | (1ULL << SolidityParser::T__45)
      | (1ULL << SolidityParser::T__51))) != 0) || ((((_la - 84) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 84)) & ((1ULL << (SolidityParser::T__83 - 84))
      | (1ULL << (SolidityParser::T__85 - 84))
      | (1ULL << (SolidityParser::T__86 - 84))
      | (1ULL << (SolidityParser::DecimalNumber - 84))
      | (1ULL << (SolidityParser::HexNumber - 84))
      | (1ULL << (SolidityParser::HexLiteral - 84))
      | (1ULL << (SolidityParser::BreakKeyword - 84))
      | (1ULL << (SolidityParser::ContinueKeyword - 84))
      | (1ULL << (SolidityParser::Identifier - 84))
      | (1ULL << (SolidityParser::StringLiteral - 84)))) != 0)) {
      setState(799);
      assemblyItem();
      setState(804);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(805);
    match(SolidityParser::T__15);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblyItemContext ------------------------------------------------------------------

SolidityParser::AssemblyItemContext::AssemblyItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::IdentifierContext* SolidityParser::AssemblyItemContext::identifier() {
  return getRuleContext<SolidityParser::IdentifierContext>(0);
}

SolidityParser::AssemblyBlockContext* SolidityParser::AssemblyItemContext::assemblyBlock() {
  return getRuleContext<SolidityParser::AssemblyBlockContext>(0);
}

SolidityParser::AssemblyExpressionContext* SolidityParser::AssemblyItemContext::assemblyExpression() {
  return getRuleContext<SolidityParser::AssemblyExpressionContext>(0);
}

SolidityParser::AssemblyLocalDefinitionContext* SolidityParser::AssemblyItemContext::assemblyLocalDefinition() {
  return getRuleContext<SolidityParser::AssemblyLocalDefinitionContext>(0);
}

SolidityParser::AssemblyAssignmentContext* SolidityParser::AssemblyItemContext::assemblyAssignment() {
  return getRuleContext<SolidityParser::AssemblyAssignmentContext>(0);
}

SolidityParser::AssemblyStackAssignmentContext* SolidityParser::AssemblyItemContext::assemblyStackAssignment() {
  return getRuleContext<SolidityParser::AssemblyStackAssignmentContext>(0);
}

SolidityParser::LabelDefinitionContext* SolidityParser::AssemblyItemContext::labelDefinition() {
  return getRuleContext<SolidityParser::LabelDefinitionContext>(0);
}

SolidityParser::AssemblySwitchContext* SolidityParser::AssemblyItemContext::assemblySwitch() {
  return getRuleContext<SolidityParser::AssemblySwitchContext>(0);
}

SolidityParser::AssemblyFunctionDefinitionContext* SolidityParser::AssemblyItemContext::assemblyFunctionDefinition() {
  return getRuleContext<SolidityParser::AssemblyFunctionDefinitionContext>(0);
}

SolidityParser::AssemblyForContext* SolidityParser::AssemblyItemContext::assemblyFor() {
  return getRuleContext<SolidityParser::AssemblyForContext>(0);
}

SolidityParser::AssemblyIfContext* SolidityParser::AssemblyItemContext::assemblyIf() {
  return getRuleContext<SolidityParser::AssemblyIfContext>(0);
}

tree::TerminalNode* SolidityParser::AssemblyItemContext::BreakKeyword() {
  return getToken(SolidityParser::BreakKeyword, 0);
}

tree::TerminalNode* SolidityParser::AssemblyItemContext::ContinueKeyword() {
  return getToken(SolidityParser::ContinueKeyword, 0);
}

SolidityParser::SubAssemblyContext* SolidityParser::AssemblyItemContext::subAssembly() {
  return getRuleContext<SolidityParser::SubAssemblyContext>(0);
}

SolidityParser::NumberLiteralContext* SolidityParser::AssemblyItemContext::numberLiteral() {
  return getRuleContext<SolidityParser::NumberLiteralContext>(0);
}

tree::TerminalNode* SolidityParser::AssemblyItemContext::StringLiteral() {
  return getToken(SolidityParser::StringLiteral, 0);
}

tree::TerminalNode* SolidityParser::AssemblyItemContext::HexLiteral() {
  return getToken(SolidityParser::HexLiteral, 0);
}


size_t SolidityParser::AssemblyItemContext::getRuleIndex() const {
  return SolidityParser::RuleAssemblyItem;
}


antlrcpp::Any SolidityParser::AssemblyItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitAssemblyItem(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::AssemblyItemContext* SolidityParser::assemblyItem() {
  AssemblyItemContext *_localctx = _tracker.createInstance<AssemblyItemContext>(_ctx, getState());
  enterRule(_localctx, 128, SolidityParser::RuleAssemblyItem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(824);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 85, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(807);
      identifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(808);
      assemblyBlock();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(809);
      assemblyExpression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(810);
      assemblyLocalDefinition();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(811);
      assemblyAssignment();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(812);
      assemblyStackAssignment();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(813);
      labelDefinition();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(814);
      assemblySwitch();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(815);
      assemblyFunctionDefinition();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(816);
      assemblyFor();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(817);
      assemblyIf();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(818);
      match(SolidityParser::BreakKeyword);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(819);
      match(SolidityParser::ContinueKeyword);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(820);
      subAssembly();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(821);
      numberLiteral();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(822);
      match(SolidityParser::StringLiteral);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(823);
      match(SolidityParser::HexLiteral);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblyExpressionContext ------------------------------------------------------------------

SolidityParser::AssemblyExpressionContext::AssemblyExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::AssemblyCallContext* SolidityParser::AssemblyExpressionContext::assemblyCall() {
  return getRuleContext<SolidityParser::AssemblyCallContext>(0);
}

SolidityParser::AssemblyLiteralContext* SolidityParser::AssemblyExpressionContext::assemblyLiteral() {
  return getRuleContext<SolidityParser::AssemblyLiteralContext>(0);
}


size_t SolidityParser::AssemblyExpressionContext::getRuleIndex() const {
  return SolidityParser::RuleAssemblyExpression;
}


antlrcpp::Any SolidityParser::AssemblyExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitAssemblyExpression(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::AssemblyExpressionContext* SolidityParser::assemblyExpression() {
  AssemblyExpressionContext *_localctx = _tracker.createInstance<AssemblyExpressionContext>(_ctx, getState());
  enterRule(_localctx, 130, SolidityParser::RuleAssemblyExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(828);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SolidityParser::T__12:
      case SolidityParser::T__33:
      case SolidityParser::T__39:
      case SolidityParser::T__45:
      case SolidityParser::T__51:
      case SolidityParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(826);
        assemblyCall();
        break;
      }

      case SolidityParser::DecimalNumber:
      case SolidityParser::HexNumber:
      case SolidityParser::HexLiteral:
      case SolidityParser::StringLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(827);
        assemblyLiteral();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblyCallContext ------------------------------------------------------------------

SolidityParser::AssemblyCallContext::AssemblyCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::IdentifierContext* SolidityParser::AssemblyCallContext::identifier() {
  return getRuleContext<SolidityParser::IdentifierContext>(0);
}

std::vector<SolidityParser::AssemblyExpressionContext *> SolidityParser::AssemblyCallContext::assemblyExpression() {
  return getRuleContexts<SolidityParser::AssemblyExpressionContext>();
}

SolidityParser::AssemblyExpressionContext* SolidityParser::AssemblyCallContext::assemblyExpression(size_t i) {
  return getRuleContext<SolidityParser::AssemblyExpressionContext>(i);
}


size_t SolidityParser::AssemblyCallContext::getRuleIndex() const {
  return SolidityParser::RuleAssemblyCall;
}


antlrcpp::Any SolidityParser::AssemblyCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitAssemblyCall(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::AssemblyCallContext* SolidityParser::assemblyCall() {
  AssemblyCallContext *_localctx = _tracker.createInstance<AssemblyCallContext>(_ctx, getState());
  enterRule(_localctx, 132, SolidityParser::RuleAssemblyCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(834);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SolidityParser::T__45: {
        setState(830);
        match(SolidityParser::T__45);
        break;
      }

      case SolidityParser::T__33: {
        setState(831);
        match(SolidityParser::T__33);
        break;
      }

      case SolidityParser::T__51: {
        setState(832);
        match(SolidityParser::T__51);
        break;
      }

      case SolidityParser::T__12:
      case SolidityParser::T__39:
      case SolidityParser::Identifier: {
        setState(833);
        identifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(848);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 90, _ctx)) {
    case 1: {
      setState(836);
      match(SolidityParser::T__20);
      setState(838);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SolidityParser::T__12)
        | (1ULL << SolidityParser::T__33)
        | (1ULL << SolidityParser::T__39)
        | (1ULL << SolidityParser::T__45)
        | (1ULL << SolidityParser::T__51))) != 0) || ((((_la - 100) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 100)) & ((1ULL << (SolidityParser::DecimalNumber - 100))
        | (1ULL << (SolidityParser::HexNumber - 100))
        | (1ULL << (SolidityParser::HexLiteral - 100))
        | (1ULL << (SolidityParser::Identifier - 100))
        | (1ULL << (SolidityParser::StringLiteral - 100)))) != 0)) {
        setState(837);
        assemblyExpression();
      }
      setState(844);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SolidityParser::T__14) {
        setState(840);
        match(SolidityParser::T__14);
        setState(841);
        assemblyExpression();
        setState(846);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(847);
      match(SolidityParser::T__21);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblyLocalDefinitionContext ------------------------------------------------------------------

SolidityParser::AssemblyLocalDefinitionContext::AssemblyLocalDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::AssemblyIdentifierOrListContext* SolidityParser::AssemblyLocalDefinitionContext::assemblyIdentifierOrList() {
  return getRuleContext<SolidityParser::AssemblyIdentifierOrListContext>(0);
}

SolidityParser::AssemblyExpressionContext* SolidityParser::AssemblyLocalDefinitionContext::assemblyExpression() {
  return getRuleContext<SolidityParser::AssemblyExpressionContext>(0);
}


size_t SolidityParser::AssemblyLocalDefinitionContext::getRuleIndex() const {
  return SolidityParser::RuleAssemblyLocalDefinition;
}


antlrcpp::Any SolidityParser::AssemblyLocalDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitAssemblyLocalDefinition(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::AssemblyLocalDefinitionContext* SolidityParser::assemblyLocalDefinition() {
  AssemblyLocalDefinitionContext *_localctx = _tracker.createInstance<AssemblyLocalDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 134, SolidityParser::RuleAssemblyLocalDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(850);
    match(SolidityParser::T__83);
    setState(851);
    assemblyIdentifierOrList();
    setState(854);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__84) {
      setState(852);
      match(SolidityParser::T__84);
      setState(853);
      assemblyExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblyAssignmentContext ------------------------------------------------------------------

SolidityParser::AssemblyAssignmentContext::AssemblyAssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::AssemblyIdentifierOrListContext* SolidityParser::AssemblyAssignmentContext::assemblyIdentifierOrList() {
  return getRuleContext<SolidityParser::AssemblyIdentifierOrListContext>(0);
}

SolidityParser::AssemblyExpressionContext* SolidityParser::AssemblyAssignmentContext::assemblyExpression() {
  return getRuleContext<SolidityParser::AssemblyExpressionContext>(0);
}


size_t SolidityParser::AssemblyAssignmentContext::getRuleIndex() const {
  return SolidityParser::RuleAssemblyAssignment;
}


antlrcpp::Any SolidityParser::AssemblyAssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitAssemblyAssignment(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::AssemblyAssignmentContext* SolidityParser::assemblyAssignment() {
  AssemblyAssignmentContext *_localctx = _tracker.createInstance<AssemblyAssignmentContext>(_ctx, getState());
  enterRule(_localctx, 136, SolidityParser::RuleAssemblyAssignment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(856);
    assemblyIdentifierOrList();
    setState(857);
    match(SolidityParser::T__84);
    setState(858);
    assemblyExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblyIdentifierOrListContext ------------------------------------------------------------------

SolidityParser::AssemblyIdentifierOrListContext::AssemblyIdentifierOrListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::IdentifierContext* SolidityParser::AssemblyIdentifierOrListContext::identifier() {
  return getRuleContext<SolidityParser::IdentifierContext>(0);
}

SolidityParser::AssemblyIdentifierListContext* SolidityParser::AssemblyIdentifierOrListContext::assemblyIdentifierList() {
  return getRuleContext<SolidityParser::AssemblyIdentifierListContext>(0);
}


size_t SolidityParser::AssemblyIdentifierOrListContext::getRuleIndex() const {
  return SolidityParser::RuleAssemblyIdentifierOrList;
}


antlrcpp::Any SolidityParser::AssemblyIdentifierOrListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitAssemblyIdentifierOrList(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::AssemblyIdentifierOrListContext* SolidityParser::assemblyIdentifierOrList() {
  AssemblyIdentifierOrListContext *_localctx = _tracker.createInstance<AssemblyIdentifierOrListContext>(_ctx, getState());
  enterRule(_localctx, 138, SolidityParser::RuleAssemblyIdentifierOrList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(865);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SolidityParser::T__12:
      case SolidityParser::T__39:
      case SolidityParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(860);
        identifier();
        break;
      }

      case SolidityParser::T__20: {
        enterOuterAlt(_localctx, 2);
        setState(861);
        match(SolidityParser::T__20);
        setState(862);
        assemblyIdentifierList();
        setState(863);
        match(SolidityParser::T__21);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblyIdentifierListContext ------------------------------------------------------------------

SolidityParser::AssemblyIdentifierListContext::AssemblyIdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SolidityParser::IdentifierContext *> SolidityParser::AssemblyIdentifierListContext::identifier() {
  return getRuleContexts<SolidityParser::IdentifierContext>();
}

SolidityParser::IdentifierContext* SolidityParser::AssemblyIdentifierListContext::identifier(size_t i) {
  return getRuleContext<SolidityParser::IdentifierContext>(i);
}


size_t SolidityParser::AssemblyIdentifierListContext::getRuleIndex() const {
  return SolidityParser::RuleAssemblyIdentifierList;
}


antlrcpp::Any SolidityParser::AssemblyIdentifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitAssemblyIdentifierList(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::AssemblyIdentifierListContext* SolidityParser::assemblyIdentifierList() {
  AssemblyIdentifierListContext *_localctx = _tracker.createInstance<AssemblyIdentifierListContext>(_ctx, getState());
  enterRule(_localctx, 140, SolidityParser::RuleAssemblyIdentifierList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(867);
    identifier();
    setState(872);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SolidityParser::T__14) {
      setState(868);
      match(SolidityParser::T__14);
      setState(869);
      identifier();
      setState(874);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblyStackAssignmentContext ------------------------------------------------------------------

SolidityParser::AssemblyStackAssignmentContext::AssemblyStackAssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::IdentifierContext* SolidityParser::AssemblyStackAssignmentContext::identifier() {
  return getRuleContext<SolidityParser::IdentifierContext>(0);
}


size_t SolidityParser::AssemblyStackAssignmentContext::getRuleIndex() const {
  return SolidityParser::RuleAssemblyStackAssignment;
}


antlrcpp::Any SolidityParser::AssemblyStackAssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitAssemblyStackAssignment(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::AssemblyStackAssignmentContext* SolidityParser::assemblyStackAssignment() {
  AssemblyStackAssignmentContext *_localctx = _tracker.createInstance<AssemblyStackAssignmentContext>(_ctx, getState());
  enterRule(_localctx, 142, SolidityParser::RuleAssemblyStackAssignment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(875);
    match(SolidityParser::T__85);
    setState(876);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelDefinitionContext ------------------------------------------------------------------

SolidityParser::LabelDefinitionContext::LabelDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::IdentifierContext* SolidityParser::LabelDefinitionContext::identifier() {
  return getRuleContext<SolidityParser::IdentifierContext>(0);
}


size_t SolidityParser::LabelDefinitionContext::getRuleIndex() const {
  return SolidityParser::RuleLabelDefinition;
}


antlrcpp::Any SolidityParser::LabelDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitLabelDefinition(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::LabelDefinitionContext* SolidityParser::labelDefinition() {
  LabelDefinitionContext *_localctx = _tracker.createInstance<LabelDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 144, SolidityParser::RuleLabelDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(878);
    identifier();
    setState(879);
    match(SolidityParser::T__72);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblySwitchContext ------------------------------------------------------------------

SolidityParser::AssemblySwitchContext::AssemblySwitchContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::AssemblyExpressionContext* SolidityParser::AssemblySwitchContext::assemblyExpression() {
  return getRuleContext<SolidityParser::AssemblyExpressionContext>(0);
}

std::vector<SolidityParser::AssemblyCaseContext *> SolidityParser::AssemblySwitchContext::assemblyCase() {
  return getRuleContexts<SolidityParser::AssemblyCaseContext>();
}

SolidityParser::AssemblyCaseContext* SolidityParser::AssemblySwitchContext::assemblyCase(size_t i) {
  return getRuleContext<SolidityParser::AssemblyCaseContext>(i);
}


size_t SolidityParser::AssemblySwitchContext::getRuleIndex() const {
  return SolidityParser::RuleAssemblySwitch;
}


antlrcpp::Any SolidityParser::AssemblySwitchContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitAssemblySwitch(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::AssemblySwitchContext* SolidityParser::assemblySwitch() {
  AssemblySwitchContext *_localctx = _tracker.createInstance<AssemblySwitchContext>(_ctx, getState());
  enterRule(_localctx, 146, SolidityParser::RuleAssemblySwitch);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(881);
    match(SolidityParser::T__86);
    setState(882);
    assemblyExpression();
    setState(886);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SolidityParser::T__87

    || _la == SolidityParser::T__88) {
      setState(883);
      assemblyCase();
      setState(888);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblyCaseContext ------------------------------------------------------------------

SolidityParser::AssemblyCaseContext::AssemblyCaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::AssemblyLiteralContext* SolidityParser::AssemblyCaseContext::assemblyLiteral() {
  return getRuleContext<SolidityParser::AssemblyLiteralContext>(0);
}

SolidityParser::AssemblyBlockContext* SolidityParser::AssemblyCaseContext::assemblyBlock() {
  return getRuleContext<SolidityParser::AssemblyBlockContext>(0);
}


size_t SolidityParser::AssemblyCaseContext::getRuleIndex() const {
  return SolidityParser::RuleAssemblyCase;
}


antlrcpp::Any SolidityParser::AssemblyCaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitAssemblyCase(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::AssemblyCaseContext* SolidityParser::assemblyCase() {
  AssemblyCaseContext *_localctx = _tracker.createInstance<AssemblyCaseContext>(_ctx, getState());
  enterRule(_localctx, 148, SolidityParser::RuleAssemblyCase);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(895);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SolidityParser::T__87: {
        enterOuterAlt(_localctx, 1);
        setState(889);
        match(SolidityParser::T__87);
        setState(890);
        assemblyLiteral();
        setState(891);
        assemblyBlock();
        break;
      }

      case SolidityParser::T__88: {
        enterOuterAlt(_localctx, 2);
        setState(893);
        match(SolidityParser::T__88);
        setState(894);
        assemblyBlock();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblyFunctionDefinitionContext ------------------------------------------------------------------

SolidityParser::AssemblyFunctionDefinitionContext::AssemblyFunctionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::IdentifierContext* SolidityParser::AssemblyFunctionDefinitionContext::identifier() {
  return getRuleContext<SolidityParser::IdentifierContext>(0);
}

SolidityParser::AssemblyBlockContext* SolidityParser::AssemblyFunctionDefinitionContext::assemblyBlock() {
  return getRuleContext<SolidityParser::AssemblyBlockContext>(0);
}

SolidityParser::AssemblyIdentifierListContext* SolidityParser::AssemblyFunctionDefinitionContext::assemblyIdentifierList() {
  return getRuleContext<SolidityParser::AssemblyIdentifierListContext>(0);
}

SolidityParser::AssemblyFunctionReturnsContext* SolidityParser::AssemblyFunctionDefinitionContext::assemblyFunctionReturns() {
  return getRuleContext<SolidityParser::AssemblyFunctionReturnsContext>(0);
}


size_t SolidityParser::AssemblyFunctionDefinitionContext::getRuleIndex() const {
  return SolidityParser::RuleAssemblyFunctionDefinition;
}


antlrcpp::Any SolidityParser::AssemblyFunctionDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitAssemblyFunctionDefinition(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::AssemblyFunctionDefinitionContext* SolidityParser::assemblyFunctionDefinition() {
  AssemblyFunctionDefinitionContext *_localctx = _tracker.createInstance<AssemblyFunctionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 150, SolidityParser::RuleAssemblyFunctionDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(897);
    match(SolidityParser::T__27);
    setState(898);
    identifier();
    setState(899);
    match(SolidityParser::T__20);
    setState(901);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__12

    || _la == SolidityParser::T__39 || _la == SolidityParser::Identifier) {
      setState(900);
      assemblyIdentifierList();
    }
    setState(903);
    match(SolidityParser::T__21);
    setState(905);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__89) {
      setState(904);
      assemblyFunctionReturns();
    }
    setState(907);
    assemblyBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblyFunctionReturnsContext ------------------------------------------------------------------

SolidityParser::AssemblyFunctionReturnsContext::AssemblyFunctionReturnsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::AssemblyIdentifierListContext* SolidityParser::AssemblyFunctionReturnsContext::assemblyIdentifierList() {
  return getRuleContext<SolidityParser::AssemblyIdentifierListContext>(0);
}


size_t SolidityParser::AssemblyFunctionReturnsContext::getRuleIndex() const {
  return SolidityParser::RuleAssemblyFunctionReturns;
}


antlrcpp::Any SolidityParser::AssemblyFunctionReturnsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitAssemblyFunctionReturns(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::AssemblyFunctionReturnsContext* SolidityParser::assemblyFunctionReturns() {
  AssemblyFunctionReturnsContext *_localctx = _tracker.createInstance<AssemblyFunctionReturnsContext>(_ctx, getState());
  enterRule(_localctx, 152, SolidityParser::RuleAssemblyFunctionReturns);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(909);
    match(SolidityParser::T__89);
    setState(910);
    assemblyIdentifierList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblyForContext ------------------------------------------------------------------

SolidityParser::AssemblyForContext::AssemblyForContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SolidityParser::AssemblyExpressionContext *> SolidityParser::AssemblyForContext::assemblyExpression() {
  return getRuleContexts<SolidityParser::AssemblyExpressionContext>();
}

SolidityParser::AssemblyExpressionContext* SolidityParser::AssemblyForContext::assemblyExpression(size_t i) {
  return getRuleContext<SolidityParser::AssemblyExpressionContext>(i);
}

std::vector<SolidityParser::AssemblyBlockContext *> SolidityParser::AssemblyForContext::assemblyBlock() {
  return getRuleContexts<SolidityParser::AssemblyBlockContext>();
}

SolidityParser::AssemblyBlockContext* SolidityParser::AssemblyForContext::assemblyBlock(size_t i) {
  return getRuleContext<SolidityParser::AssemblyBlockContext>(i);
}


size_t SolidityParser::AssemblyForContext::getRuleIndex() const {
  return SolidityParser::RuleAssemblyFor;
}


antlrcpp::Any SolidityParser::AssemblyForContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitAssemblyFor(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::AssemblyForContext* SolidityParser::assemblyFor() {
  AssemblyForContext *_localctx = _tracker.createInstance<AssemblyForContext>(_ctx, getState());
  enterRule(_localctx, 154, SolidityParser::RuleAssemblyFor);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(912);
    match(SolidityParser::T__23);
    setState(915);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SolidityParser::T__13: {
        setState(913);
        assemblyBlock();
        break;
      }

      case SolidityParser::T__12:
      case SolidityParser::T__33:
      case SolidityParser::T__39:
      case SolidityParser::T__45:
      case SolidityParser::T__51:
      case SolidityParser::DecimalNumber:
      case SolidityParser::HexNumber:
      case SolidityParser::HexLiteral:
      case SolidityParser::Identifier:
      case SolidityParser::StringLiteral: {
        setState(914);
        assemblyExpression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(917);
    assemblyExpression();
    setState(920);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SolidityParser::T__13: {
        setState(918);
        assemblyBlock();
        break;
      }

      case SolidityParser::T__12:
      case SolidityParser::T__33:
      case SolidityParser::T__39:
      case SolidityParser::T__45:
      case SolidityParser::T__51:
      case SolidityParser::DecimalNumber:
      case SolidityParser::HexNumber:
      case SolidityParser::HexLiteral:
      case SolidityParser::Identifier:
      case SolidityParser::StringLiteral: {
        setState(919);
        assemblyExpression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(922);
    assemblyBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblyIfContext ------------------------------------------------------------------

SolidityParser::AssemblyIfContext::AssemblyIfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::AssemblyExpressionContext* SolidityParser::AssemblyIfContext::assemblyExpression() {
  return getRuleContext<SolidityParser::AssemblyExpressionContext>(0);
}

SolidityParser::AssemblyBlockContext* SolidityParser::AssemblyIfContext::assemblyBlock() {
  return getRuleContext<SolidityParser::AssemblyBlockContext>(0);
}


size_t SolidityParser::AssemblyIfContext::getRuleIndex() const {
  return SolidityParser::RuleAssemblyIf;
}


antlrcpp::Any SolidityParser::AssemblyIfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitAssemblyIf(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::AssemblyIfContext* SolidityParser::assemblyIf() {
  AssemblyIfContext *_localctx = _tracker.createInstance<AssemblyIfContext>(_ctx, getState());
  enterRule(_localctx, 156, SolidityParser::RuleAssemblyIf);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(924);
    match(SolidityParser::T__40);
    setState(925);
    assemblyExpression();
    setState(926);
    assemblyBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblyLiteralContext ------------------------------------------------------------------

SolidityParser::AssemblyLiteralContext::AssemblyLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SolidityParser::AssemblyLiteralContext::StringLiteral() {
  return getToken(SolidityParser::StringLiteral, 0);
}

tree::TerminalNode* SolidityParser::AssemblyLiteralContext::DecimalNumber() {
  return getToken(SolidityParser::DecimalNumber, 0);
}

tree::TerminalNode* SolidityParser::AssemblyLiteralContext::HexNumber() {
  return getToken(SolidityParser::HexNumber, 0);
}

tree::TerminalNode* SolidityParser::AssemblyLiteralContext::HexLiteral() {
  return getToken(SolidityParser::HexLiteral, 0);
}


size_t SolidityParser::AssemblyLiteralContext::getRuleIndex() const {
  return SolidityParser::RuleAssemblyLiteral;
}


antlrcpp::Any SolidityParser::AssemblyLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitAssemblyLiteral(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::AssemblyLiteralContext* SolidityParser::assemblyLiteral() {
  AssemblyLiteralContext *_localctx = _tracker.createInstance<AssemblyLiteralContext>(_ctx, getState());
  enterRule(_localctx, 158, SolidityParser::RuleAssemblyLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(928);
    _la = _input->LA(1);
    if (!(((((_la - 100) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 100)) & ((1ULL << (SolidityParser::DecimalNumber - 100))
      | (1ULL << (SolidityParser::HexNumber - 100))
      | (1ULL << (SolidityParser::HexLiteral - 100))
      | (1ULL << (SolidityParser::StringLiteral - 100)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubAssemblyContext ------------------------------------------------------------------

SolidityParser::SubAssemblyContext::SubAssemblyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::IdentifierContext* SolidityParser::SubAssemblyContext::identifier() {
  return getRuleContext<SolidityParser::IdentifierContext>(0);
}

SolidityParser::AssemblyBlockContext* SolidityParser::SubAssemblyContext::assemblyBlock() {
  return getRuleContext<SolidityParser::AssemblyBlockContext>(0);
}


size_t SolidityParser::SubAssemblyContext::getRuleIndex() const {
  return SolidityParser::RuleSubAssembly;
}


antlrcpp::Any SolidityParser::SubAssemblyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitSubAssembly(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::SubAssemblyContext* SolidityParser::subAssembly() {
  SubAssemblyContext *_localctx = _tracker.createInstance<SubAssemblyContext>(_ctx, getState());
  enterRule(_localctx, 160, SolidityParser::RuleSubAssembly);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(930);
    match(SolidityParser::T__43);
    setState(931);
    identifier();
    setState(932);
    assemblyBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TupleExpressionContext ------------------------------------------------------------------

SolidityParser::TupleExpressionContext::TupleExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SolidityParser::ExpressionContext *> SolidityParser::TupleExpressionContext::expression() {
  return getRuleContexts<SolidityParser::ExpressionContext>();
}

SolidityParser::ExpressionContext* SolidityParser::TupleExpressionContext::expression(size_t i) {
  return getRuleContext<SolidityParser::ExpressionContext>(i);
}


size_t SolidityParser::TupleExpressionContext::getRuleIndex() const {
  return SolidityParser::RuleTupleExpression;
}


antlrcpp::Any SolidityParser::TupleExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitTupleExpression(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::TupleExpressionContext* SolidityParser::tupleExpression() {
  TupleExpressionContext *_localctx = _tracker.createInstance<TupleExpressionContext>(_ctx, getState());
  enterRule(_localctx, 162, SolidityParser::RuleTupleExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(960);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SolidityParser::T__20: {
        enterOuterAlt(_localctx, 1);
        setState(934);
        match(SolidityParser::T__20);

        setState(936);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << SolidityParser::T__3)
          | (1ULL << SolidityParser::T__12)
          | (1ULL << SolidityParser::T__20)
          | (1ULL << SolidityParser::T__31)
          | (1ULL << SolidityParser::T__33)
          | (1ULL << SolidityParser::T__39)
          | (1ULL << SolidityParser::T__48)
          | (1ULL << SolidityParser::T__49)
          | (1ULL << SolidityParser::T__50)
          | (1ULL << SolidityParser::T__51)
          | (1ULL << SolidityParser::T__52)
          | (1ULL << SolidityParser::T__53)
          | (1ULL << SolidityParser::T__54)
          | (1ULL << SolidityParser::T__55)
          | (1ULL << SolidityParser::T__56)
          | (1ULL << SolidityParser::T__57)
          | (1ULL << SolidityParser::T__58)
          | (1ULL << SolidityParser::T__59))) != 0) || ((((_la - 93) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 93)) & ((1ULL << (SolidityParser::Int - 93))
          | (1ULL << (SolidityParser::Uint - 93))
          | (1ULL << (SolidityParser::Byte - 93))
          | (1ULL << (SolidityParser::Fixed - 93))
          | (1ULL << (SolidityParser::Ufixed - 93))
          | (1ULL << (SolidityParser::BooleanLiteral - 93))
          | (1ULL << (SolidityParser::DecimalNumber - 93))
          | (1ULL << (SolidityParser::HexNumber - 93))
          | (1ULL << (SolidityParser::HexLiteral - 93))
          | (1ULL << (SolidityParser::TypeKeyword - 93))
          | (1ULL << (SolidityParser::Identifier - 93))
          | (1ULL << (SolidityParser::StringLiteral - 93)))) != 0)) {
          setState(935);
          expression(0);
        }
        setState(944);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SolidityParser::T__14) {
          setState(938);
          match(SolidityParser::T__14);
          setState(940);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << SolidityParser::T__3)
            | (1ULL << SolidityParser::T__12)
            | (1ULL << SolidityParser::T__20)
            | (1ULL << SolidityParser::T__31)
            | (1ULL << SolidityParser::T__33)
            | (1ULL << SolidityParser::T__39)
            | (1ULL << SolidityParser::T__48)
            | (1ULL << SolidityParser::T__49)
            | (1ULL << SolidityParser::T__50)
            | (1ULL << SolidityParser::T__51)
            | (1ULL << SolidityParser::T__52)
            | (1ULL << SolidityParser::T__53)
            | (1ULL << SolidityParser::T__54)
            | (1ULL << SolidityParser::T__55)
            | (1ULL << SolidityParser::T__56)
            | (1ULL << SolidityParser::T__57)
            | (1ULL << SolidityParser::T__58)
            | (1ULL << SolidityParser::T__59))) != 0) || ((((_la - 93) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 93)) & ((1ULL << (SolidityParser::Int - 93))
            | (1ULL << (SolidityParser::Uint - 93))
            | (1ULL << (SolidityParser::Byte - 93))
            | (1ULL << (SolidityParser::Fixed - 93))
            | (1ULL << (SolidityParser::Ufixed - 93))
            | (1ULL << (SolidityParser::BooleanLiteral - 93))
            | (1ULL << (SolidityParser::DecimalNumber - 93))
            | (1ULL << (SolidityParser::HexNumber - 93))
            | (1ULL << (SolidityParser::HexLiteral - 93))
            | (1ULL << (SolidityParser::TypeKeyword - 93))
            | (1ULL << (SolidityParser::Identifier - 93))
            | (1ULL << (SolidityParser::StringLiteral - 93)))) != 0)) {
            setState(939);
            expression(0);
          }
          setState(946);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(947);
        match(SolidityParser::T__21);
        break;
      }

      case SolidityParser::T__31: {
        enterOuterAlt(_localctx, 2);
        setState(948);
        match(SolidityParser::T__31);
        setState(957);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << SolidityParser::T__3)
          | (1ULL << SolidityParser::T__12)
          | (1ULL << SolidityParser::T__20)
          | (1ULL << SolidityParser::T__31)
          | (1ULL << SolidityParser::T__33)
          | (1ULL << SolidityParser::T__39)
          | (1ULL << SolidityParser::T__48)
          | (1ULL << SolidityParser::T__49)
          | (1ULL << SolidityParser::T__50)
          | (1ULL << SolidityParser::T__51)
          | (1ULL << SolidityParser::T__52)
          | (1ULL << SolidityParser::T__53)
          | (1ULL << SolidityParser::T__54)
          | (1ULL << SolidityParser::T__55)
          | (1ULL << SolidityParser::T__56)
          | (1ULL << SolidityParser::T__57)
          | (1ULL << SolidityParser::T__58)
          | (1ULL << SolidityParser::T__59))) != 0) || ((((_la - 93) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 93)) & ((1ULL << (SolidityParser::Int - 93))
          | (1ULL << (SolidityParser::Uint - 93))
          | (1ULL << (SolidityParser::Byte - 93))
          | (1ULL << (SolidityParser::Fixed - 93))
          | (1ULL << (SolidityParser::Ufixed - 93))
          | (1ULL << (SolidityParser::BooleanLiteral - 93))
          | (1ULL << (SolidityParser::DecimalNumber - 93))
          | (1ULL << (SolidityParser::HexNumber - 93))
          | (1ULL << (SolidityParser::HexLiteral - 93))
          | (1ULL << (SolidityParser::TypeKeyword - 93))
          | (1ULL << (SolidityParser::Identifier - 93))
          | (1ULL << (SolidityParser::StringLiteral - 93)))) != 0)) {
          setState(949);
          expression(0);
          setState(954);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == SolidityParser::T__14) {
            setState(950);
            match(SolidityParser::T__14);
            setState(951);
            expression(0);
            setState(956);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(959);
        match(SolidityParser::T__32);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeNameExpressionContext ------------------------------------------------------------------

SolidityParser::TypeNameExpressionContext::TypeNameExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::ElementaryTypeNameContext* SolidityParser::TypeNameExpressionContext::elementaryTypeName() {
  return getRuleContext<SolidityParser::ElementaryTypeNameContext>(0);
}

SolidityParser::UserDefinedTypeNameContext* SolidityParser::TypeNameExpressionContext::userDefinedTypeName() {
  return getRuleContext<SolidityParser::UserDefinedTypeNameContext>(0);
}


size_t SolidityParser::TypeNameExpressionContext::getRuleIndex() const {
  return SolidityParser::RuleTypeNameExpression;
}


antlrcpp::Any SolidityParser::TypeNameExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitTypeNameExpression(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::TypeNameExpressionContext* SolidityParser::typeNameExpression() {
  TypeNameExpressionContext *_localctx = _tracker.createInstance<TypeNameExpressionContext>(_ctx, getState());
  enterRule(_localctx, 164, SolidityParser::RuleTypeNameExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(964);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SolidityParser::T__33:
      case SolidityParser::T__48:
      case SolidityParser::T__49:
      case SolidityParser::T__50:
      case SolidityParser::T__51:
      case SolidityParser::Int:
      case SolidityParser::Uint:
      case SolidityParser::Byte:
      case SolidityParser::Fixed:
      case SolidityParser::Ufixed: {
        enterOuterAlt(_localctx, 1);
        setState(962);
        elementaryTypeName();
        break;
      }

      case SolidityParser::T__12:
      case SolidityParser::T__39:
      case SolidityParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(963);
        userDefinedTypeName();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberLiteralContext ------------------------------------------------------------------

SolidityParser::NumberLiteralContext::NumberLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SolidityParser::NumberLiteralContext::DecimalNumber() {
  return getToken(SolidityParser::DecimalNumber, 0);
}

tree::TerminalNode* SolidityParser::NumberLiteralContext::HexNumber() {
  return getToken(SolidityParser::HexNumber, 0);
}

tree::TerminalNode* SolidityParser::NumberLiteralContext::NumberUnit() {
  return getToken(SolidityParser::NumberUnit, 0);
}


size_t SolidityParser::NumberLiteralContext::getRuleIndex() const {
  return SolidityParser::RuleNumberLiteral;
}


antlrcpp::Any SolidityParser::NumberLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitNumberLiteral(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::NumberLiteralContext* SolidityParser::numberLiteral() {
  NumberLiteralContext *_localctx = _tracker.createInstance<NumberLiteralContext>(_ctx, getState());
  enterRule(_localctx, 166, SolidityParser::RuleNumberLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(966);
    _la = _input->LA(1);
    if (!(_la == SolidityParser::DecimalNumber

    || _la == SolidityParser::HexNumber)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(968);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 107, _ctx)) {
    case 1: {
      setState(967);
      match(SolidityParser::NumberUnit);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

SolidityParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SolidityParser::IdentifierContext::Identifier() {
  return getToken(SolidityParser::Identifier, 0);
}


size_t SolidityParser::IdentifierContext::getRuleIndex() const {
  return SolidityParser::RuleIdentifier;
}


antlrcpp::Any SolidityParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::IdentifierContext* SolidityParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 168, SolidityParser::RuleIdentifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(970);
    _la = _input->LA(1);
    if (!(_la == SolidityParser::T__12

    || _la == SolidityParser::T__39 || _la == SolidityParser::Identifier)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool SolidityParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 32: return typeNameSempred(dynamic_cast<TypeNameContext *>(context), predicateIndex);
    case 56: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool SolidityParser::typeNameSempred(TypeNameContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool SolidityParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 14);
    case 2: return precpred(_ctx, 13);
    case 3: return precpred(_ctx, 12);
    case 4: return precpred(_ctx, 11);
    case 5: return precpred(_ctx, 10);
    case 6: return precpred(_ctx, 9);
    case 7: return precpred(_ctx, 8);
    case 8: return precpred(_ctx, 7);
    case 9: return precpred(_ctx, 6);
    case 10: return precpred(_ctx, 5);
    case 11: return precpred(_ctx, 4);
    case 12: return precpred(_ctx, 3);
    case 13: return precpred(_ctx, 2);
    case 14: return precpred(_ctx, 25);
    case 15: return precpred(_ctx, 23);
    case 16: return precpred(_ctx, 22);
    case 17: return precpred(_ctx, 21);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> SolidityParser::_decisionToDFA;
atn::PredictionContextCache SolidityParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SolidityParser::_atn;
std::vector<uint16_t> SolidityParser::_serializedATN;

std::vector<std::string> SolidityParser::_ruleNames = {
  "sourceUnit", "pragmaDirective", "pragmaName", "pragmaValue", "version", 
  "versionOperator", "versionConstraint", "importDeclaration", "importDirective", 
  "natSpec", "contractDefinition", "inheritanceSpecifier", "contractPart", 
  "stateVariableDeclaration", "usingForDeclaration", "structDefinition", 
  "constructorDefinition", "modifierDefinition", "modifierInvocation", "functionDefinition", 
  "returnParameters", "modifierList", "eventDefinition", "enumValue", "enumDefinition", 
  "parameterList", "parameter", "eventParameterList", "eventParameter", 
  "functionTypeParameterList", "functionTypeParameter", "variableDeclaration", 
  "typeName", "userDefinedTypeName", "mapping", "functionTypeName", "storageLocation", 
  "stateMutability", "block", "statement", "expressionStatement", "ifStatement", 
  "whileStatement", "simpleStatement", "forStatement", "inlineAssemblyStatement", 
  "doWhileStatement", "continueStatement", "breakStatement", "returnStatement", 
  "throwStatement", "emitStatement", "variableDeclarationStatement", "variableDeclarationList", 
  "identifierList", "elementaryTypeName", "expression", "primaryExpression", 
  "expressionList", "nameValueList", "nameValue", "functionCallArguments", 
  "functionCall", "assemblyBlock", "assemblyItem", "assemblyExpression", 
  "assemblyCall", "assemblyLocalDefinition", "assemblyAssignment", "assemblyIdentifierOrList", 
  "assemblyIdentifierList", "assemblyStackAssignment", "labelDefinition", 
  "assemblySwitch", "assemblyCase", "assemblyFunctionDefinition", "assemblyFunctionReturns", 
  "assemblyFor", "assemblyIf", "assemblyLiteral", "subAssembly", "tupleExpression", 
  "typeNameExpression", "numberLiteral", "identifier"
};

std::vector<std::string> SolidityParser::_literalNames = {
  "", "'pragma'", "';'", "'^'", "'~'", "'>='", "'>'", "'<'", "'<='", "'='", 
  "'as'", "'import'", "'*'", "'from'", "'{'", "','", "'}'", "'contract'", 
  "'interface'", "'library'", "'is'", "'('", "')'", "'using'", "'for'", 
  "'struct'", "'constructor'", "'modifier'", "'function'", "'returns'", 
  "'event'", "'enum'", "'['", "']'", "'address'", "'.'", "'mapping'", "'=>'", 
  "'memory'", "'storage'", "'calldata'", "'if'", "'else'", "'while'", "'assembly'", 
  "'do'", "'return'", "'throw'", "'emit'", "'var'", "'bool'", "'string'", 
  "'byte'", "'++'", "'--'", "'new'", "'+'", "'-'", "'after'", "'delete'", 
  "'!'", "'**'", "'/'", "'%'", "'<<'", "'>>'", "'&'", "'|'", "'=='", "'!='", 
  "'&&'", "'||'", "'?'", "':'", "'|='", "'^='", "'&='", "'<<='", "'>>='", 
  "'+='", "'-='", "'*='", "'/='", "'%='", "'let'", "':='", "'=:'", "'switch'", 
  "'case'", "'default'", "'->'", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "'anonymous'", "'break'", "'constant'", "'continue'", 
  "'external'", "'indexed'", "'internal'", "'payable'", "'private'", "'public'", 
  "'pure'", "'type'", "'view'"
};

std::vector<std::string> SolidityParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "NatSpecSingleLine", "NatSpecMultiLine", "Int", "Uint", "Byte", "Fixed", 
  "Ufixed", "VersionLiteral", "BooleanLiteral", "DecimalNumber", "HexNumber", 
  "NumberUnit", "HexLiteral", "ReservedKeyword", "AnonymousKeyword", "BreakKeyword", 
  "ConstantKeyword", "ContinueKeyword", "ExternalKeyword", "IndexedKeyword", 
  "InternalKeyword", "PayableKeyword", "PrivateKeyword", "PublicKeyword", 
  "PureKeyword", "TypeKeyword", "ViewKeyword", "Identifier", "StringLiteral", 
  "WS", "COMMENT", "LINE_COMMENT"
};

dfa::Vocabulary SolidityParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SolidityParser::_tokenNames;

SolidityParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x7c, 0x3cf, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x4, 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 
    0x53, 0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
    0x9, 0x56, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0xb0, 0xa, 0x2, 0xc, 
    0x2, 0xe, 0x2, 0xb3, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 
    0x5, 0x5, 0xc0, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0xc4, 0xa, 0x6, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x5, 0x8, 0xc9, 0xa, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xd0, 0xa, 0x9, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xd6, 0xa, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xdc, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x5, 0xa, 0xe0, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0xea, 0xa, 0xa, 0xc, 0xa, 
    0xe, 0xa, 0xed, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x5, 0xa, 0xf4, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x5, 0xc, 
    0xf9, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x7, 0xc, 0x101, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x104, 0xb, 0xc, 
    0x5, 0xc, 0x106, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x10a, 0xa, 
    0xc, 0xc, 0xc, 0xe, 0xc, 0x10d, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x114, 0xa, 0xd, 0x3, 0xd, 0x5, 0xd, 0x117, 
    0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x121, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x7, 
    0xf, 0x125, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x128, 0xb, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x12d, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x136, 
    0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x142, 
    0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x145, 0xb, 0x11, 0x5, 0x11, 0x147, 
    0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x153, 
    0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 
    0x14, 0x15a, 0xa, 0x14, 0x3, 0x14, 0x5, 0x14, 0x15d, 0xa, 0x14, 0x3, 
    0x15, 0x5, 0x15, 0x160, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 
    0x164, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x169, 
    0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x16d, 0xa, 0x15, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x7, 0x17, 0x178, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 
    0x17b, 0xb, 0x17, 0x3, 0x18, 0x5, 0x18, 0x17e, 0xa, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x184, 0xa, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
    0x1a, 0x5, 0x1a, 0x18e, 0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 
    0x192, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x195, 0xb, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x19d, 
    0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x1a0, 0xb, 0x1b, 0x5, 0x1b, 0x1a2, 
    0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x1a8, 
    0xa, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x1ab, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 0x1b1, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 
    0x1b4, 0xb, 0x1d, 0x5, 0x1d, 0x1b6, 0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x1bc, 0xa, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 
    0x1bf, 0xa, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 
    0x1c5, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x1c8, 0xb, 0x1f, 0x5, 0x1f, 
    0x1ca, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 
    0x1d0, 0xa, 0x20, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x1d4, 0xa, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x1df, 0xa, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x1e4, 0xa, 0x22, 0x3, 0x22, 0x7, 0x22, 
    0x1e7, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x1ea, 0xb, 0x22, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x7, 0x23, 0x1ef, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 
    0x1f2, 0xb, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 
    0x25, 0x7, 0x25, 0x200, 0xa, 0x25, 0xc, 0x25, 0xe, 0x25, 0x203, 0xb, 
    0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x207, 0xa, 0x25, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x7, 0x28, 0x20f, 
    0xa, 0x28, 0xc, 0x28, 0xe, 0x28, 0x212, 0xb, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 
    0x222, 0xa, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x22e, 
    0xa, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 
    0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x238, 0xa, 0x2d, 0x3, 0x2e, 
    0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x23e, 0xa, 0x2e, 0x3, 0x2e, 
    0x3, 0x2e, 0x5, 0x2e, 0x242, 0xa, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x245, 
    0xa, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x5, 
    0x2f, 0x24c, 0xa, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 0x3, 0x30, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 
    0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 
    0x3, 0x33, 0x5, 0x33, 0x260, 0xa, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 
    0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
    0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 
    0x5, 0x36, 0x272, 0xa, 0x36, 0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 0x276, 
    0xa, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 0x5, 0x37, 0x27b, 0xa, 0x37, 
    0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 0x27f, 0xa, 0x37, 0x7, 0x37, 0x281, 
    0xa, 0x37, 0xc, 0x37, 0xe, 0x37, 0x284, 0xb, 0x37, 0x3, 0x38, 0x3, 0x38, 
    0x5, 0x38, 0x288, 0xa, 0x38, 0x3, 0x38, 0x7, 0x38, 0x28b, 0xa, 0x38, 
    0xc, 0x38, 0xe, 0x38, 0x28e, 0xb, 0x38, 0x3, 0x38, 0x5, 0x38, 0x291, 
    0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 0x3a, 0x3, 
    0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 
    0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
    0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x2a9, 0xa, 0x3a, 
    0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
    0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 
    0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
    0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 
    0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
    0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 
    0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
    0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 
    0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x7, 0x3a, 0x2e4, 
    0xa, 0x3a, 0xc, 0x3a, 0xe, 0x3a, 0x2e7, 0xb, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 
    0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 0x2f0, 
    0xa, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x5, 
    0x3b, 0x2f7, 0xa, 0x3b, 0x5, 0x3b, 0x2f9, 0xa, 0x3b, 0x3, 0x3c, 0x3, 
    0x3c, 0x3, 0x3c, 0x7, 0x3c, 0x2fe, 0xa, 0x3c, 0xc, 0x3c, 0xe, 0x3c, 
    0x301, 0xb, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x7, 0x3d, 0x306, 
    0xa, 0x3d, 0xc, 0x3d, 0xe, 0x3d, 0x309, 0xb, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 
    0x30c, 0xa, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3f, 
    0x3, 0x3f, 0x5, 0x3f, 0x314, 0xa, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 
    0x318, 0xa, 0x3f, 0x5, 0x3f, 0x31a, 0xa, 0x3f, 0x3, 0x40, 0x3, 0x40, 
    0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x41, 0x3, 0x41, 0x7, 0x41, 0x323, 
    0xa, 0x41, 0xc, 0x41, 0xe, 0x41, 0x326, 0xb, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 
    0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 
    0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x33b, 0xa, 0x42, 
    0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 0x33f, 0xa, 0x43, 0x3, 0x44, 0x3, 0x44, 
    0x3, 0x44, 0x3, 0x44, 0x5, 0x44, 0x345, 0xa, 0x44, 0x3, 0x44, 0x3, 0x44, 
    0x5, 0x44, 0x349, 0xa, 0x44, 0x3, 0x44, 0x3, 0x44, 0x7, 0x44, 0x34d, 
    0xa, 0x44, 0xc, 0x44, 0xe, 0x44, 0x350, 0xb, 0x44, 0x3, 0x44, 0x5, 0x44, 
    0x353, 0xa, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x5, 0x45, 
    0x359, 0xa, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x47, 
    0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x5, 0x47, 0x364, 0xa, 0x47, 
    0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x7, 0x48, 0x369, 0xa, 0x48, 0xc, 0x48, 
    0xe, 0x48, 0x36c, 0xb, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x4a, 
    0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x7, 0x4b, 0x377, 
    0xa, 0x4b, 0xc, 0x4b, 0xe, 0x4b, 0x37a, 0xb, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 
    0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x5, 0x4c, 0x382, 0xa, 0x4c, 
    0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x5, 0x4d, 0x388, 0xa, 0x4d, 
    0x3, 0x4d, 0x3, 0x4d, 0x5, 0x4d, 0x38c, 0xa, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 
    0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x5, 
    0x4f, 0x396, 0xa, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 
    0x39b, 0xa, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 
    0x3, 0x50, 0x3, 0x51, 0x3, 0x51, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 
    0x52, 0x3, 0x53, 0x3, 0x53, 0x5, 0x53, 0x3ab, 0xa, 0x53, 0x3, 0x53, 
    0x3, 0x53, 0x5, 0x53, 0x3af, 0xa, 0x53, 0x7, 0x53, 0x3b1, 0xa, 0x53, 
    0xc, 0x53, 0xe, 0x53, 0x3b4, 0xb, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 
    0x3, 0x53, 0x3, 0x53, 0x7, 0x53, 0x3bb, 0xa, 0x53, 0xc, 0x53, 0xe, 0x53, 
    0x3be, 0xb, 0x53, 0x5, 0x53, 0x3c0, 0xa, 0x53, 0x3, 0x53, 0x5, 0x53, 
    0x3c3, 0xa, 0x53, 0x3, 0x54, 0x3, 0x54, 0x5, 0x54, 0x3c7, 0xa, 0x54, 
    0x3, 0x55, 0x3, 0x55, 0x5, 0x55, 0x3cb, 0xa, 0x55, 0x3, 0x56, 0x3, 0x56, 
    0x3, 0x56, 0x2, 0x4, 0x42, 0x72, 0x57, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 
    0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 
    0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 
    0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 
    0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 
    0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 
    0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0x2, 0x14, 0x3, 0x2, 0x5, 
    0xb, 0x3, 0x2, 0x5d, 0x5e, 0x3, 0x2, 0x13, 0x15, 0x5, 0x2, 0x6d, 0x6d, 
    0x71, 0x71, 0x73, 0x74, 0x3, 0x2, 0x28, 0x2a, 0x6, 0x2, 0x6d, 0x6d, 
    0x72, 0x72, 0x75, 0x75, 0x77, 0x77, 0x5, 0x2, 0x24, 0x24, 0x33, 0x36, 
    0x5f, 0x63, 0x3, 0x2, 0x37, 0x38, 0x3, 0x2, 0x3a, 0x3b, 0x3, 0x2, 0x3c, 
    0x3d, 0x4, 0x2, 0xe, 0xe, 0x40, 0x41, 0x3, 0x2, 0x42, 0x43, 0x3, 0x2, 
    0x7, 0xa, 0x3, 0x2, 0x46, 0x47, 0x4, 0x2, 0xb, 0xb, 0x4c, 0x55, 0x5, 
    0x2, 0x66, 0x67, 0x69, 0x69, 0x79, 0x79, 0x3, 0x2, 0x66, 0x67, 0x5, 
    0x2, 0xf, 0xf, 0x2a, 0x2a, 0x78, 0x78, 0x2, 0x42c, 0x2, 0xb1, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0xb6, 0x3, 0x2, 0x2, 0x2, 0x6, 0xbb, 0x3, 0x2, 0x2, 0x2, 
    0x8, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xa, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc, 0xc5, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0xc8, 0x3, 0x2, 0x2, 0x2, 0x10, 0xcc, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x14, 0xf5, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0xf8, 0x3, 0x2, 0x2, 0x2, 0x18, 0x110, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x120, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x122, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x130, 0x3, 0x2, 0x2, 0x2, 0x20, 0x139, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0x14a, 0x3, 0x2, 0x2, 0x2, 0x24, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x26, 0x156, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x16e, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x179, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x17d, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x187, 0x3, 0x2, 0x2, 0x2, 0x32, 0x189, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x198, 0x3, 0x2, 0x2, 0x2, 0x36, 0x1a5, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x3c, 
    0x1c0, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x40, 0x1d1, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x44, 0x1eb, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x48, 0x1fa, 0x3, 0x2, 
    0x2, 0x2, 0x4a, 0x208, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x20a, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x50, 0x221, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x223, 0x3, 0x2, 0x2, 0x2, 0x54, 0x226, 0x3, 0x2, 0x2, 0x2, 0x56, 
    0x22f, 0x3, 0x2, 0x2, 0x2, 0x58, 0x237, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x239, 
    0x3, 0x2, 0x2, 0x2, 0x5c, 0x249, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x24f, 0x3, 
    0x2, 0x2, 0x2, 0x60, 0x257, 0x3, 0x2, 0x2, 0x2, 0x62, 0x25a, 0x3, 0x2, 
    0x2, 0x2, 0x64, 0x25d, 0x3, 0x2, 0x2, 0x2, 0x66, 0x263, 0x3, 0x2, 0x2, 
    0x2, 0x68, 0x266, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x271, 0x3, 0x2, 0x2, 0x2, 
    0x6c, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x285, 0x3, 0x2, 0x2, 0x2, 0x70, 
    0x294, 0x3, 0x2, 0x2, 0x2, 0x72, 0x2a8, 0x3, 0x2, 0x2, 0x2, 0x74, 0x2f8, 
    0x3, 0x2, 0x2, 0x2, 0x76, 0x2fa, 0x3, 0x2, 0x2, 0x2, 0x78, 0x302, 0x3, 
    0x2, 0x2, 0x2, 0x7a, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x319, 0x3, 0x2, 
    0x2, 0x2, 0x7e, 0x31b, 0x3, 0x2, 0x2, 0x2, 0x80, 0x320, 0x3, 0x2, 0x2, 
    0x2, 0x82, 0x33a, 0x3, 0x2, 0x2, 0x2, 0x84, 0x33e, 0x3, 0x2, 0x2, 0x2, 
    0x86, 0x344, 0x3, 0x2, 0x2, 0x2, 0x88, 0x354, 0x3, 0x2, 0x2, 0x2, 0x8a, 
    0x35a, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x363, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x365, 
    0x3, 0x2, 0x2, 0x2, 0x90, 0x36d, 0x3, 0x2, 0x2, 0x2, 0x92, 0x370, 0x3, 
    0x2, 0x2, 0x2, 0x94, 0x373, 0x3, 0x2, 0x2, 0x2, 0x96, 0x381, 0x3, 0x2, 
    0x2, 0x2, 0x98, 0x383, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x38f, 0x3, 0x2, 0x2, 
    0x2, 0x9c, 0x392, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x39e, 0x3, 0x2, 0x2, 0x2, 
    0xa0, 0x3a2, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x3a4, 0x3, 0x2, 0x2, 0x2, 0xa4, 
    0x3c2, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x3c6, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x3c8, 
    0x3, 0x2, 0x2, 0x2, 0xaa, 0x3cc, 0x3, 0x2, 0x2, 0x2, 0xac, 0xb0, 0x5, 
    0x4, 0x3, 0x2, 0xad, 0xb0, 0x5, 0x12, 0xa, 0x2, 0xae, 0xb0, 0x5, 0x16, 
    0xc, 0x2, 0xaf, 0xac, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xad, 0x3, 0x2, 0x2, 
    0x2, 0xaf, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb3, 0x3, 0x2, 0x2, 0x2, 
    0xb1, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb2, 
    0xb4, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 
    0x7, 0x2, 0x2, 0x3, 0xb5, 0x3, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x7, 
    0x3, 0x2, 0x2, 0xb7, 0xb8, 0x5, 0x6, 0x4, 0x2, 0xb8, 0xb9, 0x5, 0x8, 
    0x5, 0x2, 0xb9, 0xba, 0x7, 0x4, 0x2, 0x2, 0xba, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0xbb, 0xbc, 0x5, 0xaa, 0x56, 0x2, 0xbc, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0xbd, 0xc0, 0x5, 0xa, 0x6, 0x2, 0xbe, 0xc0, 0x5, 0x72, 0x3a, 0x2, 0xbf, 
    0xbd, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0xc1, 0xc3, 0x5, 0xe, 0x8, 0x2, 0xc2, 0xc4, 0x5, 
    0xe, 0x8, 0x2, 0xc3, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 0x3, 0x2, 
    0x2, 0x2, 0xc4, 0xb, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x9, 0x2, 0x2, 
    0x2, 0xc6, 0xd, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc9, 0x5, 0xc, 0x7, 0x2, 
    0xc8, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc9, 
    0xca, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x7, 0x64, 0x2, 0x2, 0xcb, 0xf, 
    0x3, 0x2, 0x2, 0x2, 0xcc, 0xcf, 0x5, 0xaa, 0x56, 0x2, 0xcd, 0xce, 0x7, 
    0xc, 0x2, 0x2, 0xce, 0xd0, 0x5, 0xaa, 0x56, 0x2, 0xcf, 0xcd, 0x3, 0x2, 
    0x2, 0x2, 0xcf, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd0, 0x11, 0x3, 0x2, 0x2, 
    0x2, 0xd1, 0xd2, 0x7, 0xd, 0x2, 0x2, 0xd2, 0xd5, 0x7, 0x79, 0x2, 0x2, 
    0xd3, 0xd4, 0x7, 0xc, 0x2, 0x2, 0xd4, 0xd6, 0x5, 0xaa, 0x56, 0x2, 0xd5, 
    0xd3, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 
    0x3, 0x2, 0x2, 0x2, 0xd7, 0xf4, 0x7, 0x4, 0x2, 0x2, 0xd8, 0xdb, 0x7, 
    0xd, 0x2, 0x2, 0xd9, 0xdc, 0x7, 0xe, 0x2, 0x2, 0xda, 0xdc, 0x5, 0xaa, 
    0x56, 0x2, 0xdb, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xda, 0x3, 0x2, 0x2, 
    0x2, 0xdc, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x7, 0xc, 0x2, 0x2, 
    0xde, 0xe0, 0x5, 0xaa, 0x56, 0x2, 0xdf, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdf, 
    0xe0, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 
    0x7, 0xf, 0x2, 0x2, 0xe2, 0xe3, 0x7, 0x79, 0x2, 0x2, 0xe3, 0xf4, 0x7, 
    0x4, 0x2, 0x2, 0xe4, 0xe5, 0x7, 0xd, 0x2, 0x2, 0xe5, 0xe6, 0x7, 0x10, 
    0x2, 0x2, 0xe6, 0xeb, 0x5, 0x10, 0x9, 0x2, 0xe7, 0xe8, 0x7, 0x11, 0x2, 
    0x2, 0xe8, 0xea, 0x5, 0x10, 0x9, 0x2, 0xe9, 0xe7, 0x3, 0x2, 0x2, 0x2, 
    0xea, 0xed, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xeb, 
    0xec, 0x3, 0x2, 0x2, 0x2, 0xec, 0xee, 0x3, 0x2, 0x2, 0x2, 0xed, 0xeb, 
    0x3, 0x2, 0x2, 0x2, 0xee, 0xef, 0x7, 0x12, 0x2, 0x2, 0xef, 0xf0, 0x7, 
    0xf, 0x2, 0x2, 0xf0, 0xf1, 0x7, 0x79, 0x2, 0x2, 0xf1, 0xf2, 0x7, 0x4, 
    0x2, 0x2, 0xf2, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xd1, 0x3, 0x2, 0x2, 
    0x2, 0xf3, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xe4, 0x3, 0x2, 0x2, 0x2, 
    0xf4, 0x13, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 0x9, 0x3, 0x2, 0x2, 0xf6, 
    0x15, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf9, 0x5, 0x14, 0xb, 0x2, 0xf8, 0xf7, 
    0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfa, 0x3, 
    0x2, 0x2, 0x2, 0xfa, 0xfb, 0x9, 0x4, 0x2, 0x2, 0xfb, 0x105, 0x5, 0xaa, 
    0x56, 0x2, 0xfc, 0xfd, 0x7, 0x16, 0x2, 0x2, 0xfd, 0x102, 0x5, 0x18, 
    0xd, 0x2, 0xfe, 0xff, 0x7, 0x11, 0x2, 0x2, 0xff, 0x101, 0x5, 0x18, 0xd, 
    0x2, 0x100, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x101, 0x104, 0x3, 0x2, 0x2, 0x2, 
    0x102, 0x100, 0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 0x3, 0x2, 0x2, 0x2, 
    0x103, 0x106, 0x3, 0x2, 0x2, 0x2, 0x104, 0x102, 0x3, 0x2, 0x2, 0x2, 
    0x105, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x3, 0x2, 0x2, 0x2, 0x106, 
    0x107, 0x3, 0x2, 0x2, 0x2, 0x107, 0x10b, 0x7, 0x10, 0x2, 0x2, 0x108, 
    0x10a, 0x5, 0x1a, 0xe, 0x2, 0x109, 0x108, 0x3, 0x2, 0x2, 0x2, 0x10a, 
    0x10d, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x109, 0x3, 0x2, 0x2, 0x2, 0x10b, 
    0x10c, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10d, 
    0x10b, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 0x7, 0x12, 0x2, 0x2, 0x10f, 
    0x17, 0x3, 0x2, 0x2, 0x2, 0x110, 0x116, 0x5, 0x44, 0x23, 0x2, 0x111, 
    0x113, 0x7, 0x17, 0x2, 0x2, 0x112, 0x114, 0x5, 0x76, 0x3c, 0x2, 0x113, 
    0x112, 0x3, 0x2, 0x2, 0x2, 0x113, 0x114, 0x3, 0x2, 0x2, 0x2, 0x114, 
    0x115, 0x3, 0x2, 0x2, 0x2, 0x115, 0x117, 0x7, 0x18, 0x2, 0x2, 0x116, 
    0x111, 0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 0x3, 0x2, 0x2, 0x2, 0x117, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0x118, 0x121, 0x5, 0x1c, 0xf, 0x2, 0x119, 
    0x121, 0x5, 0x1e, 0x10, 0x2, 0x11a, 0x121, 0x5, 0x20, 0x11, 0x2, 0x11b, 
    0x121, 0x5, 0x22, 0x12, 0x2, 0x11c, 0x121, 0x5, 0x24, 0x13, 0x2, 0x11d, 
    0x121, 0x5, 0x28, 0x15, 0x2, 0x11e, 0x121, 0x5, 0x2e, 0x18, 0x2, 0x11f, 
    0x121, 0x5, 0x32, 0x1a, 0x2, 0x120, 0x118, 0x3, 0x2, 0x2, 0x2, 0x120, 
    0x119, 0x3, 0x2, 0x2, 0x2, 0x120, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x120, 
    0x11b, 0x3, 0x2, 0x2, 0x2, 0x120, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x120, 
    0x11d, 0x3, 0x2, 0x2, 0x2, 0x120, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x120, 
    0x11f, 0x3, 0x2, 0x2, 0x2, 0x121, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x122, 0x126, 
    0x5, 0x42, 0x22, 0x2, 0x123, 0x125, 0x9, 0x5, 0x2, 0x2, 0x124, 0x123, 
    0x3, 0x2, 0x2, 0x2, 0x125, 0x128, 0x3, 0x2, 0x2, 0x2, 0x126, 0x124, 
    0x3, 0x2, 0x2, 0x2, 0x126, 0x127, 0x3, 0x2, 0x2, 0x2, 0x127, 0x129, 
    0x3, 0x2, 0x2, 0x2, 0x128, 0x126, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12c, 
    0x5, 0xaa, 0x56, 0x2, 0x12a, 0x12b, 0x7, 0xb, 0x2, 0x2, 0x12b, 0x12d, 
    0x5, 0x72, 0x3a, 0x2, 0x12c, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 
    0x3, 0x2, 0x2, 0x2, 0x12d, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12f, 
    0x7, 0x4, 0x2, 0x2, 0x12f, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 0x7, 
    0x19, 0x2, 0x2, 0x131, 0x132, 0x5, 0xaa, 0x56, 0x2, 0x132, 0x135, 0x7, 
    0x1a, 0x2, 0x2, 0x133, 0x136, 0x7, 0xe, 0x2, 0x2, 0x134, 0x136, 0x5, 
    0x42, 0x22, 0x2, 0x135, 0x133, 0x3, 0x2, 0x2, 0x2, 0x135, 0x134, 0x3, 
    0x2, 0x2, 0x2, 0x136, 0x137, 0x3, 0x2, 0x2, 0x2, 0x137, 0x138, 0x7, 
    0x4, 0x2, 0x2, 0x138, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 0x7, 0x1b, 
    0x2, 0x2, 0x13a, 0x13b, 0x5, 0xaa, 0x56, 0x2, 0x13b, 0x146, 0x7, 0x10, 
    0x2, 0x2, 0x13c, 0x13d, 0x5, 0x40, 0x21, 0x2, 0x13d, 0x143, 0x7, 0x4, 
    0x2, 0x2, 0x13e, 0x13f, 0x5, 0x40, 0x21, 0x2, 0x13f, 0x140, 0x7, 0x4, 
    0x2, 0x2, 0x140, 0x142, 0x3, 0x2, 0x2, 0x2, 0x141, 0x13e, 0x3, 0x2, 
    0x2, 0x2, 0x142, 0x145, 0x3, 0x2, 0x2, 0x2, 0x143, 0x141, 0x3, 0x2, 
    0x2, 0x2, 0x143, 0x144, 0x3, 0x2, 0x2, 0x2, 0x144, 0x147, 0x3, 0x2, 
    0x2, 0x2, 0x145, 0x143, 0x3, 0x2, 0x2, 0x2, 0x146, 0x13c, 0x3, 0x2, 
    0x2, 0x2, 0x146, 0x147, 0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x3, 0x2, 
    0x2, 0x2, 0x148, 0x149, 0x7, 0x12, 0x2, 0x2, 0x149, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0x14a, 0x14b, 0x7, 0x1c, 0x2, 0x2, 0x14b, 0x14c, 0x5, 0x34, 
    0x1b, 0x2, 0x14c, 0x14d, 0x5, 0x2c, 0x17, 0x2, 0x14d, 0x14e, 0x5, 0x4e, 
    0x28, 0x2, 0x14e, 0x23, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x150, 0x7, 0x1d, 
    0x2, 0x2, 0x150, 0x152, 0x5, 0xaa, 0x56, 0x2, 0x151, 0x153, 0x5, 0x34, 
    0x1b, 0x2, 0x152, 0x151, 0x3, 0x2, 0x2, 0x2, 0x152, 0x153, 0x3, 0x2, 
    0x2, 0x2, 0x153, 0x154, 0x3, 0x2, 0x2, 0x2, 0x154, 0x155, 0x5, 0x4e, 
    0x28, 0x2, 0x155, 0x25, 0x3, 0x2, 0x2, 0x2, 0x156, 0x15c, 0x5, 0xaa, 
    0x56, 0x2, 0x157, 0x159, 0x7, 0x17, 0x2, 0x2, 0x158, 0x15a, 0x5, 0x76, 
    0x3c, 0x2, 0x159, 0x158, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 0x3, 0x2, 
    0x2, 0x2, 0x15a, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x15d, 0x7, 0x18, 
    0x2, 0x2, 0x15c, 0x157, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15d, 0x3, 0x2, 
    0x2, 0x2, 0x15d, 0x27, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x160, 0x5, 0x14, 
    0xb, 0x2, 0x15f, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x160, 0x3, 0x2, 
    0x2, 0x2, 0x160, 0x161, 0x3, 0x2, 0x2, 0x2, 0x161, 0x163, 0x7, 0x1e, 
    0x2, 0x2, 0x162, 0x164, 0x5, 0xaa, 0x56, 0x2, 0x163, 0x162, 0x3, 0x2, 
    0x2, 0x2, 0x163, 0x164, 0x3, 0x2, 0x2, 0x2, 0x164, 0x165, 0x3, 0x2, 
    0x2, 0x2, 0x165, 0x166, 0x5, 0x34, 0x1b, 0x2, 0x166, 0x168, 0x5, 0x2c, 
    0x17, 0x2, 0x167, 0x169, 0x5, 0x2a, 0x16, 0x2, 0x168, 0x167, 0x3, 0x2, 
    0x2, 0x2, 0x168, 0x169, 0x3, 0x2, 0x2, 0x2, 0x169, 0x16c, 0x3, 0x2, 
    0x2, 0x2, 0x16a, 0x16d, 0x7, 0x4, 0x2, 0x2, 0x16b, 0x16d, 0x5, 0x4e, 
    0x28, 0x2, 0x16c, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16b, 0x3, 0x2, 
    0x2, 0x2, 0x16d, 0x29, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x16f, 0x7, 0x1f, 
    0x2, 0x2, 0x16f, 0x170, 0x5, 0x34, 0x1b, 0x2, 0x170, 0x2b, 0x3, 0x2, 
    0x2, 0x2, 0x171, 0x178, 0x5, 0x26, 0x14, 0x2, 0x172, 0x178, 0x5, 0x4c, 
    0x27, 0x2, 0x173, 0x178, 0x7, 0x6f, 0x2, 0x2, 0x174, 0x178, 0x7, 0x74, 
    0x2, 0x2, 0x175, 0x178, 0x7, 0x71, 0x2, 0x2, 0x176, 0x178, 0x7, 0x73, 
    0x2, 0x2, 0x177, 0x171, 0x3, 0x2, 0x2, 0x2, 0x177, 0x172, 0x3, 0x2, 
    0x2, 0x2, 0x177, 0x173, 0x3, 0x2, 0x2, 0x2, 0x177, 0x174, 0x3, 0x2, 
    0x2, 0x2, 0x177, 0x175, 0x3, 0x2, 0x2, 0x2, 0x177, 0x176, 0x3, 0x2, 
    0x2, 0x2, 0x178, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x179, 0x177, 0x3, 0x2, 
    0x2, 0x2, 0x179, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x17b, 0x179, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17e, 0x5, 0x14, 0xb, 
    0x2, 0x17d, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x17e, 0x3, 0x2, 0x2, 
    0x2, 0x17e, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x180, 0x7, 0x20, 0x2, 
    0x2, 0x180, 0x181, 0x5, 0xaa, 0x56, 0x2, 0x181, 0x183, 0x5, 0x38, 0x1d, 
    0x2, 0x182, 0x184, 0x7, 0x6b, 0x2, 0x2, 0x183, 0x182, 0x3, 0x2, 0x2, 
    0x2, 0x183, 0x184, 0x3, 0x2, 0x2, 0x2, 0x184, 0x185, 0x3, 0x2, 0x2, 
    0x2, 0x185, 0x186, 0x7, 0x4, 0x2, 0x2, 0x186, 0x2f, 0x3, 0x2, 0x2, 0x2, 
    0x187, 0x188, 0x5, 0xaa, 0x56, 0x2, 0x188, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0x189, 0x18a, 0x7, 0x21, 0x2, 0x2, 0x18a, 0x18b, 0x5, 0xaa, 0x56, 0x2, 
    0x18b, 0x18d, 0x7, 0x10, 0x2, 0x2, 0x18c, 0x18e, 0x5, 0x30, 0x19, 0x2, 
    0x18d, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x18e, 0x3, 0x2, 0x2, 0x2, 
    0x18e, 0x193, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x190, 0x7, 0x11, 0x2, 0x2, 
    0x190, 0x192, 0x5, 0x30, 0x19, 0x2, 0x191, 0x18f, 0x3, 0x2, 0x2, 0x2, 
    0x192, 0x195, 0x3, 0x2, 0x2, 0x2, 0x193, 0x191, 0x3, 0x2, 0x2, 0x2, 
    0x193, 0x194, 0x3, 0x2, 0x2, 0x2, 0x194, 0x196, 0x3, 0x2, 0x2, 0x2, 
    0x195, 0x193, 0x3, 0x2, 0x2, 0x2, 0x196, 0x197, 0x7, 0x12, 0x2, 0x2, 
    0x197, 0x33, 0x3, 0x2, 0x2, 0x2, 0x198, 0x1a1, 0x7, 0x17, 0x2, 0x2, 
    0x199, 0x19e, 0x5, 0x36, 0x1c, 0x2, 0x19a, 0x19b, 0x7, 0x11, 0x2, 0x2, 
    0x19b, 0x19d, 0x5, 0x36, 0x1c, 0x2, 0x19c, 0x19a, 0x3, 0x2, 0x2, 0x2, 
    0x19d, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x19c, 0x3, 0x2, 0x2, 0x2, 
    0x19e, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x1a2, 0x3, 0x2, 0x2, 0x2, 
    0x1a0, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x199, 0x3, 0x2, 0x2, 0x2, 
    0x1a1, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a3, 0x3, 0x2, 0x2, 0x2, 
    0x1a3, 0x1a4, 0x7, 0x18, 0x2, 0x2, 0x1a4, 0x35, 0x3, 0x2, 0x2, 0x2, 
    0x1a5, 0x1a7, 0x5, 0x42, 0x22, 0x2, 0x1a6, 0x1a8, 0x5, 0x4a, 0x26, 0x2, 
    0x1a7, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a8, 0x3, 0x2, 0x2, 0x2, 
    0x1a8, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1ab, 0x5, 0xaa, 0x56, 0x2, 
    0x1aa, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1ab, 0x3, 0x2, 0x2, 0x2, 
    0x1ab, 0x37, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1b5, 0x7, 0x17, 0x2, 0x2, 
    0x1ad, 0x1b2, 0x5, 0x3a, 0x1e, 0x2, 0x1ae, 0x1af, 0x7, 0x11, 0x2, 0x2, 
    0x1af, 0x1b1, 0x5, 0x3a, 0x1e, 0x2, 0x1b0, 0x1ae, 0x3, 0x2, 0x2, 0x2, 
    0x1b1, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b0, 0x3, 0x2, 0x2, 0x2, 
    0x1b2, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b6, 0x3, 0x2, 0x2, 0x2, 
    0x1b4, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1ad, 0x3, 0x2, 0x2, 0x2, 
    0x1b5, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b7, 0x3, 0x2, 0x2, 0x2, 
    0x1b7, 0x1b8, 0x7, 0x18, 0x2, 0x2, 0x1b8, 0x39, 0x3, 0x2, 0x2, 0x2, 
    0x1b9, 0x1bb, 0x5, 0x42, 0x22, 0x2, 0x1ba, 0x1bc, 0x7, 0x70, 0x2, 0x2, 
    0x1bb, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1bc, 0x3, 0x2, 0x2, 0x2, 
    0x1bc, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1bf, 0x5, 0xaa, 0x56, 0x2, 
    0x1be, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1bf, 0x3, 0x2, 0x2, 0x2, 
    0x1bf, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1c9, 0x7, 0x17, 0x2, 0x2, 
    0x1c1, 0x1c6, 0x5, 0x3e, 0x20, 0x2, 0x1c2, 0x1c3, 0x7, 0x11, 0x2, 0x2, 
    0x1c3, 0x1c5, 0x5, 0x3e, 0x20, 0x2, 0x1c4, 0x1c2, 0x3, 0x2, 0x2, 0x2, 
    0x1c5, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c4, 0x3, 0x2, 0x2, 0x2, 
    0x1c6, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1ca, 0x3, 0x2, 0x2, 0x2, 
    0x1c8, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1c1, 0x3, 0x2, 0x2, 0x2, 
    0x1c9, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1cb, 0x3, 0x2, 0x2, 0x2, 
    0x1cb, 0x1cc, 0x7, 0x18, 0x2, 0x2, 0x1cc, 0x3d, 0x3, 0x2, 0x2, 0x2, 
    0x1cd, 0x1cf, 0x5, 0x42, 0x22, 0x2, 0x1ce, 0x1d0, 0x5, 0x4a, 0x26, 0x2, 
    0x1cf, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1d0, 0x3, 0x2, 0x2, 0x2, 
    0x1d0, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1d3, 0x5, 0x42, 0x22, 0x2, 
    0x1d2, 0x1d4, 0x5, 0x4a, 0x26, 0x2, 0x1d3, 0x1d2, 0x3, 0x2, 0x2, 0x2, 
    0x1d3, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d5, 0x3, 0x2, 0x2, 0x2, 
    0x1d5, 0x1d6, 0x5, 0xaa, 0x56, 0x2, 0x1d6, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x1d7, 0x1d8, 0x8, 0x22, 0x1, 0x2, 0x1d8, 0x1df, 0x5, 0x70, 0x39, 0x2, 
    0x1d9, 0x1df, 0x5, 0x44, 0x23, 0x2, 0x1da, 0x1df, 0x5, 0x46, 0x24, 0x2, 
    0x1db, 0x1df, 0x5, 0x48, 0x25, 0x2, 0x1dc, 0x1dd, 0x7, 0x24, 0x2, 0x2, 
    0x1dd, 0x1df, 0x7, 0x72, 0x2, 0x2, 0x1de, 0x1d7, 0x3, 0x2, 0x2, 0x2, 
    0x1de, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1da, 0x3, 0x2, 0x2, 0x2, 
    0x1de, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1dc, 0x3, 0x2, 0x2, 0x2, 
    0x1df, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1e1, 0xc, 0x5, 0x2, 0x2, 
    0x1e1, 0x1e3, 0x7, 0x22, 0x2, 0x2, 0x1e2, 0x1e4, 0x5, 0x72, 0x3a, 0x2, 
    0x1e3, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e4, 0x3, 0x2, 0x2, 0x2, 
    0x1e4, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e7, 0x7, 0x23, 0x2, 0x2, 
    0x1e6, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1ea, 0x3, 0x2, 0x2, 0x2, 
    0x1e8, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e9, 0x3, 0x2, 0x2, 0x2, 
    0x1e9, 0x43, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1eb, 
    0x1f0, 0x5, 0xaa, 0x56, 0x2, 0x1ec, 0x1ed, 0x7, 0x25, 0x2, 0x2, 0x1ed, 
    0x1ef, 0x5, 0xaa, 0x56, 0x2, 0x1ee, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ef, 
    0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1f0, 
    0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x45, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f0, 
    0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f4, 0x7, 0x26, 0x2, 0x2, 0x1f4, 0x1f5, 
    0x7, 0x17, 0x2, 0x2, 0x1f5, 0x1f6, 0x5, 0x70, 0x39, 0x2, 0x1f6, 0x1f7, 
    0x7, 0x27, 0x2, 0x2, 0x1f7, 0x1f8, 0x5, 0x42, 0x22, 0x2, 0x1f8, 0x1f9, 
    0x7, 0x18, 0x2, 0x2, 0x1f9, 0x47, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fb, 
    0x7, 0x1e, 0x2, 0x2, 0x1fb, 0x201, 0x5, 0x3c, 0x1f, 0x2, 0x1fc, 0x200, 
    0x7, 0x71, 0x2, 0x2, 0x1fd, 0x200, 0x7, 0x6f, 0x2, 0x2, 0x1fe, 0x200, 
    0x5, 0x4c, 0x27, 0x2, 0x1ff, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x1fd, 
    0x3, 0x2, 0x2, 0x2, 0x1ff, 0x1fe, 0x3, 0x2, 0x2, 0x2, 0x200, 0x203, 
    0x3, 0x2, 0x2, 0x2, 0x201, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x201, 0x202, 
    0x3, 0x2, 0x2, 0x2, 0x202, 0x206, 0x3, 0x2, 0x2, 0x2, 0x203, 0x201, 
    0x3, 0x2, 0x2, 0x2, 0x204, 0x205, 0x7, 0x1f, 0x2, 0x2, 0x205, 0x207, 
    0x5, 0x3c, 0x1f, 0x2, 0x206, 0x204, 0x3, 0x2, 0x2, 0x2, 0x206, 0x207, 
    0x3, 0x2, 0x2, 0x2, 0x207, 0x49, 0x3, 0x2, 0x2, 0x2, 0x208, 0x209, 0x9, 
    0x6, 0x2, 0x2, 0x209, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x20b, 0x9, 0x7, 
    0x2, 0x2, 0x20b, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x210, 0x7, 0x10, 
    0x2, 0x2, 0x20d, 0x20f, 0x5, 0x50, 0x29, 0x2, 0x20e, 0x20d, 0x3, 0x2, 
    0x2, 0x2, 0x20f, 0x212, 0x3, 0x2, 0x2, 0x2, 0x210, 0x20e, 0x3, 0x2, 
    0x2, 0x2, 0x210, 0x211, 0x3, 0x2, 0x2, 0x2, 0x211, 0x213, 0x3, 0x2, 
    0x2, 0x2, 0x212, 0x210, 0x3, 0x2, 0x2, 0x2, 0x213, 0x214, 0x7, 0x12, 
    0x2, 0x2, 0x214, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x215, 0x222, 0x5, 0x54, 
    0x2b, 0x2, 0x216, 0x222, 0x5, 0x56, 0x2c, 0x2, 0x217, 0x222, 0x5, 0x5a, 
    0x2e, 0x2, 0x218, 0x222, 0x5, 0x4e, 0x28, 0x2, 0x219, 0x222, 0x5, 0x5c, 
    0x2f, 0x2, 0x21a, 0x222, 0x5, 0x5e, 0x30, 0x2, 0x21b, 0x222, 0x5, 0x60, 
    0x31, 0x2, 0x21c, 0x222, 0x5, 0x62, 0x32, 0x2, 0x21d, 0x222, 0x5, 0x64, 
    0x33, 0x2, 0x21e, 0x222, 0x5, 0x66, 0x34, 0x2, 0x21f, 0x222, 0x5, 0x68, 
    0x35, 0x2, 0x220, 0x222, 0x5, 0x58, 0x2d, 0x2, 0x221, 0x215, 0x3, 0x2, 
    0x2, 0x2, 0x221, 0x216, 0x3, 0x2, 0x2, 0x2, 0x221, 0x217, 0x3, 0x2, 
    0x2, 0x2, 0x221, 0x218, 0x3, 0x2, 0x2, 0x2, 0x221, 0x219, 0x3, 0x2, 
    0x2, 0x2, 0x221, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x221, 0x21b, 0x3, 0x2, 
    0x2, 0x2, 0x221, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x221, 0x21d, 0x3, 0x2, 
    0x2, 0x2, 0x221, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x221, 0x21f, 0x3, 0x2, 
    0x2, 0x2, 0x221, 0x220, 0x3, 0x2, 0x2, 0x2, 0x222, 0x51, 0x3, 0x2, 0x2, 
    0x2, 0x223, 0x224, 0x5, 0x72, 0x3a, 0x2, 0x224, 0x225, 0x7, 0x4, 0x2, 
    0x2, 0x225, 0x53, 0x3, 0x2, 0x2, 0x2, 0x226, 0x227, 0x7, 0x2b, 0x2, 
    0x2, 0x227, 0x228, 0x7, 0x17, 0x2, 0x2, 0x228, 0x229, 0x5, 0x72, 0x3a, 
    0x2, 0x229, 0x22a, 0x7, 0x18, 0x2, 0x2, 0x22a, 0x22d, 0x5, 0x50, 0x29, 
    0x2, 0x22b, 0x22c, 0x7, 0x2c, 0x2, 0x2, 0x22c, 0x22e, 0x5, 0x50, 0x29, 
    0x2, 0x22d, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x22e, 0x3, 0x2, 0x2, 
    0x2, 0x22e, 0x55, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x230, 0x7, 0x2d, 0x2, 
    0x2, 0x230, 0x231, 0x7, 0x17, 0x2, 0x2, 0x231, 0x232, 0x5, 0x72, 0x3a, 
    0x2, 0x232, 0x233, 0x7, 0x18, 0x2, 0x2, 0x233, 0x234, 0x5, 0x50, 0x29, 
    0x2, 0x234, 0x57, 0x3, 0x2, 0x2, 0x2, 0x235, 0x238, 0x5, 0x6a, 0x36, 
    0x2, 0x236, 0x238, 0x5, 0x52, 0x2a, 0x2, 0x237, 0x235, 0x3, 0x2, 0x2, 
    0x2, 0x237, 0x236, 0x3, 0x2, 0x2, 0x2, 0x238, 0x59, 0x3, 0x2, 0x2, 0x2, 
    0x239, 0x23a, 0x7, 0x1a, 0x2, 0x2, 0x23a, 0x23d, 0x7, 0x17, 0x2, 0x2, 
    0x23b, 0x23e, 0x5, 0x58, 0x2d, 0x2, 0x23c, 0x23e, 0x7, 0x4, 0x2, 0x2, 
    0x23d, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x23c, 0x3, 0x2, 0x2, 0x2, 
    0x23e, 0x241, 0x3, 0x2, 0x2, 0x2, 0x23f, 0x242, 0x5, 0x52, 0x2a, 0x2, 
    0x240, 0x242, 0x7, 0x4, 0x2, 0x2, 0x241, 0x23f, 0x3, 0x2, 0x2, 0x2, 
    0x241, 0x240, 0x3, 0x2, 0x2, 0x2, 0x242, 0x244, 0x3, 0x2, 0x2, 0x2, 
    0x243, 0x245, 0x5, 0x72, 0x3a, 0x2, 0x244, 0x243, 0x3, 0x2, 0x2, 0x2, 
    0x244, 0x245, 0x3, 0x2, 0x2, 0x2, 0x245, 0x246, 0x3, 0x2, 0x2, 0x2, 
    0x246, 0x247, 0x7, 0x18, 0x2, 0x2, 0x247, 0x248, 0x5, 0x50, 0x29, 0x2, 
    0x248, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x249, 0x24b, 0x7, 0x2e, 0x2, 0x2, 
    0x24a, 0x24c, 0x7, 0x79, 0x2, 0x2, 0x24b, 0x24a, 0x3, 0x2, 0x2, 0x2, 
    0x24b, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x24d, 0x3, 0x2, 0x2, 0x2, 
    0x24d, 0x24e, 0x5, 0x80, 0x41, 0x2, 0x24e, 0x5d, 0x3, 0x2, 0x2, 0x2, 
    0x24f, 0x250, 0x7, 0x2f, 0x2, 0x2, 0x250, 0x251, 0x5, 0x50, 0x29, 0x2, 
    0x251, 0x252, 0x7, 0x2d, 0x2, 0x2, 0x252, 0x253, 0x7, 0x17, 0x2, 0x2, 
    0x253, 0x254, 0x5, 0x72, 0x3a, 0x2, 0x254, 0x255, 0x7, 0x18, 0x2, 0x2, 
    0x255, 0x256, 0x7, 0x4, 0x2, 0x2, 0x256, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x257, 
    0x258, 0x7, 0x6e, 0x2, 0x2, 0x258, 0x259, 0x7, 0x4, 0x2, 0x2, 0x259, 
    0x61, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x25b, 0x7, 0x6c, 0x2, 0x2, 0x25b, 
    0x25c, 0x7, 0x4, 0x2, 0x2, 0x25c, 0x63, 0x3, 0x2, 0x2, 0x2, 0x25d, 0x25f, 
    0x7, 0x30, 0x2, 0x2, 0x25e, 0x260, 0x5, 0x72, 0x3a, 0x2, 0x25f, 0x25e, 
    0x3, 0x2, 0x2, 0x2, 0x25f, 0x260, 0x3, 0x2, 0x2, 0x2, 0x260, 0x261, 
    0x3, 0x2, 0x2, 0x2, 0x261, 0x262, 0x7, 0x4, 0x2, 0x2, 0x262, 0x65, 0x3, 
    0x2, 0x2, 0x2, 0x263, 0x264, 0x7, 0x31, 0x2, 0x2, 0x264, 0x265, 0x7, 
    0x4, 0x2, 0x2, 0x265, 0x67, 0x3, 0x2, 0x2, 0x2, 0x266, 0x267, 0x7, 0x32, 
    0x2, 0x2, 0x267, 0x268, 0x5, 0x7e, 0x40, 0x2, 0x268, 0x269, 0x7, 0x4, 
    0x2, 0x2, 0x269, 0x69, 0x3, 0x2, 0x2, 0x2, 0x26a, 0x26b, 0x7, 0x33, 
    0x2, 0x2, 0x26b, 0x272, 0x5, 0x6e, 0x38, 0x2, 0x26c, 0x272, 0x5, 0x40, 
    0x21, 0x2, 0x26d, 0x26e, 0x7, 0x17, 0x2, 0x2, 0x26e, 0x26f, 0x5, 0x6c, 
    0x37, 0x2, 0x26f, 0x270, 0x7, 0x18, 0x2, 0x2, 0x270, 0x272, 0x3, 0x2, 
    0x2, 0x2, 0x271, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x271, 0x26c, 0x3, 0x2, 
    0x2, 0x2, 0x271, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x272, 0x275, 0x3, 0x2, 
    0x2, 0x2, 0x273, 0x274, 0x7, 0xb, 0x2, 0x2, 0x274, 0x276, 0x5, 0x72, 
    0x3a, 0x2, 0x275, 0x273, 0x3, 0x2, 0x2, 0x2, 0x275, 0x276, 0x3, 0x2, 
    0x2, 0x2, 0x276, 0x277, 0x3, 0x2, 0x2, 0x2, 0x277, 0x278, 0x7, 0x4, 
    0x2, 0x2, 0x278, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x279, 0x27b, 0x5, 0x40, 
    0x21, 0x2, 0x27a, 0x279, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x27b, 0x3, 0x2, 
    0x2, 0x2, 0x27b, 0x282, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x27e, 0x7, 0x11, 
    0x2, 0x2, 0x27d, 0x27f, 0x5, 0x40, 0x21, 0x2, 0x27e, 0x27d, 0x3, 0x2, 
    0x2, 0x2, 0x27e, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x281, 0x3, 0x2, 
    0x2, 0x2, 0x280, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x281, 0x284, 0x3, 0x2, 
    0x2, 0x2, 0x282, 0x280, 0x3, 0x2, 0x2, 0x2, 0x282, 0x283, 0x3, 0x2, 
    0x2, 0x2, 0x283, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x284, 0x282, 0x3, 0x2, 0x2, 
    0x2, 0x285, 0x28c, 0x7, 0x17, 0x2, 0x2, 0x286, 0x288, 0x5, 0xaa, 0x56, 
    0x2, 0x287, 0x286, 0x3, 0x2, 0x2, 0x2, 0x287, 0x288, 0x3, 0x2, 0x2, 
    0x2, 0x288, 0x289, 0x3, 0x2, 0x2, 0x2, 0x289, 0x28b, 0x7, 0x11, 0x2, 
    0x2, 0x28a, 0x287, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x28e, 0x3, 0x2, 0x2, 
    0x2, 0x28c, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x28d, 0x3, 0x2, 0x2, 
    0x2, 0x28d, 0x290, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x28c, 0x3, 0x2, 0x2, 
    0x2, 0x28f, 0x291, 0x5, 0xaa, 0x56, 0x2, 0x290, 0x28f, 0x3, 0x2, 0x2, 
    0x2, 0x290, 0x291, 0x3, 0x2, 0x2, 0x2, 0x291, 0x292, 0x3, 0x2, 0x2, 
    0x2, 0x292, 0x293, 0x7, 0x18, 0x2, 0x2, 0x293, 0x6f, 0x3, 0x2, 0x2, 
    0x2, 0x294, 0x295, 0x9, 0x8, 0x2, 0x2, 0x295, 0x71, 0x3, 0x2, 0x2, 0x2, 
    0x296, 0x297, 0x8, 0x3a, 0x1, 0x2, 0x297, 0x298, 0x7, 0x39, 0x2, 0x2, 
    0x298, 0x2a9, 0x5, 0x42, 0x22, 0x2, 0x299, 0x29a, 0x7, 0x17, 0x2, 0x2, 
    0x29a, 0x29b, 0x5, 0x72, 0x3a, 0x2, 0x29b, 0x29c, 0x7, 0x18, 0x2, 0x2, 
    0x29c, 0x2a9, 0x3, 0x2, 0x2, 0x2, 0x29d, 0x29e, 0x9, 0x9, 0x2, 0x2, 
    0x29e, 0x2a9, 0x5, 0x72, 0x3a, 0x15, 0x29f, 0x2a0, 0x9, 0xa, 0x2, 0x2, 
    0x2a0, 0x2a9, 0x5, 0x72, 0x3a, 0x14, 0x2a1, 0x2a2, 0x9, 0xb, 0x2, 0x2, 
    0x2a2, 0x2a9, 0x5, 0x72, 0x3a, 0x13, 0x2a3, 0x2a4, 0x7, 0x3e, 0x2, 0x2, 
    0x2a4, 0x2a9, 0x5, 0x72, 0x3a, 0x12, 0x2a5, 0x2a6, 0x7, 0x6, 0x2, 0x2, 
    0x2a6, 0x2a9, 0x5, 0x72, 0x3a, 0x11, 0x2a7, 0x2a9, 0x5, 0x74, 0x3b, 
    0x2, 0x2a8, 0x296, 0x3, 0x2, 0x2, 0x2, 0x2a8, 0x299, 0x3, 0x2, 0x2, 
    0x2, 0x2a8, 0x29d, 0x3, 0x2, 0x2, 0x2, 0x2a8, 0x29f, 0x3, 0x2, 0x2, 
    0x2, 0x2a8, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2a8, 0x2a3, 0x3, 0x2, 0x2, 
    0x2, 0x2a8, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x2a8, 0x2a7, 0x3, 0x2, 0x2, 
    0x2, 0x2a9, 0x2e5, 0x3, 0x2, 0x2, 0x2, 0x2aa, 0x2ab, 0xc, 0x10, 0x2, 
    0x2, 0x2ab, 0x2ac, 0x7, 0x3f, 0x2, 0x2, 0x2ac, 0x2e4, 0x5, 0x72, 0x3a, 
    0x11, 0x2ad, 0x2ae, 0xc, 0xf, 0x2, 0x2, 0x2ae, 0x2af, 0x9, 0xc, 0x2, 
    0x2, 0x2af, 0x2e4, 0x5, 0x72, 0x3a, 0x10, 0x2b0, 0x2b1, 0xc, 0xe, 0x2, 
    0x2, 0x2b1, 0x2b2, 0x9, 0xa, 0x2, 0x2, 0x2b2, 0x2e4, 0x5, 0x72, 0x3a, 
    0xf, 0x2b3, 0x2b4, 0xc, 0xd, 0x2, 0x2, 0x2b4, 0x2b5, 0x9, 0xd, 0x2, 
    0x2, 0x2b5, 0x2e4, 0x5, 0x72, 0x3a, 0xe, 0x2b6, 0x2b7, 0xc, 0xc, 0x2, 
    0x2, 0x2b7, 0x2b8, 0x7, 0x44, 0x2, 0x2, 0x2b8, 0x2e4, 0x5, 0x72, 0x3a, 
    0xd, 0x2b9, 0x2ba, 0xc, 0xb, 0x2, 0x2, 0x2ba, 0x2bb, 0x7, 0x5, 0x2, 
    0x2, 0x2bb, 0x2e4, 0x5, 0x72, 0x3a, 0xc, 0x2bc, 0x2bd, 0xc, 0xa, 0x2, 
    0x2, 0x2bd, 0x2be, 0x7, 0x45, 0x2, 0x2, 0x2be, 0x2e4, 0x5, 0x72, 0x3a, 
    0xb, 0x2bf, 0x2c0, 0xc, 0x9, 0x2, 0x2, 0x2c0, 0x2c1, 0x9, 0xe, 0x2, 
    0x2, 0x2c1, 0x2e4, 0x5, 0x72, 0x3a, 0xa, 0x2c2, 0x2c3, 0xc, 0x8, 0x2, 
    0x2, 0x2c3, 0x2c4, 0x9, 0xf, 0x2, 0x2, 0x2c4, 0x2e4, 0x5, 0x72, 0x3a, 
    0x9, 0x2c5, 0x2c6, 0xc, 0x7, 0x2, 0x2, 0x2c6, 0x2c7, 0x7, 0x48, 0x2, 
    0x2, 0x2c7, 0x2e4, 0x5, 0x72, 0x3a, 0x8, 0x2c8, 0x2c9, 0xc, 0x6, 0x2, 
    0x2, 0x2c9, 0x2ca, 0x7, 0x49, 0x2, 0x2, 0x2ca, 0x2e4, 0x5, 0x72, 0x3a, 
    0x7, 0x2cb, 0x2cc, 0xc, 0x5, 0x2, 0x2, 0x2cc, 0x2cd, 0x7, 0x4a, 0x2, 
    0x2, 0x2cd, 0x2ce, 0x5, 0x72, 0x3a, 0x2, 0x2ce, 0x2cf, 0x7, 0x4b, 0x2, 
    0x2, 0x2cf, 0x2d0, 0x5, 0x72, 0x3a, 0x6, 0x2d0, 0x2e4, 0x3, 0x2, 0x2, 
    0x2, 0x2d1, 0x2d2, 0xc, 0x4, 0x2, 0x2, 0x2d2, 0x2d3, 0x9, 0x10, 0x2, 
    0x2, 0x2d3, 0x2e4, 0x5, 0x72, 0x3a, 0x5, 0x2d4, 0x2d5, 0xc, 0x1b, 0x2, 
    0x2, 0x2d5, 0x2e4, 0x9, 0x9, 0x2, 0x2, 0x2d6, 0x2d7, 0xc, 0x19, 0x2, 
    0x2, 0x2d7, 0x2d8, 0x7, 0x22, 0x2, 0x2, 0x2d8, 0x2d9, 0x5, 0x72, 0x3a, 
    0x2, 0x2d9, 0x2da, 0x7, 0x23, 0x2, 0x2, 0x2da, 0x2e4, 0x3, 0x2, 0x2, 
    0x2, 0x2db, 0x2dc, 0xc, 0x18, 0x2, 0x2, 0x2dc, 0x2dd, 0x7, 0x17, 0x2, 
    0x2, 0x2dd, 0x2de, 0x5, 0x7c, 0x3f, 0x2, 0x2de, 0x2df, 0x7, 0x18, 0x2, 
    0x2, 0x2df, 0x2e4, 0x3, 0x2, 0x2, 0x2, 0x2e0, 0x2e1, 0xc, 0x17, 0x2, 
    0x2, 0x2e1, 0x2e2, 0x7, 0x25, 0x2, 0x2, 0x2e2, 0x2e4, 0x5, 0xaa, 0x56, 
    0x2, 0x2e3, 0x2aa, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2ad, 0x3, 0x2, 0x2, 
    0x2, 0x2e3, 0x2b0, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2b3, 0x3, 0x2, 0x2, 
    0x2, 0x2e3, 0x2b6, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2b9, 0x3, 0x2, 0x2, 
    0x2, 0x2e3, 0x2bc, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2bf, 0x3, 0x2, 0x2, 
    0x2, 0x2e3, 0x2c2, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2c5, 0x3, 0x2, 0x2, 
    0x2, 0x2e3, 0x2c8, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2cb, 0x3, 0x2, 0x2, 
    0x2, 0x2e3, 0x2d1, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2d4, 0x3, 0x2, 0x2, 
    0x2, 0x2e3, 0x2d6, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2db, 0x3, 0x2, 0x2, 
    0x2, 0x2e3, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x2e4, 0x2e7, 0x3, 0x2, 0x2, 
    0x2, 0x2e5, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e6, 0x3, 0x2, 0x2, 
    0x2, 0x2e6, 0x73, 0x3, 0x2, 0x2, 0x2, 0x2e7, 0x2e5, 0x3, 0x2, 0x2, 0x2, 
    0x2e8, 0x2f9, 0x7, 0x65, 0x2, 0x2, 0x2e9, 0x2f9, 0x5, 0xa8, 0x55, 0x2, 
    0x2ea, 0x2f9, 0x7, 0x69, 0x2, 0x2, 0x2eb, 0x2f9, 0x7, 0x79, 0x2, 0x2, 
    0x2ec, 0x2ef, 0x5, 0xaa, 0x56, 0x2, 0x2ed, 0x2ee, 0x7, 0x22, 0x2, 0x2, 
    0x2ee, 0x2f0, 0x7, 0x23, 0x2, 0x2, 0x2ef, 0x2ed, 0x3, 0x2, 0x2, 0x2, 
    0x2ef, 0x2f0, 0x3, 0x2, 0x2, 0x2, 0x2f0, 0x2f9, 0x3, 0x2, 0x2, 0x2, 
    0x2f1, 0x2f9, 0x7, 0x76, 0x2, 0x2, 0x2f2, 0x2f9, 0x5, 0xa4, 0x53, 0x2, 
    0x2f3, 0x2f6, 0x5, 0xa6, 0x54, 0x2, 0x2f4, 0x2f5, 0x7, 0x22, 0x2, 0x2, 
    0x2f5, 0x2f7, 0x7, 0x23, 0x2, 0x2, 0x2f6, 0x2f4, 0x3, 0x2, 0x2, 0x2, 
    0x2f6, 0x2f7, 0x3, 0x2, 0x2, 0x2, 0x2f7, 0x2f9, 0x3, 0x2, 0x2, 0x2, 
    0x2f8, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2e9, 0x3, 0x2, 0x2, 0x2, 
    0x2f8, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2eb, 0x3, 0x2, 0x2, 0x2, 
    0x2f8, 0x2ec, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2f1, 0x3, 0x2, 0x2, 0x2, 
    0x2f8, 0x2f2, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2f3, 0x3, 0x2, 0x2, 0x2, 
    0x2f9, 0x75, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2ff, 0x5, 0x72, 0x3a, 0x2, 
    0x2fb, 0x2fc, 0x7, 0x11, 0x2, 0x2, 0x2fc, 0x2fe, 0x5, 0x72, 0x3a, 0x2, 
    0x2fd, 0x2fb, 0x3, 0x2, 0x2, 0x2, 0x2fe, 0x301, 0x3, 0x2, 0x2, 0x2, 
    0x2ff, 0x2fd, 0x3, 0x2, 0x2, 0x2, 0x2ff, 0x300, 0x3, 0x2, 0x2, 0x2, 
    0x300, 0x77, 0x3, 0x2, 0x2, 0x2, 0x301, 0x2ff, 0x3, 0x2, 0x2, 0x2, 0x302, 
    0x307, 0x5, 0x7a, 0x3e, 0x2, 0x303, 0x304, 0x7, 0x11, 0x2, 0x2, 0x304, 
    0x306, 0x5, 0x7a, 0x3e, 0x2, 0x305, 0x303, 0x3, 0x2, 0x2, 0x2, 0x306, 
    0x309, 0x3, 0x2, 0x2, 0x2, 0x307, 0x305, 0x3, 0x2, 0x2, 0x2, 0x307, 
    0x308, 0x3, 0x2, 0x2, 0x2, 0x308, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x309, 
    0x307, 0x3, 0x2, 0x2, 0x2, 0x30a, 0x30c, 0x7, 0x11, 0x2, 0x2, 0x30b, 
    0x30a, 0x3, 0x2, 0x2, 0x2, 0x30b, 0x30c, 0x3, 0x2, 0x2, 0x2, 0x30c, 
    0x79, 0x3, 0x2, 0x2, 0x2, 0x30d, 0x30e, 0x5, 0xaa, 0x56, 0x2, 0x30e, 
    0x30f, 0x7, 0x4b, 0x2, 0x2, 0x30f, 0x310, 0x5, 0x72, 0x3a, 0x2, 0x310, 
    0x7b, 0x3, 0x2, 0x2, 0x2, 0x311, 0x313, 0x7, 0x10, 0x2, 0x2, 0x312, 
    0x314, 0x5, 0x78, 0x3d, 0x2, 0x313, 0x312, 0x3, 0x2, 0x2, 0x2, 0x313, 
    0x314, 0x3, 0x2, 0x2, 0x2, 0x314, 0x315, 0x3, 0x2, 0x2, 0x2, 0x315, 
    0x31a, 0x7, 0x12, 0x2, 0x2, 0x316, 0x318, 0x5, 0x76, 0x3c, 0x2, 0x317, 
    0x316, 0x3, 0x2, 0x2, 0x2, 0x317, 0x318, 0x3, 0x2, 0x2, 0x2, 0x318, 
    0x31a, 0x3, 0x2, 0x2, 0x2, 0x319, 0x311, 0x3, 0x2, 0x2, 0x2, 0x319, 
    0x317, 0x3, 0x2, 0x2, 0x2, 0x31a, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x31b, 0x31c, 
    0x5, 0x72, 0x3a, 0x2, 0x31c, 0x31d, 0x7, 0x17, 0x2, 0x2, 0x31d, 0x31e, 
    0x5, 0x7c, 0x3f, 0x2, 0x31e, 0x31f, 0x7, 0x18, 0x2, 0x2, 0x31f, 0x7f, 
    0x3, 0x2, 0x2, 0x2, 0x320, 0x324, 0x7, 0x10, 0x2, 0x2, 0x321, 0x323, 
    0x5, 0x82, 0x42, 0x2, 0x322, 0x321, 0x3, 0x2, 0x2, 0x2, 0x323, 0x326, 
    0x3, 0x2, 0x2, 0x2, 0x324, 0x322, 0x3, 0x2, 0x2, 0x2, 0x324, 0x325, 
    0x3, 0x2, 0x2, 0x2, 0x325, 0x327, 0x3, 0x2, 0x2, 0x2, 0x326, 0x324, 
    0x3, 0x2, 0x2, 0x2, 0x327, 0x328, 0x7, 0x12, 0x2, 0x2, 0x328, 0x81, 
    0x3, 0x2, 0x2, 0x2, 0x329, 0x33b, 0x5, 0xaa, 0x56, 0x2, 0x32a, 0x33b, 
    0x5, 0x80, 0x41, 0x2, 0x32b, 0x33b, 0x5, 0x84, 0x43, 0x2, 0x32c, 0x33b, 
    0x5, 0x88, 0x45, 0x2, 0x32d, 0x33b, 0x5, 0x8a, 0x46, 0x2, 0x32e, 0x33b, 
    0x5, 0x90, 0x49, 0x2, 0x32f, 0x33b, 0x5, 0x92, 0x4a, 0x2, 0x330, 0x33b, 
    0x5, 0x94, 0x4b, 0x2, 0x331, 0x33b, 0x5, 0x98, 0x4d, 0x2, 0x332, 0x33b, 
    0x5, 0x9c, 0x4f, 0x2, 0x333, 0x33b, 0x5, 0x9e, 0x50, 0x2, 0x334, 0x33b, 
    0x7, 0x6c, 0x2, 0x2, 0x335, 0x33b, 0x7, 0x6e, 0x2, 0x2, 0x336, 0x33b, 
    0x5, 0xa2, 0x52, 0x2, 0x337, 0x33b, 0x5, 0xa8, 0x55, 0x2, 0x338, 0x33b, 
    0x7, 0x79, 0x2, 0x2, 0x339, 0x33b, 0x7, 0x69, 0x2, 0x2, 0x33a, 0x329, 
    0x3, 0x2, 0x2, 0x2, 0x33a, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x33a, 0x32b, 
    0x3, 0x2, 0x2, 0x2, 0x33a, 0x32c, 0x3, 0x2, 0x2, 0x2, 0x33a, 0x32d, 
    0x3, 0x2, 0x2, 0x2, 0x33a, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x33a, 0x32f, 
    0x3, 0x2, 0x2, 0x2, 0x33a, 0x330, 0x3, 0x2, 0x2, 0x2, 0x33a, 0x331, 
    0x3, 0x2, 0x2, 0x2, 0x33a, 0x332, 0x3, 0x2, 0x2, 0x2, 0x33a, 0x333, 
    0x3, 0x2, 0x2, 0x2, 0x33a, 0x334, 0x3, 0x2, 0x2, 0x2, 0x33a, 0x335, 
    0x3, 0x2, 0x2, 0x2, 0x33a, 0x336, 0x3, 0x2, 0x2, 0x2, 0x33a, 0x337, 
    0x3, 0x2, 0x2, 0x2, 0x33a, 0x338, 0x3, 0x2, 0x2, 0x2, 0x33a, 0x339, 
    0x3, 0x2, 0x2, 0x2, 0x33b, 0x83, 0x3, 0x2, 0x2, 0x2, 0x33c, 0x33f, 0x5, 
    0x86, 0x44, 0x2, 0x33d, 0x33f, 0x5, 0xa0, 0x51, 0x2, 0x33e, 0x33c, 0x3, 
    0x2, 0x2, 0x2, 0x33e, 0x33d, 0x3, 0x2, 0x2, 0x2, 0x33f, 0x85, 0x3, 0x2, 
    0x2, 0x2, 0x340, 0x345, 0x7, 0x30, 0x2, 0x2, 0x341, 0x345, 0x7, 0x24, 
    0x2, 0x2, 0x342, 0x345, 0x7, 0x36, 0x2, 0x2, 0x343, 0x345, 0x5, 0xaa, 
    0x56, 0x2, 0x344, 0x340, 0x3, 0x2, 0x2, 0x2, 0x344, 0x341, 0x3, 0x2, 
    0x2, 0x2, 0x344, 0x342, 0x3, 0x2, 0x2, 0x2, 0x344, 0x343, 0x3, 0x2, 
    0x2, 0x2, 0x345, 0x352, 0x3, 0x2, 0x2, 0x2, 0x346, 0x348, 0x7, 0x17, 
    0x2, 0x2, 0x347, 0x349, 0x5, 0x84, 0x43, 0x2, 0x348, 0x347, 0x3, 0x2, 
    0x2, 0x2, 0x348, 0x349, 0x3, 0x2, 0x2, 0x2, 0x349, 0x34e, 0x3, 0x2, 
    0x2, 0x2, 0x34a, 0x34b, 0x7, 0x11, 0x2, 0x2, 0x34b, 0x34d, 0x5, 0x84, 
    0x43, 0x2, 0x34c, 0x34a, 0x3, 0x2, 0x2, 0x2, 0x34d, 0x350, 0x3, 0x2, 
    0x2, 0x2, 0x34e, 0x34c, 0x3, 0x2, 0x2, 0x2, 0x34e, 0x34f, 0x3, 0x2, 
    0x2, 0x2, 0x34f, 0x351, 0x3, 0x2, 0x2, 0x2, 0x350, 0x34e, 0x3, 0x2, 
    0x2, 0x2, 0x351, 0x353, 0x7, 0x18, 0x2, 0x2, 0x352, 0x346, 0x3, 0x2, 
    0x2, 0x2, 0x352, 0x353, 0x3, 0x2, 0x2, 0x2, 0x353, 0x87, 0x3, 0x2, 0x2, 
    0x2, 0x354, 0x355, 0x7, 0x56, 0x2, 0x2, 0x355, 0x358, 0x5, 0x8c, 0x47, 
    0x2, 0x356, 0x357, 0x7, 0x57, 0x2, 0x2, 0x357, 0x359, 0x5, 0x84, 0x43, 
    0x2, 0x358, 0x356, 0x3, 0x2, 0x2, 0x2, 0x358, 0x359, 0x3, 0x2, 0x2, 
    0x2, 0x359, 0x89, 0x3, 0x2, 0x2, 0x2, 0x35a, 0x35b, 0x5, 0x8c, 0x47, 
    0x2, 0x35b, 0x35c, 0x7, 0x57, 0x2, 0x2, 0x35c, 0x35d, 0x5, 0x84, 0x43, 
    0x2, 0x35d, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x35e, 0x364, 0x5, 0xaa, 0x56, 
    0x2, 0x35f, 0x360, 0x7, 0x17, 0x2, 0x2, 0x360, 0x361, 0x5, 0x8e, 0x48, 
    0x2, 0x361, 0x362, 0x7, 0x18, 0x2, 0x2, 0x362, 0x364, 0x3, 0x2, 0x2, 
    0x2, 0x363, 0x35e, 0x3, 0x2, 0x2, 0x2, 0x363, 0x35f, 0x3, 0x2, 0x2, 
    0x2, 0x364, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x365, 0x36a, 0x5, 0xaa, 0x56, 
    0x2, 0x366, 0x367, 0x7, 0x11, 0x2, 0x2, 0x367, 0x369, 0x5, 0xaa, 0x56, 
    0x2, 0x368, 0x366, 0x3, 0x2, 0x2, 0x2, 0x369, 0x36c, 0x3, 0x2, 0x2, 
    0x2, 0x36a, 0x368, 0x3, 0x2, 0x2, 0x2, 0x36a, 0x36b, 0x3, 0x2, 0x2, 
    0x2, 0x36b, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x36c, 0x36a, 0x3, 0x2, 0x2, 0x2, 
    0x36d, 0x36e, 0x7, 0x58, 0x2, 0x2, 0x36e, 0x36f, 0x5, 0xaa, 0x56, 0x2, 
    0x36f, 0x91, 0x3, 0x2, 0x2, 0x2, 0x370, 0x371, 0x5, 0xaa, 0x56, 0x2, 
    0x371, 0x372, 0x7, 0x4b, 0x2, 0x2, 0x372, 0x93, 0x3, 0x2, 0x2, 0x2, 
    0x373, 0x374, 0x7, 0x59, 0x2, 0x2, 0x374, 0x378, 0x5, 0x84, 0x43, 0x2, 
    0x375, 0x377, 0x5, 0x96, 0x4c, 0x2, 0x376, 0x375, 0x3, 0x2, 0x2, 0x2, 
    0x377, 0x37a, 0x3, 0x2, 0x2, 0x2, 0x378, 0x376, 0x3, 0x2, 0x2, 0x2, 
    0x378, 0x379, 0x3, 0x2, 0x2, 0x2, 0x379, 0x95, 0x3, 0x2, 0x2, 0x2, 0x37a, 
    0x378, 0x3, 0x2, 0x2, 0x2, 0x37b, 0x37c, 0x7, 0x5a, 0x2, 0x2, 0x37c, 
    0x37d, 0x5, 0xa0, 0x51, 0x2, 0x37d, 0x37e, 0x5, 0x80, 0x41, 0x2, 0x37e, 
    0x382, 0x3, 0x2, 0x2, 0x2, 0x37f, 0x380, 0x7, 0x5b, 0x2, 0x2, 0x380, 
    0x382, 0x5, 0x80, 0x41, 0x2, 0x381, 0x37b, 0x3, 0x2, 0x2, 0x2, 0x381, 
    0x37f, 0x3, 0x2, 0x2, 0x2, 0x382, 0x97, 0x3, 0x2, 0x2, 0x2, 0x383, 0x384, 
    0x7, 0x1e, 0x2, 0x2, 0x384, 0x385, 0x5, 0xaa, 0x56, 0x2, 0x385, 0x387, 
    0x7, 0x17, 0x2, 0x2, 0x386, 0x388, 0x5, 0x8e, 0x48, 0x2, 0x387, 0x386, 
    0x3, 0x2, 0x2, 0x2, 0x387, 0x388, 0x3, 0x2, 0x2, 0x2, 0x388, 0x389, 
    0x3, 0x2, 0x2, 0x2, 0x389, 0x38b, 0x7, 0x18, 0x2, 0x2, 0x38a, 0x38c, 
    0x5, 0x9a, 0x4e, 0x2, 0x38b, 0x38a, 0x3, 0x2, 0x2, 0x2, 0x38b, 0x38c, 
    0x3, 0x2, 0x2, 0x2, 0x38c, 0x38d, 0x3, 0x2, 0x2, 0x2, 0x38d, 0x38e, 
    0x5, 0x80, 0x41, 0x2, 0x38e, 0x99, 0x3, 0x2, 0x2, 0x2, 0x38f, 0x390, 
    0x7, 0x5c, 0x2, 0x2, 0x390, 0x391, 0x5, 0x8e, 0x48, 0x2, 0x391, 0x9b, 
    0x3, 0x2, 0x2, 0x2, 0x392, 0x395, 0x7, 0x1a, 0x2, 0x2, 0x393, 0x396, 
    0x5, 0x80, 0x41, 0x2, 0x394, 0x396, 0x5, 0x84, 0x43, 0x2, 0x395, 0x393, 
    0x3, 0x2, 0x2, 0x2, 0x395, 0x394, 0x3, 0x2, 0x2, 0x2, 0x396, 0x397, 
    0x3, 0x2, 0x2, 0x2, 0x397, 0x39a, 0x5, 0x84, 0x43, 0x2, 0x398, 0x39b, 
    0x5, 0x80, 0x41, 0x2, 0x399, 0x39b, 0x5, 0x84, 0x43, 0x2, 0x39a, 0x398, 
    0x3, 0x2, 0x2, 0x2, 0x39a, 0x399, 0x3, 0x2, 0x2, 0x2, 0x39b, 0x39c, 
    0x3, 0x2, 0x2, 0x2, 0x39c, 0x39d, 0x5, 0x80, 0x41, 0x2, 0x39d, 0x9d, 
    0x3, 0x2, 0x2, 0x2, 0x39e, 0x39f, 0x7, 0x2b, 0x2, 0x2, 0x39f, 0x3a0, 
    0x5, 0x84, 0x43, 0x2, 0x3a0, 0x3a1, 0x5, 0x80, 0x41, 0x2, 0x3a1, 0x9f, 
    0x3, 0x2, 0x2, 0x2, 0x3a2, 0x3a3, 0x9, 0x11, 0x2, 0x2, 0x3a3, 0xa1, 
    0x3, 0x2, 0x2, 0x2, 0x3a4, 0x3a5, 0x7, 0x2e, 0x2, 0x2, 0x3a5, 0x3a6, 
    0x5, 0xaa, 0x56, 0x2, 0x3a6, 0x3a7, 0x5, 0x80, 0x41, 0x2, 0x3a7, 0xa3, 
    0x3, 0x2, 0x2, 0x2, 0x3a8, 0x3aa, 0x7, 0x17, 0x2, 0x2, 0x3a9, 0x3ab, 
    0x5, 0x72, 0x3a, 0x2, 0x3aa, 0x3a9, 0x3, 0x2, 0x2, 0x2, 0x3aa, 0x3ab, 
    0x3, 0x2, 0x2, 0x2, 0x3ab, 0x3b2, 0x3, 0x2, 0x2, 0x2, 0x3ac, 0x3ae, 
    0x7, 0x11, 0x2, 0x2, 0x3ad, 0x3af, 0x5, 0x72, 0x3a, 0x2, 0x3ae, 0x3ad, 
    0x3, 0x2, 0x2, 0x2, 0x3ae, 0x3af, 0x3, 0x2, 0x2, 0x2, 0x3af, 0x3b1, 
    0x3, 0x2, 0x2, 0x2, 0x3b0, 0x3ac, 0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3b4, 
    0x3, 0x2, 0x2, 0x2, 0x3b2, 0x3b0, 0x3, 0x2, 0x2, 0x2, 0x3b2, 0x3b3, 
    0x3, 0x2, 0x2, 0x2, 0x3b3, 0x3b5, 0x3, 0x2, 0x2, 0x2, 0x3b4, 0x3b2, 
    0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3c3, 0x7, 0x18, 0x2, 0x2, 0x3b6, 0x3bf, 
    0x7, 0x22, 0x2, 0x2, 0x3b7, 0x3bc, 0x5, 0x72, 0x3a, 0x2, 0x3b8, 0x3b9, 
    0x7, 0x11, 0x2, 0x2, 0x3b9, 0x3bb, 0x5, 0x72, 0x3a, 0x2, 0x3ba, 0x3b8, 
    0x3, 0x2, 0x2, 0x2, 0x3bb, 0x3be, 0x3, 0x2, 0x2, 0x2, 0x3bc, 0x3ba, 
    0x3, 0x2, 0x2, 0x2, 0x3bc, 0x3bd, 0x3, 0x2, 0x2, 0x2, 0x3bd, 0x3c0, 
    0x3, 0x2, 0x2, 0x2, 0x3be, 0x3bc, 0x3, 0x2, 0x2, 0x2, 0x3bf, 0x3b7, 
    0x3, 0x2, 0x2, 0x2, 0x3bf, 0x3c0, 0x3, 0x2, 0x2, 0x2, 0x3c0, 0x3c1, 
    0x3, 0x2, 0x2, 0x2, 0x3c1, 0x3c3, 0x7, 0x23, 0x2, 0x2, 0x3c2, 0x3a8, 
    0x3, 0x2, 0x2, 0x2, 0x3c2, 0x3b6, 0x3, 0x2, 0x2, 0x2, 0x3c3, 0xa5, 0x3, 
    0x2, 0x2, 0x2, 0x3c4, 0x3c7, 0x5, 0x70, 0x39, 0x2, 0x3c5, 0x3c7, 0x5, 
    0x44, 0x23, 0x2, 0x3c6, 0x3c4, 0x3, 0x2, 0x2, 0x2, 0x3c6, 0x3c5, 0x3, 
    0x2, 0x2, 0x2, 0x3c7, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x3c8, 0x3ca, 0x9, 0x12, 
    0x2, 0x2, 0x3c9, 0x3cb, 0x7, 0x68, 0x2, 0x2, 0x3ca, 0x3c9, 0x3, 0x2, 
    0x2, 0x2, 0x3ca, 0x3cb, 0x3, 0x2, 0x2, 0x2, 0x3cb, 0xa9, 0x3, 0x2, 0x2, 
    0x2, 0x3cc, 0x3cd, 0x9, 0x13, 0x2, 0x2, 0x3cd, 0xab, 0x3, 0x2, 0x2, 
    0x2, 0x6e, 0xaf, 0xb1, 0xbf, 0xc3, 0xc8, 0xcf, 0xd5, 0xdb, 0xdf, 0xeb, 
    0xf3, 0xf8, 0x102, 0x105, 0x10b, 0x113, 0x116, 0x120, 0x126, 0x12c, 
    0x135, 0x143, 0x146, 0x152, 0x159, 0x15c, 0x15f, 0x163, 0x168, 0x16c, 
    0x177, 0x179, 0x17d, 0x183, 0x18d, 0x193, 0x19e, 0x1a1, 0x1a7, 0x1aa, 
    0x1b2, 0x1b5, 0x1bb, 0x1be, 0x1c6, 0x1c9, 0x1cf, 0x1d3, 0x1de, 0x1e3, 
    0x1e8, 0x1f0, 0x1ff, 0x201, 0x206, 0x210, 0x221, 0x22d, 0x237, 0x23d, 
    0x241, 0x244, 0x24b, 0x25f, 0x271, 0x275, 0x27a, 0x27e, 0x282, 0x287, 
    0x28c, 0x290, 0x2a8, 0x2e3, 0x2e5, 0x2ef, 0x2f6, 0x2f8, 0x2ff, 0x307, 
    0x30b, 0x313, 0x317, 0x319, 0x324, 0x33a, 0x33e, 0x344, 0x348, 0x34e, 
    0x352, 0x358, 0x363, 0x36a, 0x378, 0x381, 0x387, 0x38b, 0x395, 0x39a, 
    0x3aa, 0x3ae, 0x3b2, 0x3bc, 0x3bf, 0x3c2, 0x3c6, 0x3ca, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SolidityParser::Initializer SolidityParser::_init;
