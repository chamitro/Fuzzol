
// Generated from Solidity.g4 by ANTLR 4.7


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
    setState(179);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SolidityParser::T__0)
      | (1ULL << SolidityParser::T__10)
      | (1ULL << SolidityParser::T__16)
      | (1ULL << SolidityParser::T__17)
      | (1ULL << SolidityParser::T__18))) != 0) || _la == SolidityParser::NatSpecSingleLine

    || _la == SolidityParser::NatSpecMultiLine) {
      setState(177);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SolidityParser::T__0: {
          setState(174);
          pragmaDirective();
          break;
        }

        case SolidityParser::T__10: {
          setState(175);
          importDirective();
          break;
        }

        case SolidityParser::T__16:
        case SolidityParser::T__17:
        case SolidityParser::T__18:
        case SolidityParser::NatSpecSingleLine:
        case SolidityParser::NatSpecMultiLine: {
          setState(176);
          contractDefinition();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(181);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(182);
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
    setState(184);
    match(SolidityParser::T__0);
    setState(185);
    pragmaName();
    setState(186);
    pragmaValue();
    setState(187);
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
    setState(189);
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
    setState(193);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(191);
      version();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(192);
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
    setState(195);
    versionConstraint();
    setState(197);
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
      setState(196);
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
    setState(199);
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
    setState(202);
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
      setState(201);
      versionOperator();
    }
    setState(204);
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
    setState(206);
    identifier();
    setState(209);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__9) {
      setState(207);
      match(SolidityParser::T__9);
      setState(208);
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
    setState(245);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(211);
      match(SolidityParser::T__10);
      setState(212);
      match(SolidityParser::StringLiteral);
      setState(215);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SolidityParser::T__9) {
        setState(213);
        match(SolidityParser::T__9);
        setState(214);
        identifier();
      }
      setState(217);
      match(SolidityParser::T__1);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(218);
      match(SolidityParser::T__10);
      setState(221);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SolidityParser::T__11: {
          setState(219);
          match(SolidityParser::T__11);
          break;
        }

        case SolidityParser::T__12:
        case SolidityParser::T__39:
        case SolidityParser::Identifier: {
          setState(220);
          identifier();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(225);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SolidityParser::T__9) {
        setState(223);
        match(SolidityParser::T__9);
        setState(224);
        identifier();
      }
      setState(227);
      match(SolidityParser::T__12);
      setState(228);
      match(SolidityParser::StringLiteral);
      setState(229);
      match(SolidityParser::T__1);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(230);
      match(SolidityParser::T__10);
      setState(231);
      match(SolidityParser::T__13);
      setState(232);
      importDeclaration();
      setState(237);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SolidityParser::T__14) {
        setState(233);
        match(SolidityParser::T__14);
        setState(234);
        importDeclaration();
        setState(239);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(240);
      match(SolidityParser::T__15);
      setState(241);
      match(SolidityParser::T__12);
      setState(242);
      match(SolidityParser::StringLiteral);
      setState(243);
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
    setState(247);
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
    setState(250);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::NatSpecSingleLine

    || _la == SolidityParser::NatSpecMultiLine) {
      setState(249);
      natSpec();
    }
    setState(252);
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
    setState(253);
    identifier();
    setState(263);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__19) {
      setState(254);
      match(SolidityParser::T__19);
      setState(255);
      inheritanceSpecifier();
      setState(260);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SolidityParser::T__14) {
        setState(256);
        match(SolidityParser::T__14);
        setState(257);
        inheritanceSpecifier();
        setState(262);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(265);
    match(SolidityParser::T__13);
    setState(269);
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
      | (1ULL << SolidityParser::T__50)
      | (1ULL << SolidityParser::T__51)
      | (1ULL << SolidityParser::T__52)
      | (1ULL << SolidityParser::T__53))) != 0) || ((((_la - 93) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 93)) & ((1ULL << (SolidityParser::NatSpecSingleLine - 93))
      | (1ULL << (SolidityParser::NatSpecMultiLine - 93))
      | (1ULL << (SolidityParser::Int - 93))
      | (1ULL << (SolidityParser::Uint - 93))
      | (1ULL << (SolidityParser::Byte - 93))
      | (1ULL << (SolidityParser::Fixed - 93))
      | (1ULL << (SolidityParser::Ufixed - 93))
      | (1ULL << (SolidityParser::Identifier - 93)))) != 0)) {
      setState(266);
      contractPart();
      setState(271);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(272);
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
    setState(274);
    userDefinedTypeName();
    setState(280);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__20) {
      setState(275);
      match(SolidityParser::T__20);
      setState(277);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SolidityParser::T__3)
        | (1ULL << SolidityParser::T__12)
        | (1ULL << SolidityParser::T__20)
        | (1ULL << SolidityParser::T__31)
        | (1ULL << SolidityParser::T__33)
        | (1ULL << SolidityParser::T__39)
        | (1ULL << SolidityParser::T__50)
        | (1ULL << SolidityParser::T__51)
        | (1ULL << SolidityParser::T__52)
        | (1ULL << SolidityParser::T__53)
        | (1ULL << SolidityParser::T__54)
        | (1ULL << SolidityParser::T__55)
        | (1ULL << SolidityParser::T__56)
        | (1ULL << SolidityParser::T__57)
        | (1ULL << SolidityParser::T__58)
        | (1ULL << SolidityParser::T__59)
        | (1ULL << SolidityParser::T__60)
        | (1ULL << SolidityParser::T__61))) != 0) || ((((_la - 95) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 95)) & ((1ULL << (SolidityParser::Int - 95))
        | (1ULL << (SolidityParser::Uint - 95))
        | (1ULL << (SolidityParser::Byte - 95))
        | (1ULL << (SolidityParser::Fixed - 95))
        | (1ULL << (SolidityParser::Ufixed - 95))
        | (1ULL << (SolidityParser::BooleanLiteral - 95))
        | (1ULL << (SolidityParser::DecimalNumber - 95))
        | (1ULL << (SolidityParser::HexNumber - 95))
        | (1ULL << (SolidityParser::HexLiteral - 95))
        | (1ULL << (SolidityParser::TypeKeyword - 95))
        | (1ULL << (SolidityParser::Identifier - 95))
        | (1ULL << (SolidityParser::StringLiteral - 95)))) != 0)) {
        setState(276);
        expressionList();
      }
      setState(279);
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
    setState(290);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(282);
      stateVariableDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(283);
      usingForDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(284);
      structDefinition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(285);
      constructorDefinition();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(286);
      modifierDefinition();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(287);
      functionDefinition();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(288);
      eventDefinition();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(289);
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
    setState(292);
    typeName(0);
    setState(296);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 110) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 110)) & ((1ULL << (SolidityParser::ConstantKeyword - 110))
      | (1ULL << (SolidityParser::InternalKeyword - 110))
      | (1ULL << (SolidityParser::PrivateKeyword - 110))
      | (1ULL << (SolidityParser::PublicKeyword - 110)))) != 0)) {
      setState(293);
      _la = _input->LA(1);
      if (!(((((_la - 110) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 110)) & ((1ULL << (SolidityParser::ConstantKeyword - 110))
        | (1ULL << (SolidityParser::InternalKeyword - 110))
        | (1ULL << (SolidityParser::PrivateKeyword - 110))
        | (1ULL << (SolidityParser::PublicKeyword - 110)))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(298);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(299);
    identifier();
    setState(302);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__8) {
      setState(300);
      match(SolidityParser::T__8);
      setState(301);
      expression(0);
    }
    setState(304);
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
    setState(306);
    match(SolidityParser::T__22);
    setState(307);
    identifier();
    setState(308);
    match(SolidityParser::T__23);
    setState(311);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SolidityParser::T__11: {
        setState(309);
        match(SolidityParser::T__11);
        break;
      }

      case SolidityParser::T__12:
      case SolidityParser::T__27:
      case SolidityParser::T__33:
      case SolidityParser::T__35:
      case SolidityParser::T__39:
      case SolidityParser::T__50:
      case SolidityParser::T__51:
      case SolidityParser::T__52:
      case SolidityParser::T__53:
      case SolidityParser::Int:
      case SolidityParser::Uint:
      case SolidityParser::Byte:
      case SolidityParser::Fixed:
      case SolidityParser::Ufixed:
      case SolidityParser::Identifier: {
        setState(310);
        typeName(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(313);
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
    setState(315);
    match(SolidityParser::T__24);
    setState(316);
    identifier();
    setState(317);
    match(SolidityParser::T__13);
    setState(328);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SolidityParser::T__12)
      | (1ULL << SolidityParser::T__27)
      | (1ULL << SolidityParser::T__33)
      | (1ULL << SolidityParser::T__35)
      | (1ULL << SolidityParser::T__39)
      | (1ULL << SolidityParser::T__50)
      | (1ULL << SolidityParser::T__51)
      | (1ULL << SolidityParser::T__52)
      | (1ULL << SolidityParser::T__53))) != 0) || ((((_la - 95) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 95)) & ((1ULL << (SolidityParser::Int - 95))
      | (1ULL << (SolidityParser::Uint - 95))
      | (1ULL << (SolidityParser::Byte - 95))
      | (1ULL << (SolidityParser::Fixed - 95))
      | (1ULL << (SolidityParser::Ufixed - 95))
      | (1ULL << (SolidityParser::Identifier - 95)))) != 0)) {
      setState(318);
      variableDeclaration();
      setState(319);
      match(SolidityParser::T__1);
      setState(325);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SolidityParser::T__12)
        | (1ULL << SolidityParser::T__27)
        | (1ULL << SolidityParser::T__33)
        | (1ULL << SolidityParser::T__35)
        | (1ULL << SolidityParser::T__39)
        | (1ULL << SolidityParser::T__50)
        | (1ULL << SolidityParser::T__51)
        | (1ULL << SolidityParser::T__52)
        | (1ULL << SolidityParser::T__53))) != 0) || ((((_la - 95) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 95)) & ((1ULL << (SolidityParser::Int - 95))
        | (1ULL << (SolidityParser::Uint - 95))
        | (1ULL << (SolidityParser::Byte - 95))
        | (1ULL << (SolidityParser::Fixed - 95))
        | (1ULL << (SolidityParser::Ufixed - 95))
        | (1ULL << (SolidityParser::Identifier - 95)))) != 0)) {
        setState(320);
        variableDeclaration();
        setState(321);
        match(SolidityParser::T__1);
        setState(327);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(330);
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
    setState(332);
    match(SolidityParser::T__25);
    setState(333);
    parameterList();
    setState(334);
    modifierList();
    setState(335);
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
    setState(337);
    match(SolidityParser::T__26);
    setState(338);
    identifier();
    setState(340);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__20) {
      setState(339);
      parameterList();
    }
    setState(342);
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
    setState(344);
    identifier();
    setState(350);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__20) {
      setState(345);
      match(SolidityParser::T__20);
      setState(347);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SolidityParser::T__3)
        | (1ULL << SolidityParser::T__12)
        | (1ULL << SolidityParser::T__20)
        | (1ULL << SolidityParser::T__31)
        | (1ULL << SolidityParser::T__33)
        | (1ULL << SolidityParser::T__39)
        | (1ULL << SolidityParser::T__50)
        | (1ULL << SolidityParser::T__51)
        | (1ULL << SolidityParser::T__52)
        | (1ULL << SolidityParser::T__53)
        | (1ULL << SolidityParser::T__54)
        | (1ULL << SolidityParser::T__55)
        | (1ULL << SolidityParser::T__56)
        | (1ULL << SolidityParser::T__57)
        | (1ULL << SolidityParser::T__58)
        | (1ULL << SolidityParser::T__59)
        | (1ULL << SolidityParser::T__60)
        | (1ULL << SolidityParser::T__61))) != 0) || ((((_la - 95) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 95)) & ((1ULL << (SolidityParser::Int - 95))
        | (1ULL << (SolidityParser::Uint - 95))
        | (1ULL << (SolidityParser::Byte - 95))
        | (1ULL << (SolidityParser::Fixed - 95))
        | (1ULL << (SolidityParser::Ufixed - 95))
        | (1ULL << (SolidityParser::BooleanLiteral - 95))
        | (1ULL << (SolidityParser::DecimalNumber - 95))
        | (1ULL << (SolidityParser::HexNumber - 95))
        | (1ULL << (SolidityParser::HexLiteral - 95))
        | (1ULL << (SolidityParser::TypeKeyword - 95))
        | (1ULL << (SolidityParser::Identifier - 95))
        | (1ULL << (SolidityParser::StringLiteral - 95)))) != 0)) {
        setState(346);
        expressionList();
      }
      setState(349);
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
    setState(353);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::NatSpecSingleLine

    || _la == SolidityParser::NatSpecMultiLine) {
      setState(352);
      natSpec();
    }
    setState(355);
    match(SolidityParser::T__27);
    setState(357);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__12

    || _la == SolidityParser::T__39 || _la == SolidityParser::Identifier) {
      setState(356);
      identifier();
    }
    setState(359);
    parameterList();
    setState(360);
    modifierList();
    setState(362);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__28) {
      setState(361);
      returnParameters();
    }
    setState(366);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SolidityParser::T__1: {
        setState(364);
        match(SolidityParser::T__1);
        break;
      }

      case SolidityParser::T__13: {
        setState(365);
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
    setState(368);
    match(SolidityParser::T__28);
    setState(369);
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
    setState(379);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SolidityParser::T__12

    || _la == SolidityParser::T__39 || ((((_la - 110) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 110)) & ((1ULL << (SolidityParser::ConstantKeyword - 110))
      | (1ULL << (SolidityParser::ExternalKeyword - 110))
      | (1ULL << (SolidityParser::InternalKeyword - 110))
      | (1ULL << (SolidityParser::PayableKeyword - 110))
      | (1ULL << (SolidityParser::PrivateKeyword - 110))
      | (1ULL << (SolidityParser::PublicKeyword - 110))
      | (1ULL << (SolidityParser::PureKeyword - 110))
      | (1ULL << (SolidityParser::ViewKeyword - 110))
      | (1ULL << (SolidityParser::Identifier - 110)))) != 0)) {
      setState(377);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SolidityParser::T__12:
        case SolidityParser::T__39:
        case SolidityParser::Identifier: {
          setState(371);
          modifierInvocation();
          break;
        }

        case SolidityParser::ConstantKeyword:
        case SolidityParser::PayableKeyword:
        case SolidityParser::PureKeyword:
        case SolidityParser::ViewKeyword: {
          setState(372);
          stateMutability();
          break;
        }

        case SolidityParser::ExternalKeyword: {
          setState(373);
          match(SolidityParser::ExternalKeyword);
          break;
        }

        case SolidityParser::PublicKeyword: {
          setState(374);
          match(SolidityParser::PublicKeyword);
          break;
        }

        case SolidityParser::InternalKeyword: {
          setState(375);
          match(SolidityParser::InternalKeyword);
          break;
        }

        case SolidityParser::PrivateKeyword: {
          setState(376);
          match(SolidityParser::PrivateKeyword);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(381);
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
    setState(383);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::NatSpecSingleLine

    || _la == SolidityParser::NatSpecMultiLine) {
      setState(382);
      natSpec();
    }
    setState(385);
    match(SolidityParser::T__29);
    setState(386);
    identifier();
    setState(387);
    eventParameterList();
    setState(389);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::AnonymousKeyword) {
      setState(388);
      match(SolidityParser::AnonymousKeyword);
    }
    setState(391);
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
    setState(393);
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
    setState(395);
    match(SolidityParser::T__30);
    setState(396);
    identifier();
    setState(397);
    match(SolidityParser::T__13);
    setState(399);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__12

    || _la == SolidityParser::T__39 || _la == SolidityParser::Identifier) {
      setState(398);
      enumValue();
    }
    setState(405);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SolidityParser::T__14) {
      setState(401);
      match(SolidityParser::T__14);
      setState(402);
      enumValue();
      setState(407);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(408);
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
    setState(410);
    match(SolidityParser::T__20);
    setState(419);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SolidityParser::T__12)
      | (1ULL << SolidityParser::T__27)
      | (1ULL << SolidityParser::T__33)
      | (1ULL << SolidityParser::T__35)
      | (1ULL << SolidityParser::T__39)
      | (1ULL << SolidityParser::T__50)
      | (1ULL << SolidityParser::T__51)
      | (1ULL << SolidityParser::T__52)
      | (1ULL << SolidityParser::T__53))) != 0) || ((((_la - 95) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 95)) & ((1ULL << (SolidityParser::Int - 95))
      | (1ULL << (SolidityParser::Uint - 95))
      | (1ULL << (SolidityParser::Byte - 95))
      | (1ULL << (SolidityParser::Fixed - 95))
      | (1ULL << (SolidityParser::Ufixed - 95))
      | (1ULL << (SolidityParser::Identifier - 95)))) != 0)) {
      setState(411);
      parameter();
      setState(416);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SolidityParser::T__14) {
        setState(412);
        match(SolidityParser::T__14);
        setState(413);
        parameter();
        setState(418);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(421);
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
    setState(423);
    typeName(0);
    setState(425);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      setState(424);
      storageLocation();
      break;
    }

    }
    setState(428);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__12

    || _la == SolidityParser::T__39 || _la == SolidityParser::Identifier) {
      setState(427);
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
    setState(430);
    match(SolidityParser::T__20);
    setState(439);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SolidityParser::T__12)
      | (1ULL << SolidityParser::T__27)
      | (1ULL << SolidityParser::T__33)
      | (1ULL << SolidityParser::T__35)
      | (1ULL << SolidityParser::T__39)
      | (1ULL << SolidityParser::T__50)
      | (1ULL << SolidityParser::T__51)
      | (1ULL << SolidityParser::T__52)
      | (1ULL << SolidityParser::T__53))) != 0) || ((((_la - 95) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 95)) & ((1ULL << (SolidityParser::Int - 95))
      | (1ULL << (SolidityParser::Uint - 95))
      | (1ULL << (SolidityParser::Byte - 95))
      | (1ULL << (SolidityParser::Fixed - 95))
      | (1ULL << (SolidityParser::Ufixed - 95))
      | (1ULL << (SolidityParser::Identifier - 95)))) != 0)) {
      setState(431);
      eventParameter();
      setState(436);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SolidityParser::T__14) {
        setState(432);
        match(SolidityParser::T__14);
        setState(433);
        eventParameter();
        setState(438);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(441);
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
    setState(443);
    typeName(0);
    setState(445);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::IndexedKeyword) {
      setState(444);
      match(SolidityParser::IndexedKeyword);
    }
    setState(448);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__12

    || _la == SolidityParser::T__39 || _la == SolidityParser::Identifier) {
      setState(447);
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
    setState(450);
    match(SolidityParser::T__20);
    setState(459);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SolidityParser::T__12)
      | (1ULL << SolidityParser::T__27)
      | (1ULL << SolidityParser::T__33)
      | (1ULL << SolidityParser::T__35)
      | (1ULL << SolidityParser::T__39)
      | (1ULL << SolidityParser::T__50)
      | (1ULL << SolidityParser::T__51)
      | (1ULL << SolidityParser::T__52)
      | (1ULL << SolidityParser::T__53))) != 0) || ((((_la - 95) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 95)) & ((1ULL << (SolidityParser::Int - 95))
      | (1ULL << (SolidityParser::Uint - 95))
      | (1ULL << (SolidityParser::Byte - 95))
      | (1ULL << (SolidityParser::Fixed - 95))
      | (1ULL << (SolidityParser::Ufixed - 95))
      | (1ULL << (SolidityParser::Identifier - 95)))) != 0)) {
      setState(451);
      functionTypeParameter();
      setState(456);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SolidityParser::T__14) {
        setState(452);
        match(SolidityParser::T__14);
        setState(453);
        functionTypeParameter();
        setState(458);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(461);
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
    setState(463);
    typeName(0);
    setState(465);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SolidityParser::T__37)
      | (1ULL << SolidityParser::T__38)
      | (1ULL << SolidityParser::T__39))) != 0)) {
      setState(464);
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
    setState(467);
    typeName(0);
    setState(469);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      setState(468);
      storageLocation();
      break;
    }

    }
    setState(471);
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
  size_t startState = 64;
  enterRecursionRule(_localctx, 64, SolidityParser::RuleTypeName, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(480);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
    case 1: {
      setState(474);
      elementaryTypeName();
      break;
    }

    case 2: {
      setState(475);
      userDefinedTypeName();
      break;
    }

    case 3: {
      setState(476);
      mapping();
      break;
    }

    case 4: {
      setState(477);
      functionTypeName();
      break;
    }

    case 5: {
      setState(478);
      match(SolidityParser::T__33);
      setState(479);
      match(SolidityParser::PayableKeyword);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(490);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TypeNameContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTypeName);
        setState(482);

        if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
        setState(483);
        match(SolidityParser::T__31);
        setState(485);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << SolidityParser::T__3)
          | (1ULL << SolidityParser::T__12)
          | (1ULL << SolidityParser::T__20)
          | (1ULL << SolidityParser::T__31)
          | (1ULL << SolidityParser::T__33)
          | (1ULL << SolidityParser::T__39)
          | (1ULL << SolidityParser::T__50)
          | (1ULL << SolidityParser::T__51)
          | (1ULL << SolidityParser::T__52)
          | (1ULL << SolidityParser::T__53)
          | (1ULL << SolidityParser::T__54)
          | (1ULL << SolidityParser::T__55)
          | (1ULL << SolidityParser::T__56)
          | (1ULL << SolidityParser::T__57)
          | (1ULL << SolidityParser::T__58)
          | (1ULL << SolidityParser::T__59)
          | (1ULL << SolidityParser::T__60)
          | (1ULL << SolidityParser::T__61))) != 0) || ((((_la - 95) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 95)) & ((1ULL << (SolidityParser::Int - 95))
          | (1ULL << (SolidityParser::Uint - 95))
          | (1ULL << (SolidityParser::Byte - 95))
          | (1ULL << (SolidityParser::Fixed - 95))
          | (1ULL << (SolidityParser::Ufixed - 95))
          | (1ULL << (SolidityParser::BooleanLiteral - 95))
          | (1ULL << (SolidityParser::DecimalNumber - 95))
          | (1ULL << (SolidityParser::HexNumber - 95))
          | (1ULL << (SolidityParser::HexLiteral - 95))
          | (1ULL << (SolidityParser::TypeKeyword - 95))
          | (1ULL << (SolidityParser::Identifier - 95))
          | (1ULL << (SolidityParser::StringLiteral - 95)))) != 0)) {
          setState(484);
          expression(0);
        }
        setState(487);
        match(SolidityParser::T__32); 
      }
      setState(492);
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
    setState(493);
    identifier();
    setState(498);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(494);
        match(SolidityParser::T__34);
        setState(495);
        identifier(); 
      }
      setState(500);
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
    setState(501);
    match(SolidityParser::T__35);
    setState(502);
    match(SolidityParser::T__20);
    setState(503);
    elementaryTypeName();
    setState(504);
    match(SolidityParser::T__36);
    setState(505);
    typeName(0);
    setState(506);
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
    setState(508);
    match(SolidityParser::T__27);
    setState(509);
    functionTypeParameterList();
    setState(515);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(513);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case SolidityParser::InternalKeyword: {
            setState(510);
            match(SolidityParser::InternalKeyword);
            break;
          }

          case SolidityParser::ExternalKeyword: {
            setState(511);
            match(SolidityParser::ExternalKeyword);
            break;
          }

          case SolidityParser::ConstantKeyword:
          case SolidityParser::PayableKeyword:
          case SolidityParser::PureKeyword:
          case SolidityParser::ViewKeyword: {
            setState(512);
            stateMutability();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(517);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
    }
    setState(520);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      setState(518);
      match(SolidityParser::T__28);
      setState(519);
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
    setState(522);
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
    setState(524);
    _la = _input->LA(1);
    if (!(((((_la - 110) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 110)) & ((1ULL << (SolidityParser::ConstantKeyword - 110))
      | (1ULL << (SolidityParser::PayableKeyword - 110))
      | (1ULL << (SolidityParser::PureKeyword - 110))
      | (1ULL << (SolidityParser::ViewKeyword - 110)))) != 0))) {
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
    setState(526);
    match(SolidityParser::T__13);
    setState(530);
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
      | (1ULL << SolidityParser::T__59)
      | (1ULL << SolidityParser::T__60)
      | (1ULL << SolidityParser::T__61))) != 0) || ((((_la - 95) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 95)) & ((1ULL << (SolidityParser::Int - 95))
      | (1ULL << (SolidityParser::Uint - 95))
      | (1ULL << (SolidityParser::Byte - 95))
      | (1ULL << (SolidityParser::Fixed - 95))
      | (1ULL << (SolidityParser::Ufixed - 95))
      | (1ULL << (SolidityParser::BooleanLiteral - 95))
      | (1ULL << (SolidityParser::DecimalNumber - 95))
      | (1ULL << (SolidityParser::HexNumber - 95))
      | (1ULL << (SolidityParser::HexLiteral - 95))
      | (1ULL << (SolidityParser::BreakKeyword - 95))
      | (1ULL << (SolidityParser::ContinueKeyword - 95))
      | (1ULL << (SolidityParser::TypeKeyword - 95))
      | (1ULL << (SolidityParser::Identifier - 95))
      | (1ULL << (SolidityParser::StringLiteral - 95)))) != 0)) {
      setState(527);
      statement();
      setState(532);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(533);
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

SolidityParser::TryStatementContext* SolidityParser::StatementContext::tryStatement() {
  return getRuleContext<SolidityParser::TryStatementContext>(0);
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
    setState(548);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SolidityParser::T__40: {
        enterOuterAlt(_localctx, 1);
        setState(535);
        ifStatement();
        break;
      }

      case SolidityParser::T__44: {
        enterOuterAlt(_localctx, 2);
        setState(536);
        whileStatement();
        break;
      }

      case SolidityParser::T__23: {
        enterOuterAlt(_localctx, 3);
        setState(537);
        forStatement();
        break;
      }

      case SolidityParser::T__13: {
        enterOuterAlt(_localctx, 4);
        setState(538);
        block();
        break;
      }

      case SolidityParser::T__45: {
        enterOuterAlt(_localctx, 5);
        setState(539);
        inlineAssemblyStatement();
        break;
      }

      case SolidityParser::T__46: {
        enterOuterAlt(_localctx, 6);
        setState(540);
        doWhileStatement();
        break;
      }

      case SolidityParser::ContinueKeyword: {
        enterOuterAlt(_localctx, 7);
        setState(541);
        continueStatement();
        break;
      }

      case SolidityParser::BreakKeyword: {
        enterOuterAlt(_localctx, 8);
        setState(542);
        breakStatement();
        break;
      }

      case SolidityParser::T__47: {
        enterOuterAlt(_localctx, 9);
        setState(543);
        returnStatement();
        break;
      }

      case SolidityParser::T__48: {
        enterOuterAlt(_localctx, 10);
        setState(544);
        throwStatement();
        break;
      }

      case SolidityParser::T__49: {
        enterOuterAlt(_localctx, 11);
        setState(545);
        emitStatement();
        break;
      }

      case SolidityParser::T__42: {
        enterOuterAlt(_localctx, 12);
        setState(546);
        tryStatement();
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
      case SolidityParser::T__60:
      case SolidityParser::T__61:
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
        enterOuterAlt(_localctx, 13);
        setState(547);
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
    setState(550);
    expression(0);
    setState(551);
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
    setState(553);
    match(SolidityParser::T__40);
    setState(554);
    match(SolidityParser::T__20);
    setState(555);
    expression(0);
    setState(556);
    match(SolidityParser::T__21);
    setState(557);
    statement();
    setState(560);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
    case 1: {
      setState(558);
      match(SolidityParser::T__41);
      setState(559);
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

//----------------- TryStatementContext ------------------------------------------------------------------

SolidityParser::TryStatementContext::TryStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::ExpressionContext* SolidityParser::TryStatementContext::expression() {
  return getRuleContext<SolidityParser::ExpressionContext>(0);
}

SolidityParser::BlockContext* SolidityParser::TryStatementContext::block() {
  return getRuleContext<SolidityParser::BlockContext>(0);
}

SolidityParser::ReturnParametersContext* SolidityParser::TryStatementContext::returnParameters() {
  return getRuleContext<SolidityParser::ReturnParametersContext>(0);
}

std::vector<SolidityParser::CatchClauseContext *> SolidityParser::TryStatementContext::catchClause() {
  return getRuleContexts<SolidityParser::CatchClauseContext>();
}

SolidityParser::CatchClauseContext* SolidityParser::TryStatementContext::catchClause(size_t i) {
  return getRuleContext<SolidityParser::CatchClauseContext>(i);
}


size_t SolidityParser::TryStatementContext::getRuleIndex() const {
  return SolidityParser::RuleTryStatement;
}

antlrcpp::Any SolidityParser::TryStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitTryStatement(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::TryStatementContext* SolidityParser::tryStatement() {
  TryStatementContext *_localctx = _tracker.createInstance<TryStatementContext>(_ctx, getState());
  enterRule(_localctx, 84, SolidityParser::RuleTryStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(562);
    match(SolidityParser::T__42);
    setState(563);
    expression(0);
    setState(565);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__28) {
      setState(564);
      returnParameters();
    }
    setState(567);
    block();
    setState(569); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(568);
      catchClause();
      setState(571); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == SolidityParser::T__43);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CatchClauseContext ------------------------------------------------------------------

SolidityParser::CatchClauseContext::CatchClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SolidityParser::BlockContext* SolidityParser::CatchClauseContext::block() {
  return getRuleContext<SolidityParser::BlockContext>(0);
}

SolidityParser::ParameterListContext* SolidityParser::CatchClauseContext::parameterList() {
  return getRuleContext<SolidityParser::ParameterListContext>(0);
}

SolidityParser::IdentifierContext* SolidityParser::CatchClauseContext::identifier() {
  return getRuleContext<SolidityParser::IdentifierContext>(0);
}


size_t SolidityParser::CatchClauseContext::getRuleIndex() const {
  return SolidityParser::RuleCatchClause;
}

antlrcpp::Any SolidityParser::CatchClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SolidityVisitor*>(visitor))
    return parserVisitor->visitCatchClause(this);
  else
    return visitor->visitChildren(this);
}

SolidityParser::CatchClauseContext* SolidityParser::catchClause() {
  CatchClauseContext *_localctx = _tracker.createInstance<CatchClauseContext>(_ctx, getState());
  enterRule(_localctx, 86, SolidityParser::RuleCatchClause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(573);
    match(SolidityParser::T__43);
    setState(578);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SolidityParser::T__12)
      | (1ULL << SolidityParser::T__20)
      | (1ULL << SolidityParser::T__39))) != 0) || _la == SolidityParser::Identifier) {
      setState(575);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SolidityParser::T__12

      || _la == SolidityParser::T__39 || _la == SolidityParser::Identifier) {
        setState(574);
        identifier();
      }
      setState(577);
      parameterList();
    }
    setState(580);
    block();
   
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
  enterRule(_localctx, 88, SolidityParser::RuleWhileStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(582);
    match(SolidityParser::T__44);
    setState(583);
    match(SolidityParser::T__20);
    setState(584);
    expression(0);
    setState(585);
    match(SolidityParser::T__21);
    setState(586);
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
  enterRule(_localctx, 90, SolidityParser::RuleSimpleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(590);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
    case 1: {
      setState(588);
      variableDeclarationStatement();
      break;
    }

    case 2: {
      setState(589);
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
  enterRule(_localctx, 92, SolidityParser::RuleForStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(592);
    match(SolidityParser::T__23);
    setState(593);
    match(SolidityParser::T__20);
    setState(596);
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
      case SolidityParser::T__60:
      case SolidityParser::T__61:
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
        setState(594);
        simpleStatement();
        break;
      }

      case SolidityParser::T__1: {
        setState(595);
        match(SolidityParser::T__1);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(600);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SolidityParser::T__3:
      case SolidityParser::T__12:
      case SolidityParser::T__20:
      case SolidityParser::T__31:
      case SolidityParser::T__33:
      case SolidityParser::T__39:
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
      case SolidityParser::T__60:
      case SolidityParser::T__61:
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
        setState(598);
        expressionStatement();
        break;
      }

      case SolidityParser::T__1: {
        setState(599);
        match(SolidityParser::T__1);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(603);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SolidityParser::T__3)
      | (1ULL << SolidityParser::T__12)
      | (1ULL << SolidityParser::T__20)
      | (1ULL << SolidityParser::T__31)
      | (1ULL << SolidityParser::T__33)
      | (1ULL << SolidityParser::T__39)
      | (1ULL << SolidityParser::T__50)
      | (1ULL << SolidityParser::T__51)
      | (1ULL << SolidityParser::T__52)
      | (1ULL << SolidityParser::T__53)
      | (1ULL << SolidityParser::T__54)
      | (1ULL << SolidityParser::T__55)
      | (1ULL << SolidityParser::T__56)
      | (1ULL << SolidityParser::T__57)
      | (1ULL << SolidityParser::T__58)
      | (1ULL << SolidityParser::T__59)
      | (1ULL << SolidityParser::T__60)
      | (1ULL << SolidityParser::T__61))) != 0) || ((((_la - 95) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 95)) & ((1ULL << (SolidityParser::Int - 95))
      | (1ULL << (SolidityParser::Uint - 95))
      | (1ULL << (SolidityParser::Byte - 95))
      | (1ULL << (SolidityParser::Fixed - 95))
      | (1ULL << (SolidityParser::Ufixed - 95))
      | (1ULL << (SolidityParser::BooleanLiteral - 95))
      | (1ULL << (SolidityParser::DecimalNumber - 95))
      | (1ULL << (SolidityParser::HexNumber - 95))
      | (1ULL << (SolidityParser::HexLiteral - 95))
      | (1ULL << (SolidityParser::TypeKeyword - 95))
      | (1ULL << (SolidityParser::Identifier - 95))
      | (1ULL << (SolidityParser::StringLiteral - 95)))) != 0)) {
      setState(602);
      expression(0);
    }
    setState(605);
    match(SolidityParser::T__21);
    setState(606);
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
  enterRule(_localctx, 94, SolidityParser::RuleInlineAssemblyStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(608);
    match(SolidityParser::T__45);
    setState(610);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::StringLiteral) {
      setState(609);
      match(SolidityParser::StringLiteral);
    }
    setState(612);
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
  enterRule(_localctx, 96, SolidityParser::RuleDoWhileStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(614);
    match(SolidityParser::T__46);
    setState(615);
    statement();
    setState(616);
    match(SolidityParser::T__44);
    setState(617);
    match(SolidityParser::T__20);
    setState(618);
    expression(0);
    setState(619);
    match(SolidityParser::T__21);
    setState(620);
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
  enterRule(_localctx, 98, SolidityParser::RuleContinueStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(622);
    match(SolidityParser::ContinueKeyword);
    setState(623);
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
  enterRule(_localctx, 100, SolidityParser::RuleBreakStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(625);
    match(SolidityParser::BreakKeyword);
    setState(626);
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
  enterRule(_localctx, 102, SolidityParser::RuleReturnStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(628);
    match(SolidityParser::T__47);
    setState(630);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SolidityParser::T__3)
      | (1ULL << SolidityParser::T__12)
      | (1ULL << SolidityParser::T__20)
      | (1ULL << SolidityParser::T__31)
      | (1ULL << SolidityParser::T__33)
      | (1ULL << SolidityParser::T__39)
      | (1ULL << SolidityParser::T__50)
      | (1ULL << SolidityParser::T__51)
      | (1ULL << SolidityParser::T__52)
      | (1ULL << SolidityParser::T__53)
      | (1ULL << SolidityParser::T__54)
      | (1ULL << SolidityParser::T__55)
      | (1ULL << SolidityParser::T__56)
      | (1ULL << SolidityParser::T__57)
      | (1ULL << SolidityParser::T__58)
      | (1ULL << SolidityParser::T__59)
      | (1ULL << SolidityParser::T__60)
      | (1ULL << SolidityParser::T__61))) != 0) || ((((_la - 95) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 95)) & ((1ULL << (SolidityParser::Int - 95))
      | (1ULL << (SolidityParser::Uint - 95))
      | (1ULL << (SolidityParser::Byte - 95))
      | (1ULL << (SolidityParser::Fixed - 95))
      | (1ULL << (SolidityParser::Ufixed - 95))
      | (1ULL << (SolidityParser::BooleanLiteral - 95))
      | (1ULL << (SolidityParser::DecimalNumber - 95))
      | (1ULL << (SolidityParser::HexNumber - 95))
      | (1ULL << (SolidityParser::HexLiteral - 95))
      | (1ULL << (SolidityParser::TypeKeyword - 95))
      | (1ULL << (SolidityParser::Identifier - 95))
      | (1ULL << (SolidityParser::StringLiteral - 95)))) != 0)) {
      setState(629);
      expression(0);
    }
    setState(632);
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
  enterRule(_localctx, 104, SolidityParser::RuleThrowStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(634);
    match(SolidityParser::T__48);
    setState(635);
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
  enterRule(_localctx, 106, SolidityParser::RuleEmitStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(637);
    match(SolidityParser::T__49);
    setState(638);
    functionCall();
    setState(639);
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
  enterRule(_localctx, 108, SolidityParser::RuleVariableDeclarationStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(648);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx)) {
    case 1: {
      setState(641);
      match(SolidityParser::T__50);
      setState(642);
      identifierList();
      break;
    }

    case 2: {
      setState(643);
      variableDeclaration();
      break;
    }

    case 3: {
      setState(644);
      match(SolidityParser::T__20);
      setState(645);
      variableDeclarationList();
      setState(646);
      match(SolidityParser::T__21);
      break;
    }

    }
    setState(652);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__8) {
      setState(650);
      match(SolidityParser::T__8);
      setState(651);
      expression(0);
    }
    setState(654);
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
  enterRule(_localctx, 110, SolidityParser::RuleVariableDeclarationList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(657);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SolidityParser::T__12)
      | (1ULL << SolidityParser::T__27)
      | (1ULL << SolidityParser::T__33)
      | (1ULL << SolidityParser::T__35)
      | (1ULL << SolidityParser::T__39)
      | (1ULL << SolidityParser::T__50)
      | (1ULL << SolidityParser::T__51)
      | (1ULL << SolidityParser::T__52)
      | (1ULL << SolidityParser::T__53))) != 0) || ((((_la - 95) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 95)) & ((1ULL << (SolidityParser::Int - 95))
      | (1ULL << (SolidityParser::Uint - 95))
      | (1ULL << (SolidityParser::Byte - 95))
      | (1ULL << (SolidityParser::Fixed - 95))
      | (1ULL << (SolidityParser::Ufixed - 95))
      | (1ULL << (SolidityParser::Identifier - 95)))) != 0)) {
      setState(656);
      variableDeclaration();
    }
    setState(665);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SolidityParser::T__14) {
      setState(659);
      match(SolidityParser::T__14);
      setState(661);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SolidityParser::T__12)
        | (1ULL << SolidityParser::T__27)
        | (1ULL << SolidityParser::T__33)
        | (1ULL << SolidityParser::T__35)
        | (1ULL << SolidityParser::T__39)
        | (1ULL << SolidityParser::T__50)
        | (1ULL << SolidityParser::T__51)
        | (1ULL << SolidityParser::T__52)
        | (1ULL << SolidityParser::T__53))) != 0) || ((((_la - 95) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 95)) & ((1ULL << (SolidityParser::Int - 95))
        | (1ULL << (SolidityParser::Uint - 95))
        | (1ULL << (SolidityParser::Byte - 95))
        | (1ULL << (SolidityParser::Fixed - 95))
        | (1ULL << (SolidityParser::Ufixed - 95))
        | (1ULL << (SolidityParser::Identifier - 95)))) != 0)) {
        setState(660);
        variableDeclaration();
      }
      setState(667);
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
  enterRule(_localctx, 112, SolidityParser::RuleIdentifierList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(668);
    match(SolidityParser::T__20);
    setState(675);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(670);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SolidityParser::T__12

        || _la == SolidityParser::T__39 || _la == SolidityParser::Identifier) {
          setState(669);
          identifier();
        }
        setState(672);
        match(SolidityParser::T__14); 
      }
      setState(677);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx);
    }
    setState(679);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__12

    || _la == SolidityParser::T__39 || _la == SolidityParser::Identifier) {
      setState(678);
      identifier();
    }
    setState(681);
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
  enterRule(_localctx, 114, SolidityParser::RuleElementaryTypeName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(683);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SolidityParser::T__33)
      | (1ULL << SolidityParser::T__50)
      | (1ULL << SolidityParser::T__51)
      | (1ULL << SolidityParser::T__52)
      | (1ULL << SolidityParser::T__53))) != 0) || ((((_la - 95) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 95)) & ((1ULL << (SolidityParser::Int - 95))
      | (1ULL << (SolidityParser::Uint - 95))
      | (1ULL << (SolidityParser::Byte - 95))
      | (1ULL << (SolidityParser::Fixed - 95))
      | (1ULL << (SolidityParser::Ufixed - 95)))) != 0))) {
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
  size_t startState = 116;
  enterRecursionRule(_localctx, 116, SolidityParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(703);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx)) {
    case 1: {
      setState(686);
      match(SolidityParser::T__56);
      setState(687);
      typeName(0);
      break;
    }

    case 2: {
      setState(688);
      match(SolidityParser::T__20);
      setState(689);
      expression(0);
      setState(690);
      match(SolidityParser::T__21);
      break;
    }

    case 3: {
      setState(692);
      _la = _input->LA(1);
      if (!(_la == SolidityParser::T__54

      || _la == SolidityParser::T__55)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(693);
      expression(19);
      break;
    }

    case 4: {
      setState(694);
      _la = _input->LA(1);
      if (!(_la == SolidityParser::T__57

      || _la == SolidityParser::T__58)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(695);
      expression(18);
      break;
    }

    case 5: {
      setState(696);
      _la = _input->LA(1);
      if (!(_la == SolidityParser::T__59

      || _la == SolidityParser::T__60)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(697);
      expression(17);
      break;
    }

    case 6: {
      setState(698);
      match(SolidityParser::T__61);
      setState(699);
      expression(16);
      break;
    }

    case 7: {
      setState(700);
      match(SolidityParser::T__3);
      setState(701);
      expression(15);
      break;
    }

    case 8: {
      setState(702);
      primaryExpression();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(764);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(762);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(705);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(706);
          match(SolidityParser::T__62);
          setState(707);
          expression(15);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(708);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(709);
          _la = _input->LA(1);
          if (!(((((_la - 12) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 12)) & ((1ULL << (SolidityParser::T__11 - 12))
            | (1ULL << (SolidityParser::T__63 - 12))
            | (1ULL << (SolidityParser::T__64 - 12)))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(710);
          expression(14);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(711);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(712);
          _la = _input->LA(1);
          if (!(_la == SolidityParser::T__57

          || _la == SolidityParser::T__58)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(713);
          expression(13);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(714);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(715);
          _la = _input->LA(1);
          if (!(_la == SolidityParser::T__65

          || _la == SolidityParser::T__66)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(716);
          expression(12);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(717);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(718);
          match(SolidityParser::T__67);
          setState(719);
          expression(11);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(720);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(721);
          match(SolidityParser::T__2);
          setState(722);
          expression(10);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(723);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(724);
          match(SolidityParser::T__68);
          setState(725);
          expression(9);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(726);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(727);
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
          setState(728);
          expression(8);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(729);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(730);
          _la = _input->LA(1);
          if (!(_la == SolidityParser::T__69

          || _la == SolidityParser::T__70)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(731);
          expression(7);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(732);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(733);
          match(SolidityParser::T__71);
          setState(734);
          expression(6);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(735);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(736);
          match(SolidityParser::T__72);
          setState(737);
          expression(5);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(738);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(739);
          match(SolidityParser::T__73);
          setState(740);
          expression(0);
          setState(741);
          match(SolidityParser::T__74);
          setState(742);
          expression(4);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(744);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(745);
          _la = _input->LA(1);
          if (!(_la == SolidityParser::T__8 || ((((_la - 76) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 76)) & ((1ULL << (SolidityParser::T__75 - 76))
            | (1ULL << (SolidityParser::T__76 - 76))
            | (1ULL << (SolidityParser::T__77 - 76))
            | (1ULL << (SolidityParser::T__78 - 76))
            | (1ULL << (SolidityParser::T__79 - 76))
            | (1ULL << (SolidityParser::T__80 - 76))
            | (1ULL << (SolidityParser::T__81 - 76))
            | (1ULL << (SolidityParser::T__82 - 76))
            | (1ULL << (SolidityParser::T__83 - 76))
            | (1ULL << (SolidityParser::T__84 - 76)))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(746);
          expression(3);
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(747);

          if (!(precpred(_ctx, 25))) throw FailedPredicateException(this, "precpred(_ctx, 25)");
          setState(748);
          _la = _input->LA(1);
          if (!(_la == SolidityParser::T__54

          || _la == SolidityParser::T__55)) {
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
          setState(749);

          if (!(precpred(_ctx, 23))) throw FailedPredicateException(this, "precpred(_ctx, 23)");
          setState(750);
          match(SolidityParser::T__31);
          setState(751);
          expression(0);
          setState(752);
          match(SolidityParser::T__32);
          break;
        }

        case 16: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(754);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(755);
          match(SolidityParser::T__20);
          setState(756);
          functionCallArguments();
          setState(757);
          match(SolidityParser::T__21);
          break;
        }

        case 17: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(759);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(760);
          match(SolidityParser::T__34);
          setState(761);
          identifier();
          break;
        }

        } 
      }
      setState(766);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx);
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
  enterRule(_localctx, 118, SolidityParser::RulePrimaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(783);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(767);
      match(SolidityParser::BooleanLiteral);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(768);
      numberLiteral();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(769);
      match(SolidityParser::HexLiteral);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(770);
      match(SolidityParser::StringLiteral);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(771);
      identifier();
      setState(774);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx)) {
      case 1: {
        setState(772);
        match(SolidityParser::T__31);
        setState(773);
        match(SolidityParser::T__32);
        break;
      }

      }
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(776);
      match(SolidityParser::TypeKeyword);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(777);
      tupleExpression();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(778);
      typeNameExpression();
      setState(781);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx)) {
      case 1: {
        setState(779);
        match(SolidityParser::T__31);
        setState(780);
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
  enterRule(_localctx, 120, SolidityParser::RuleExpressionList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(785);
    expression(0);
    setState(790);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SolidityParser::T__14) {
      setState(786);
      match(SolidityParser::T__14);
      setState(787);
      expression(0);
      setState(792);
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
  enterRule(_localctx, 122, SolidityParser::RuleNameValueList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(793);
    nameValue();
    setState(798);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(794);
        match(SolidityParser::T__14);
        setState(795);
        nameValue(); 
      }
      setState(800);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx);
    }
    setState(802);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__14) {
      setState(801);
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
  enterRule(_localctx, 124, SolidityParser::RuleNameValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(804);
    identifier();
    setState(805);
    match(SolidityParser::T__74);
    setState(806);
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
  enterRule(_localctx, 126, SolidityParser::RuleFunctionCallArguments);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(816);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SolidityParser::T__13: {
        enterOuterAlt(_localctx, 1);
        setState(808);
        match(SolidityParser::T__13);
        setState(810);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SolidityParser::T__12

        || _la == SolidityParser::T__39 || _la == SolidityParser::Identifier) {
          setState(809);
          nameValueList();
        }
        setState(812);
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
      case SolidityParser::T__60:
      case SolidityParser::T__61:
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
        setState(814);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << SolidityParser::T__3)
          | (1ULL << SolidityParser::T__12)
          | (1ULL << SolidityParser::T__20)
          | (1ULL << SolidityParser::T__31)
          | (1ULL << SolidityParser::T__33)
          | (1ULL << SolidityParser::T__39)
          | (1ULL << SolidityParser::T__50)
          | (1ULL << SolidityParser::T__51)
          | (1ULL << SolidityParser::T__52)
          | (1ULL << SolidityParser::T__53)
          | (1ULL << SolidityParser::T__54)
          | (1ULL << SolidityParser::T__55)
          | (1ULL << SolidityParser::T__56)
          | (1ULL << SolidityParser::T__57)
          | (1ULL << SolidityParser::T__58)
          | (1ULL << SolidityParser::T__59)
          | (1ULL << SolidityParser::T__60)
          | (1ULL << SolidityParser::T__61))) != 0) || ((((_la - 95) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 95)) & ((1ULL << (SolidityParser::Int - 95))
          | (1ULL << (SolidityParser::Uint - 95))
          | (1ULL << (SolidityParser::Byte - 95))
          | (1ULL << (SolidityParser::Fixed - 95))
          | (1ULL << (SolidityParser::Ufixed - 95))
          | (1ULL << (SolidityParser::BooleanLiteral - 95))
          | (1ULL << (SolidityParser::DecimalNumber - 95))
          | (1ULL << (SolidityParser::HexNumber - 95))
          | (1ULL << (SolidityParser::HexLiteral - 95))
          | (1ULL << (SolidityParser::TypeKeyword - 95))
          | (1ULL << (SolidityParser::Identifier - 95))
          | (1ULL << (SolidityParser::StringLiteral - 95)))) != 0)) {
          setState(813);
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
  enterRule(_localctx, 128, SolidityParser::RuleFunctionCall);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(818);
    expression(0);
    setState(819);
    match(SolidityParser::T__20);
    setState(820);
    functionCallArguments();
    setState(821);
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

SolidityParser::AssemblyItemContext* SolidityParser::AssemblyBlockContext::assemblyItem() {
  return getRuleContext<SolidityParser::AssemblyItemContext>(0);
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
  enterRule(_localctx, 130, SolidityParser::RuleAssemblyBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(823);
    match(SolidityParser::T__13);
    setState(824);
    assemblyItem();
    setState(825);
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
  enterRule(_localctx, 132, SolidityParser::RuleAssemblyItem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(844);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(827);
      identifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(828);
      assemblyBlock();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(829);
      assemblyExpression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(830);
      assemblyLocalDefinition();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(831);
      assemblyAssignment();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(832);
      assemblyStackAssignment();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(833);
      labelDefinition();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(834);
      assemblySwitch();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(835);
      assemblyFunctionDefinition();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(836);
      assemblyFor();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(837);
      assemblyIf();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(838);
      match(SolidityParser::BreakKeyword);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(839);
      match(SolidityParser::ContinueKeyword);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(840);
      subAssembly();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(841);
      numberLiteral();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(842);
      match(SolidityParser::StringLiteral);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(843);
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

SolidityParser::IdentifierContext* SolidityParser::AssemblyExpressionContext::identifier() {
  return getRuleContext<SolidityParser::IdentifierContext>(0);
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
  enterRule(_localctx, 134, SolidityParser::RuleAssemblyExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(849);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(846);
      assemblyCall();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(847);
      assemblyLiteral();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(848);
      identifier();
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

//----------------- AssemblyCallContext ------------------------------------------------------------------

SolidityParser::AssemblyCallContext::AssemblyCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SolidityParser::AssemblyCallContext::Identifier() {
  return getToken(SolidityParser::Identifier, 0);
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
  enterRule(_localctx, 136, SolidityParser::RuleAssemblyCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(851);
    match(SolidityParser::Identifier);
    setState(852);
    match(SolidityParser::T__20);
    setState(863);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 92, _ctx)) {
    case 1: {
      setState(854);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SolidityParser::T__12

      || _la == SolidityParser::T__39 || ((((_la - 102) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 102)) & ((1ULL << (SolidityParser::DecimalNumber - 102))
        | (1ULL << (SolidityParser::HexNumber - 102))
        | (1ULL << (SolidityParser::HexLiteral - 102))
        | (1ULL << (SolidityParser::Identifier - 102))
        | (1ULL << (SolidityParser::StringLiteral - 102)))) != 0)) {
        setState(853);
        assemblyExpression();
      }
      setState(860);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SolidityParser::T__14) {
        setState(856);
        match(SolidityParser::T__14);
        setState(857);
        assemblyExpression();
        setState(862);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    }
    setState(865);
    match(SolidityParser::T__21);
   
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
  enterRule(_localctx, 138, SolidityParser::RuleAssemblyLocalDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(867);
    match(SolidityParser::T__85);
    setState(868);
    assemblyIdentifierOrList();
    setState(871);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__86) {
      setState(869);
      match(SolidityParser::T__86);
      setState(870);
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
  enterRule(_localctx, 140, SolidityParser::RuleAssemblyAssignment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(873);
    assemblyIdentifierOrList();
    setState(874);
    match(SolidityParser::T__86);
    setState(875);
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
  enterRule(_localctx, 142, SolidityParser::RuleAssemblyIdentifierOrList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(882);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SolidityParser::T__12:
      case SolidityParser::T__39:
      case SolidityParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(877);
        identifier();
        break;
      }

      case SolidityParser::T__20: {
        enterOuterAlt(_localctx, 2);
        setState(878);
        match(SolidityParser::T__20);
        setState(879);
        assemblyIdentifierList();
        setState(880);
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
  enterRule(_localctx, 144, SolidityParser::RuleAssemblyIdentifierList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(884);
    identifier();
    setState(889);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SolidityParser::T__14) {
      setState(885);
      match(SolidityParser::T__14);
      setState(886);
      identifier();
      setState(891);
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
  enterRule(_localctx, 146, SolidityParser::RuleAssemblyStackAssignment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(892);
    match(SolidityParser::T__87);
    setState(893);
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
  enterRule(_localctx, 148, SolidityParser::RuleLabelDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(895);
    identifier();
    setState(896);
    match(SolidityParser::T__74);
   
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

SolidityParser::AssemblyBlockContext* SolidityParser::AssemblySwitchContext::assemblyBlock() {
  return getRuleContext<SolidityParser::AssemblyBlockContext>(0);
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
  enterRule(_localctx, 150, SolidityParser::RuleAssemblySwitch);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(910);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SolidityParser::T__88: {
        enterOuterAlt(_localctx, 1);
        setState(898);
        match(SolidityParser::T__88);
        setState(899);
        assemblyExpression();
        setState(903);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SolidityParser::T__89

        || _la == SolidityParser::T__90) {
          setState(900);
          assemblyCase();
          setState(905);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case SolidityParser::T__15:
      case SolidityParser::T__89: {
        enterOuterAlt(_localctx, 2);
        setState(908);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SolidityParser::T__89) {
          setState(906);
          match(SolidityParser::T__89);
          setState(907);
          assemblyBlock();
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
  enterRule(_localctx, 152, SolidityParser::RuleAssemblyCase);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(918);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SolidityParser::T__90: {
        enterOuterAlt(_localctx, 1);
        setState(912);
        match(SolidityParser::T__90);
        setState(913);
        assemblyLiteral();
        setState(914);
        assemblyBlock();
        break;
      }

      case SolidityParser::T__89: {
        enterOuterAlt(_localctx, 2);
        setState(916);
        match(SolidityParser::T__89);
        setState(917);
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
  enterRule(_localctx, 154, SolidityParser::RuleAssemblyFunctionDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(920);
    match(SolidityParser::T__27);
    setState(921);
    identifier();
    setState(922);
    match(SolidityParser::T__20);
    setState(924);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__12

    || _la == SolidityParser::T__39 || _la == SolidityParser::Identifier) {
      setState(923);
      assemblyIdentifierList();
    }
    setState(926);
    match(SolidityParser::T__21);
    setState(928);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SolidityParser::T__91) {
      setState(927);
      assemblyFunctionReturns();
    }
    setState(930);
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
  enterRule(_localctx, 156, SolidityParser::RuleAssemblyFunctionReturns);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(932);
    match(SolidityParser::T__91);
    setState(933);
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
  enterRule(_localctx, 158, SolidityParser::RuleAssemblyFor);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(935);
    match(SolidityParser::T__23);
    setState(938);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SolidityParser::T__13: {
        setState(936);
        assemblyBlock();
        break;
      }

      case SolidityParser::T__12:
      case SolidityParser::T__39:
      case SolidityParser::DecimalNumber:
      case SolidityParser::HexNumber:
      case SolidityParser::HexLiteral:
      case SolidityParser::Identifier:
      case SolidityParser::StringLiteral: {
        setState(937);
        assemblyExpression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(940);
    assemblyExpression();
    setState(943);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SolidityParser::T__13: {
        setState(941);
        assemblyBlock();
        break;
      }

      case SolidityParser::T__12:
      case SolidityParser::T__39:
      case SolidityParser::DecimalNumber:
      case SolidityParser::HexNumber:
      case SolidityParser::HexLiteral:
      case SolidityParser::Identifier:
      case SolidityParser::StringLiteral: {
        setState(942);
        assemblyExpression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(945);
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
  enterRule(_localctx, 160, SolidityParser::RuleAssemblyIf);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(947);
    match(SolidityParser::T__40);
    setState(948);
    assemblyExpression();
    setState(949);
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
  enterRule(_localctx, 162, SolidityParser::RuleAssemblyLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(951);
    _la = _input->LA(1);
    if (!(((((_la - 102) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 102)) & ((1ULL << (SolidityParser::DecimalNumber - 102))
      | (1ULL << (SolidityParser::HexNumber - 102))
      | (1ULL << (SolidityParser::HexLiteral - 102))
      | (1ULL << (SolidityParser::StringLiteral - 102)))) != 0))) {
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
  enterRule(_localctx, 164, SolidityParser::RuleSubAssembly);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(953);
    match(SolidityParser::T__45);
    setState(954);
    identifier();
    setState(955);
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
  enterRule(_localctx, 166, SolidityParser::RuleTupleExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(983);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SolidityParser::T__20: {
        enterOuterAlt(_localctx, 1);
        setState(957);
        match(SolidityParser::T__20);

        setState(959);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << SolidityParser::T__3)
          | (1ULL << SolidityParser::T__12)
          | (1ULL << SolidityParser::T__20)
          | (1ULL << SolidityParser::T__31)
          | (1ULL << SolidityParser::T__33)
          | (1ULL << SolidityParser::T__39)
          | (1ULL << SolidityParser::T__50)
          | (1ULL << SolidityParser::T__51)
          | (1ULL << SolidityParser::T__52)
          | (1ULL << SolidityParser::T__53)
          | (1ULL << SolidityParser::T__54)
          | (1ULL << SolidityParser::T__55)
          | (1ULL << SolidityParser::T__56)
          | (1ULL << SolidityParser::T__57)
          | (1ULL << SolidityParser::T__58)
          | (1ULL << SolidityParser::T__59)
          | (1ULL << SolidityParser::T__60)
          | (1ULL << SolidityParser::T__61))) != 0) || ((((_la - 95) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 95)) & ((1ULL << (SolidityParser::Int - 95))
          | (1ULL << (SolidityParser::Uint - 95))
          | (1ULL << (SolidityParser::Byte - 95))
          | (1ULL << (SolidityParser::Fixed - 95))
          | (1ULL << (SolidityParser::Ufixed - 95))
          | (1ULL << (SolidityParser::BooleanLiteral - 95))
          | (1ULL << (SolidityParser::DecimalNumber - 95))
          | (1ULL << (SolidityParser::HexNumber - 95))
          | (1ULL << (SolidityParser::HexLiteral - 95))
          | (1ULL << (SolidityParser::TypeKeyword - 95))
          | (1ULL << (SolidityParser::Identifier - 95))
          | (1ULL << (SolidityParser::StringLiteral - 95)))) != 0)) {
          setState(958);
          expression(0);
        }
        setState(967);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SolidityParser::T__14) {
          setState(961);
          match(SolidityParser::T__14);
          setState(963);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << SolidityParser::T__3)
            | (1ULL << SolidityParser::T__12)
            | (1ULL << SolidityParser::T__20)
            | (1ULL << SolidityParser::T__31)
            | (1ULL << SolidityParser::T__33)
            | (1ULL << SolidityParser::T__39)
            | (1ULL << SolidityParser::T__50)
            | (1ULL << SolidityParser::T__51)
            | (1ULL << SolidityParser::T__52)
            | (1ULL << SolidityParser::T__53)
            | (1ULL << SolidityParser::T__54)
            | (1ULL << SolidityParser::T__55)
            | (1ULL << SolidityParser::T__56)
            | (1ULL << SolidityParser::T__57)
            | (1ULL << SolidityParser::T__58)
            | (1ULL << SolidityParser::T__59)
            | (1ULL << SolidityParser::T__60)
            | (1ULL << SolidityParser::T__61))) != 0) || ((((_la - 95) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 95)) & ((1ULL << (SolidityParser::Int - 95))
            | (1ULL << (SolidityParser::Uint - 95))
            | (1ULL << (SolidityParser::Byte - 95))
            | (1ULL << (SolidityParser::Fixed - 95))
            | (1ULL << (SolidityParser::Ufixed - 95))
            | (1ULL << (SolidityParser::BooleanLiteral - 95))
            | (1ULL << (SolidityParser::DecimalNumber - 95))
            | (1ULL << (SolidityParser::HexNumber - 95))
            | (1ULL << (SolidityParser::HexLiteral - 95))
            | (1ULL << (SolidityParser::TypeKeyword - 95))
            | (1ULL << (SolidityParser::Identifier - 95))
            | (1ULL << (SolidityParser::StringLiteral - 95)))) != 0)) {
            setState(962);
            expression(0);
          }
          setState(969);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(970);
        match(SolidityParser::T__21);
        break;
      }

      case SolidityParser::T__31: {
        enterOuterAlt(_localctx, 2);
        setState(971);
        match(SolidityParser::T__31);
        setState(980);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << SolidityParser::T__3)
          | (1ULL << SolidityParser::T__12)
          | (1ULL << SolidityParser::T__20)
          | (1ULL << SolidityParser::T__31)
          | (1ULL << SolidityParser::T__33)
          | (1ULL << SolidityParser::T__39)
          | (1ULL << SolidityParser::T__50)
          | (1ULL << SolidityParser::T__51)
          | (1ULL << SolidityParser::T__52)
          | (1ULL << SolidityParser::T__53)
          | (1ULL << SolidityParser::T__54)
          | (1ULL << SolidityParser::T__55)
          | (1ULL << SolidityParser::T__56)
          | (1ULL << SolidityParser::T__57)
          | (1ULL << SolidityParser::T__58)
          | (1ULL << SolidityParser::T__59)
          | (1ULL << SolidityParser::T__60)
          | (1ULL << SolidityParser::T__61))) != 0) || ((((_la - 95) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 95)) & ((1ULL << (SolidityParser::Int - 95))
          | (1ULL << (SolidityParser::Uint - 95))
          | (1ULL << (SolidityParser::Byte - 95))
          | (1ULL << (SolidityParser::Fixed - 95))
          | (1ULL << (SolidityParser::Ufixed - 95))
          | (1ULL << (SolidityParser::BooleanLiteral - 95))
          | (1ULL << (SolidityParser::DecimalNumber - 95))
          | (1ULL << (SolidityParser::HexNumber - 95))
          | (1ULL << (SolidityParser::HexLiteral - 95))
          | (1ULL << (SolidityParser::TypeKeyword - 95))
          | (1ULL << (SolidityParser::Identifier - 95))
          | (1ULL << (SolidityParser::StringLiteral - 95)))) != 0)) {
          setState(972);
          expression(0);
          setState(977);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == SolidityParser::T__14) {
            setState(973);
            match(SolidityParser::T__14);
            setState(974);
            expression(0);
            setState(979);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(982);
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
  enterRule(_localctx, 168, SolidityParser::RuleTypeNameExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(987);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SolidityParser::T__33:
      case SolidityParser::T__50:
      case SolidityParser::T__51:
      case SolidityParser::T__52:
      case SolidityParser::T__53:
      case SolidityParser::Int:
      case SolidityParser::Uint:
      case SolidityParser::Byte:
      case SolidityParser::Fixed:
      case SolidityParser::Ufixed: {
        enterOuterAlt(_localctx, 1);
        setState(985);
        elementaryTypeName();
        break;
      }

      case SolidityParser::T__12:
      case SolidityParser::T__39:
      case SolidityParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(986);
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
  enterRule(_localctx, 170, SolidityParser::RuleNumberLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(989);
    _la = _input->LA(1);
    if (!(_la == SolidityParser::DecimalNumber

    || _la == SolidityParser::HexNumber)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(991);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 111, _ctx)) {
    case 1: {
      setState(990);
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
  enterRule(_localctx, 172, SolidityParser::RuleIdentifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(993);
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
    case 58: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

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
  "tryStatement", "catchClause", "whileStatement", "simpleStatement", "forStatement", 
  "inlineAssemblyStatement", "doWhileStatement", "continueStatement", "breakStatement", 
  "returnStatement", "throwStatement", "emitStatement", "variableDeclarationStatement", 
  "variableDeclarationList", "identifierList", "elementaryTypeName", "expression", 
  "primaryExpression", "expressionList", "nameValueList", "nameValue", "functionCallArguments", 
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
  "'memory'", "'storage'", "'calldata'", "'if'", "'else'", "'try'", "'catch'", 
  "'while'", "'assembly'", "'do'", "'return'", "'throw'", "'emit'", "'var'", 
  "'bool'", "'string'", "'byte'", "'++'", "'--'", "'new'", "'+'", "'-'", 
  "'after'", "'delete'", "'!'", "'**'", "'/'", "'%'", "'<<'", "'>>'", "'&'", 
  "'|'", "'=='", "'!='", "'&&'", "'||'", "'?'", "':'", "'|='", "'^='", "'&='", 
  "'<<='", "'>>='", "'+='", "'-='", "'*='", "'/='", "'%='", "'let'", "':='", 
  "'=:'", "'switch'", "'default'", "'case'", "'->'", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "'anonymous'", "'break'", "'constant'", 
  "'continue'", "'external'", "'indexed'", "'internal'", "'payable'", "'private'", 
  "'public'", "'pure'", "'type'", "'view'"
};

std::vector<std::string> SolidityParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "NatSpecSingleLine", "NatSpecMultiLine", "Int", "Uint", "Byte", 
  "Fixed", "Ufixed", "VersionLiteral", "BooleanLiteral", "DecimalNumber", 
  "HexNumber", "RegularExpressionLiteral", "NumberUnit", "HexLiteral", "ReservedKeyword", 
  "AnonymousKeyword", "BreakKeyword", "ConstantKeyword", "ContinueKeyword", 
  "ExternalKeyword", "IndexedKeyword", "InternalKeyword", "PayableKeyword", 
  "PrivateKeyword", "PublicKeyword", "PureKeyword", "TypeKeyword", "ViewKeyword", 
  "Identifier", "StringLiteral", "WS", "COMMENT", "LINE_COMMENT"
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
    0x3, 0x7f, 0x3e6, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x7, 0x2, 0xb4, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0xb7, 0xb, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0xc4, 0xa, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0xc8, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x8, 0x5, 0x8, 0xcd, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x5, 0x9, 0xd4, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x5, 0xa, 0xda, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x5, 0xa, 0xe0, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xe4, 0xa, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x7, 0xa, 0xee, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0xf1, 0xb, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xf8, 0xa, 
    0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x5, 0xc, 0xfd, 0xa, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x105, 0xa, 
    0xc, 0xc, 0xc, 0xe, 0xc, 0x108, 0xb, 0xc, 0x5, 0xc, 0x10a, 0xa, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x10e, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x111, 
    0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 
    0x118, 0xa, 0xd, 0x3, 0xd, 0x5, 0xd, 0x11b, 0xa, 0xd, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 
    0xe, 0x125, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x129, 0xa, 0xf, 
    0xc, 0xf, 0xe, 0xf, 0x12c, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 
    0xf, 0x131, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x13a, 0xa, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x146, 0xa, 0x11, 0xc, 0x11, 
    0xe, 0x11, 0x149, 0xb, 0x11, 0x5, 0x11, 0x14b, 0xa, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x157, 0xa, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x15e, 0xa, 0x14, 
    0x3, 0x14, 0x5, 0x14, 0x161, 0xa, 0x14, 0x3, 0x15, 0x5, 0x15, 0x164, 
    0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x168, 0xa, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x16d, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x5, 0x15, 0x171, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x17c, 
    0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x17f, 0xb, 0x17, 0x3, 0x18, 0x5, 0x18, 
    0x182, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 
    0x188, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x192, 0xa, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x7, 0x1a, 0x196, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x199, 
    0xb, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
    0x1b, 0x7, 0x1b, 0x1a1, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x1a4, 0xb, 
    0x1b, 0x5, 0x1b, 0x1a6, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 
    0x3, 0x1c, 0x5, 0x1c, 0x1ac, 0xa, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x1af, 
    0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 0x1b5, 
    0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x1b8, 0xb, 0x1d, 0x5, 0x1d, 0x1ba, 
    0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x1c0, 
    0xa, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x1c3, 0xa, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x1c9, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 
    0x1cc, 0xb, 0x1f, 0x5, 0x1f, 0x1ce, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x1d4, 0xa, 0x20, 0x3, 0x21, 0x3, 0x21, 
    0x5, 0x21, 0x1d8, 0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x1e3, 
    0xa, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x1e8, 0xa, 0x22, 
    0x3, 0x22, 0x7, 0x22, 0x1eb, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x1ee, 
    0xb, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x7, 0x23, 0x1f3, 0xa, 0x23, 
    0xc, 0x23, 0xe, 0x23, 0x1f6, 0xb, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 
    0x25, 0x3, 0x25, 0x3, 0x25, 0x7, 0x25, 0x204, 0xa, 0x25, 0xc, 0x25, 
    0xe, 0x25, 0x207, 0xb, 0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x20b, 
    0xa, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 
    0x28, 0x7, 0x28, 0x213, 0xa, 0x28, 0xc, 0x28, 0xe, 0x28, 0x216, 0xb, 
    0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x227, 0xa, 0x29, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 
    0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x233, 0xa, 0x2b, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x238, 0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x6, 0x2c, 0x23c, 0xa, 0x2c, 0xd, 0x2c, 0xe, 0x2c, 0x23d, 0x3, 0x2d, 
    0x3, 0x2d, 0x5, 0x2d, 0x242, 0xa, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x245, 
    0xa, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
    0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x251, 
    0xa, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x5, 0x30, 0x257, 
    0xa, 0x30, 0x3, 0x30, 0x3, 0x30, 0x5, 0x30, 0x25b, 0xa, 0x30, 0x3, 0x30, 
    0x5, 0x30, 0x25e, 0xa, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 
    0x3, 0x31, 0x5, 0x31, 0x265, 0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 
    0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 
    0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 0x279, 0xa, 0x35, 0x3, 0x35, 0x3, 0x35, 
    0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 
    0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 
    0x3, 0x38, 0x5, 0x38, 0x28b, 0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 
    0x28f, 0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x39, 0x5, 0x39, 0x294, 
    0xa, 0x39, 0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 0x298, 0xa, 0x39, 0x7, 0x39, 
    0x29a, 0xa, 0x39, 0xc, 0x39, 0xe, 0x39, 0x29d, 0xb, 0x39, 0x3, 0x3a, 
    0x3, 0x3a, 0x5, 0x3a, 0x2a1, 0xa, 0x3a, 0x3, 0x3a, 0x7, 0x3a, 0x2a4, 
    0xa, 0x3a, 0xc, 0x3a, 0xe, 0x3a, 0x2a7, 0xb, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 
    0x2aa, 0xa, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 
    0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x2c2, 0xa, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 
    0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 
    0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 
    0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 
    0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x7, 0x3c, 0x2fd, 
    0xa, 0x3c, 0xc, 0x3c, 0xe, 0x3c, 0x300, 0xb, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 
    0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 0x309, 
    0xa, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x5, 
    0x3d, 0x310, 0xa, 0x3d, 0x5, 0x3d, 0x312, 0xa, 0x3d, 0x3, 0x3e, 0x3, 
    0x3e, 0x3, 0x3e, 0x7, 0x3e, 0x317, 0xa, 0x3e, 0xc, 0x3e, 0xe, 0x3e, 
    0x31a, 0xb, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x7, 0x3f, 0x31f, 
    0xa, 0x3f, 0xc, 0x3f, 0xe, 0x3f, 0x322, 0xb, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 
    0x325, 0xa, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x41, 
    0x3, 0x41, 0x5, 0x41, 0x32d, 0xa, 0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 
    0x331, 0xa, 0x41, 0x5, 0x41, 0x333, 0xa, 0x41, 0x3, 0x42, 0x3, 0x42, 
    0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 
    0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 
    0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 
    0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x5, 0x44, 0x34f, 
    0xa, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x5, 0x45, 0x354, 0xa, 0x45, 
    0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 0x359, 0xa, 0x46, 0x3, 0x46, 
    0x3, 0x46, 0x7, 0x46, 0x35d, 0xa, 0x46, 0xc, 0x46, 0xe, 0x46, 0x360, 
    0xb, 0x46, 0x5, 0x46, 0x362, 0xa, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x47, 
    0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x5, 0x47, 0x36a, 0xa, 0x47, 0x3, 0x48, 
    0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 
    0x49, 0x3, 0x49, 0x5, 0x49, 0x375, 0xa, 0x49, 0x3, 0x4a, 0x3, 0x4a, 
    0x3, 0x4a, 0x7, 0x4a, 0x37a, 0xa, 0x4a, 0xc, 0x4a, 0xe, 0x4a, 0x37d, 
    0xb, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x3, 
    0x4c, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x7, 0x4d, 0x388, 0xa, 0x4d, 
    0xc, 0x4d, 0xe, 0x4d, 0x38b, 0xb, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x5, 0x4d, 
    0x38f, 0xa, 0x4d, 0x5, 0x4d, 0x391, 0xa, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x5, 0x4e, 0x399, 0xa, 0x4e, 
    0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x39f, 0xa, 0x4f, 
    0x3, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x3a3, 0xa, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 
    0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x5, 
    0x51, 0x3ad, 0xa, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x5, 0x51, 
    0x3b2, 0xa, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 
    0x3, 0x52, 0x3, 0x53, 0x3, 0x53, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 
    0x54, 0x3, 0x55, 0x3, 0x55, 0x5, 0x55, 0x3c2, 0xa, 0x55, 0x3, 0x55, 
    0x3, 0x55, 0x5, 0x55, 0x3c6, 0xa, 0x55, 0x7, 0x55, 0x3c8, 0xa, 0x55, 
    0xc, 0x55, 0xe, 0x55, 0x3cb, 0xb, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 
    0x3, 0x55, 0x3, 0x55, 0x7, 0x55, 0x3d2, 0xa, 0x55, 0xc, 0x55, 0xe, 0x55, 
    0x3d5, 0xb, 0x55, 0x5, 0x55, 0x3d7, 0xa, 0x55, 0x3, 0x55, 0x5, 0x55, 
    0x3da, 0xa, 0x55, 0x3, 0x56, 0x3, 0x56, 0x5, 0x56, 0x3de, 0xa, 0x56, 
    0x3, 0x57, 0x3, 0x57, 0x5, 0x57, 0x3e2, 0xa, 0x57, 0x3, 0x58, 0x3, 0x58, 
    0x3, 0x58, 0x2, 0x4, 0x42, 0x76, 0x59, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 
    0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 
    0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 
    0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 
    0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 
    0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 
    0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae, 0x2, 0x14, 0x3, 
    0x2, 0x5, 0xb, 0x3, 0x2, 0x5f, 0x60, 0x3, 0x2, 0x13, 0x15, 0x5, 0x2, 
    0x70, 0x70, 0x74, 0x74, 0x76, 0x77, 0x3, 0x2, 0x28, 0x2a, 0x6, 0x2, 
    0x70, 0x70, 0x75, 0x75, 0x78, 0x78, 0x7a, 0x7a, 0x5, 0x2, 0x24, 0x24, 
    0x35, 0x38, 0x61, 0x65, 0x3, 0x2, 0x39, 0x3a, 0x3, 0x2, 0x3c, 0x3d, 
    0x3, 0x2, 0x3e, 0x3f, 0x4, 0x2, 0xe, 0xe, 0x42, 0x43, 0x3, 0x2, 0x44, 
    0x45, 0x3, 0x2, 0x7, 0xa, 0x3, 0x2, 0x48, 0x49, 0x4, 0x2, 0xb, 0xb, 
    0x4e, 0x57, 0x5, 0x2, 0x68, 0x69, 0x6c, 0x6c, 0x7c, 0x7c, 0x3, 0x2, 
    0x68, 0x69, 0x5, 0x2, 0xf, 0xf, 0x2a, 0x2a, 0x7b, 0x7b, 0x2, 0x445, 
    0x2, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x4, 0xba, 0x3, 0x2, 0x2, 0x2, 0x6, 0xbf, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xa, 0xc5, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xe, 0xcc, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0xd0, 0x3, 0x2, 0x2, 0x2, 0x12, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0xf9, 0x3, 0x2, 0x2, 0x2, 0x16, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x18, 0x114, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0x124, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x126, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0x134, 0x3, 0x2, 0x2, 0x2, 0x20, 0x13d, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x24, 0x153, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x28, 0x163, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0x172, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0x181, 0x3, 0x2, 0x2, 0x2, 0x30, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x32, 0x18d, 
    0x3, 0x2, 0x2, 0x2, 0x34, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x36, 0x1a9, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x1bd, 0x3, 0x2, 
    0x2, 0x2, 0x3c, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x1d1, 0x3, 0x2, 0x2, 
    0x2, 0x40, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x42, 0x1e2, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x46, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0x1fe, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x20e, 
    0x3, 0x2, 0x2, 0x2, 0x4e, 0x210, 0x3, 0x2, 0x2, 0x2, 0x50, 0x226, 0x3, 
    0x2, 0x2, 0x2, 0x52, 0x228, 0x3, 0x2, 0x2, 0x2, 0x54, 0x22b, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x234, 0x3, 0x2, 0x2, 0x2, 0x58, 0x23f, 0x3, 0x2, 0x2, 
    0x2, 0x5a, 0x248, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x250, 0x3, 0x2, 0x2, 0x2, 
    0x5e, 0x252, 0x3, 0x2, 0x2, 0x2, 0x60, 0x262, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0x268, 0x3, 0x2, 0x2, 0x2, 0x64, 0x270, 0x3, 0x2, 0x2, 0x2, 0x66, 0x273, 
    0x3, 0x2, 0x2, 0x2, 0x68, 0x276, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x27c, 0x3, 
    0x2, 0x2, 0x2, 0x6c, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x28a, 0x3, 0x2, 
    0x2, 0x2, 0x70, 0x293, 0x3, 0x2, 0x2, 0x2, 0x72, 0x29e, 0x3, 0x2, 0x2, 
    0x2, 0x74, 0x2ad, 0x3, 0x2, 0x2, 0x2, 0x76, 0x2c1, 0x3, 0x2, 0x2, 0x2, 
    0x78, 0x311, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x313, 0x3, 0x2, 0x2, 0x2, 0x7c, 
    0x31b, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x326, 0x3, 0x2, 0x2, 0x2, 0x80, 0x332, 
    0x3, 0x2, 0x2, 0x2, 0x82, 0x334, 0x3, 0x2, 0x2, 0x2, 0x84, 0x339, 0x3, 
    0x2, 0x2, 0x2, 0x86, 0x34e, 0x3, 0x2, 0x2, 0x2, 0x88, 0x353, 0x3, 0x2, 
    0x2, 0x2, 0x8a, 0x355, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x365, 0x3, 0x2, 0x2, 
    0x2, 0x8e, 0x36b, 0x3, 0x2, 0x2, 0x2, 0x90, 0x374, 0x3, 0x2, 0x2, 0x2, 
    0x92, 0x376, 0x3, 0x2, 0x2, 0x2, 0x94, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x96, 
    0x381, 0x3, 0x2, 0x2, 0x2, 0x98, 0x390, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x398, 
    0x3, 0x2, 0x2, 0x2, 0x9c, 0x39a, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x3a6, 0x3, 
    0x2, 0x2, 0x2, 0xa0, 0x3a9, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x3b5, 0x3, 0x2, 
    0x2, 0x2, 0xa4, 0x3b9, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x3bb, 0x3, 0x2, 0x2, 
    0x2, 0xa8, 0x3d9, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x3dd, 0x3, 0x2, 0x2, 0x2, 
    0xac, 0x3df, 0x3, 0x2, 0x2, 0x2, 0xae, 0x3e3, 0x3, 0x2, 0x2, 0x2, 0xb0, 
    0xb4, 0x5, 0x4, 0x3, 0x2, 0xb1, 0xb4, 0x5, 0x12, 0xa, 0x2, 0xb2, 0xb4, 
    0x5, 0x16, 0xc, 0x2, 0xb3, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb1, 0x3, 
    0x2, 0x2, 0x2, 0xb3, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb7, 0x3, 0x2, 
    0x2, 0x2, 0xb5, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 0x3, 0x2, 0x2, 
    0x2, 0xb6, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb5, 0x3, 0x2, 0x2, 0x2, 
    0xb8, 0xb9, 0x7, 0x2, 0x2, 0x3, 0xb9, 0x3, 0x3, 0x2, 0x2, 0x2, 0xba, 
    0xbb, 0x7, 0x3, 0x2, 0x2, 0xbb, 0xbc, 0x5, 0x6, 0x4, 0x2, 0xbc, 0xbd, 
    0x5, 0x8, 0x5, 0x2, 0xbd, 0xbe, 0x7, 0x4, 0x2, 0x2, 0xbe, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0xbf, 0xc0, 0x5, 0xae, 0x58, 0x2, 0xc0, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0xc1, 0xc4, 0x5, 0xa, 0x6, 0x2, 0xc2, 0xc4, 0x5, 0x76, 0x3c, 
    0x2, 0xc3, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc2, 0x3, 0x2, 0x2, 0x2, 
    0xc4, 0x9, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc7, 0x5, 0xe, 0x8, 0x2, 0xc6, 
    0xc8, 0x5, 0xe, 0x8, 0x2, 0xc7, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 
    0x3, 0x2, 0x2, 0x2, 0xc8, 0xb, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0x9, 
    0x2, 0x2, 0x2, 0xca, 0xd, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcd, 0x5, 0xc, 
    0x7, 0x2, 0xcc, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x3, 0x2, 0x2, 
    0x2, 0xcd, 0xce, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x7, 0x66, 0x2, 0x2, 
    0xcf, 0xf, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd3, 0x5, 0xae, 0x58, 0x2, 0xd1, 
    0xd2, 0x7, 0xc, 0x2, 0x2, 0xd2, 0xd4, 0x5, 0xae, 0x58, 0x2, 0xd3, 0xd1, 
    0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x11, 0x3, 
    0x2, 0x2, 0x2, 0xd5, 0xd6, 0x7, 0xd, 0x2, 0x2, 0xd6, 0xd9, 0x7, 0x7c, 
    0x2, 0x2, 0xd7, 0xd8, 0x7, 0xc, 0x2, 0x2, 0xd8, 0xda, 0x5, 0xae, 0x58, 
    0x2, 0xd9, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0x3, 0x2, 0x2, 0x2, 
    0xda, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xf8, 0x7, 0x4, 0x2, 0x2, 0xdc, 
    0xdf, 0x7, 0xd, 0x2, 0x2, 0xdd, 0xe0, 0x7, 0xe, 0x2, 0x2, 0xde, 0xe0, 
    0x5, 0xae, 0x58, 0x2, 0xdf, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xde, 0x3, 
    0x2, 0x2, 0x2, 0xe0, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x7, 0xc, 
    0x2, 0x2, 0xe2, 0xe4, 0x5, 0xae, 0x58, 0x2, 0xe3, 0xe1, 0x3, 0x2, 0x2, 
    0x2, 0xe3, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 0x3, 0x2, 0x2, 0x2, 
    0xe5, 0xe6, 0x7, 0xf, 0x2, 0x2, 0xe6, 0xe7, 0x7, 0x7c, 0x2, 0x2, 0xe7, 
    0xf8, 0x7, 0x4, 0x2, 0x2, 0xe8, 0xe9, 0x7, 0xd, 0x2, 0x2, 0xe9, 0xea, 
    0x7, 0x10, 0x2, 0x2, 0xea, 0xef, 0x5, 0x10, 0x9, 0x2, 0xeb, 0xec, 0x7, 
    0x11, 0x2, 0x2, 0xec, 0xee, 0x5, 0x10, 0x9, 0x2, 0xed, 0xeb, 0x3, 0x2, 
    0x2, 0x2, 0xee, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xef, 0xed, 0x3, 0x2, 0x2, 
    0x2, 0xef, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf2, 0x3, 0x2, 0x2, 0x2, 
    0xf1, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x7, 0x12, 0x2, 0x2, 0xf3, 
    0xf4, 0x7, 0xf, 0x2, 0x2, 0xf4, 0xf5, 0x7, 0x7c, 0x2, 0x2, 0xf5, 0xf6, 
    0x7, 0x4, 0x2, 0x2, 0xf6, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xd5, 0x3, 
    0x2, 0x2, 0x2, 0xf7, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xe8, 0x3, 0x2, 
    0x2, 0x2, 0xf8, 0x13, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfa, 0x9, 0x3, 0x2, 
    0x2, 0xfa, 0x15, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfd, 0x5, 0x14, 0xb, 0x2, 
    0xfc, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xfd, 
    0xfe, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x9, 0x4, 0x2, 0x2, 0xff, 0x109, 
    0x5, 0xae, 0x58, 0x2, 0x100, 0x101, 0x7, 0x16, 0x2, 0x2, 0x101, 0x106, 
    0x5, 0x18, 0xd, 0x2, 0x102, 0x103, 0x7, 0x11, 0x2, 0x2, 0x103, 0x105, 
    0x5, 0x18, 0xd, 0x2, 0x104, 0x102, 0x3, 0x2, 0x2, 0x2, 0x105, 0x108, 
    0x3, 0x2, 0x2, 0x2, 0x106, 0x104, 0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 
    0x3, 0x2, 0x2, 0x2, 0x107, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x108, 0x106, 
    0x3, 0x2, 0x2, 0x2, 0x109, 0x100, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10a, 
    0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10f, 
    0x7, 0x10, 0x2, 0x2, 0x10c, 0x10e, 0x5, 0x1a, 0xe, 0x2, 0x10d, 0x10c, 
    0x3, 0x2, 0x2, 0x2, 0x10e, 0x111, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x10d, 
    0x3, 0x2, 0x2, 0x2, 0x10f, 0x110, 0x3, 0x2, 0x2, 0x2, 0x110, 0x112, 
    0x3, 0x2, 0x2, 0x2, 0x111, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 
    0x7, 0x12, 0x2, 0x2, 0x113, 0x17, 0x3, 0x2, 0x2, 0x2, 0x114, 0x11a, 
    0x5, 0x44, 0x23, 0x2, 0x115, 0x117, 0x7, 0x17, 0x2, 0x2, 0x116, 0x118, 
    0x5, 0x7a, 0x3e, 0x2, 0x117, 0x116, 0x3, 0x2, 0x2, 0x2, 0x117, 0x118, 
    0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11b, 
    0x7, 0x18, 0x2, 0x2, 0x11a, 0x115, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11b, 
    0x3, 0x2, 0x2, 0x2, 0x11b, 0x19, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x125, 0x5, 
    0x1c, 0xf, 0x2, 0x11d, 0x125, 0x5, 0x1e, 0x10, 0x2, 0x11e, 0x125, 0x5, 
    0x20, 0x11, 0x2, 0x11f, 0x125, 0x5, 0x22, 0x12, 0x2, 0x120, 0x125, 0x5, 
    0x24, 0x13, 0x2, 0x121, 0x125, 0x5, 0x28, 0x15, 0x2, 0x122, 0x125, 0x5, 
    0x2e, 0x18, 0x2, 0x123, 0x125, 0x5, 0x32, 0x1a, 0x2, 0x124, 0x11c, 0x3, 
    0x2, 0x2, 0x2, 0x124, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x124, 0x11e, 0x3, 
    0x2, 0x2, 0x2, 0x124, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x124, 0x120, 0x3, 
    0x2, 0x2, 0x2, 0x124, 0x121, 0x3, 0x2, 0x2, 0x2, 0x124, 0x122, 0x3, 
    0x2, 0x2, 0x2, 0x124, 0x123, 0x3, 0x2, 0x2, 0x2, 0x125, 0x1b, 0x3, 0x2, 
    0x2, 0x2, 0x126, 0x12a, 0x5, 0x42, 0x22, 0x2, 0x127, 0x129, 0x9, 0x5, 
    0x2, 0x2, 0x128, 0x127, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12c, 0x3, 0x2, 
    0x2, 0x2, 0x12a, 0x128, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12b, 0x3, 0x2, 
    0x2, 0x2, 0x12b, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12a, 0x3, 0x2, 
    0x2, 0x2, 0x12d, 0x130, 0x5, 0xae, 0x58, 0x2, 0x12e, 0x12f, 0x7, 0xb, 
    0x2, 0x2, 0x12f, 0x131, 0x5, 0x76, 0x3c, 0x2, 0x130, 0x12e, 0x3, 0x2, 
    0x2, 0x2, 0x130, 0x131, 0x3, 0x2, 0x2, 0x2, 0x131, 0x132, 0x3, 0x2, 
    0x2, 0x2, 0x132, 0x133, 0x7, 0x4, 0x2, 0x2, 0x133, 0x1d, 0x3, 0x2, 0x2, 
    0x2, 0x134, 0x135, 0x7, 0x19, 0x2, 0x2, 0x135, 0x136, 0x5, 0xae, 0x58, 
    0x2, 0x136, 0x139, 0x7, 0x1a, 0x2, 0x2, 0x137, 0x13a, 0x7, 0xe, 0x2, 
    0x2, 0x138, 0x13a, 0x5, 0x42, 0x22, 0x2, 0x139, 0x137, 0x3, 0x2, 0x2, 
    0x2, 0x139, 0x138, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13b, 0x3, 0x2, 0x2, 
    0x2, 0x13b, 0x13c, 0x7, 0x4, 0x2, 0x2, 0x13c, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0x13d, 0x13e, 0x7, 0x1b, 0x2, 0x2, 0x13e, 0x13f, 0x5, 0xae, 0x58, 0x2, 
    0x13f, 0x14a, 0x7, 0x10, 0x2, 0x2, 0x140, 0x141, 0x5, 0x40, 0x21, 0x2, 
    0x141, 0x147, 0x7, 0x4, 0x2, 0x2, 0x142, 0x143, 0x5, 0x40, 0x21, 0x2, 
    0x143, 0x144, 0x7, 0x4, 0x2, 0x2, 0x144, 0x146, 0x3, 0x2, 0x2, 0x2, 
    0x145, 0x142, 0x3, 0x2, 0x2, 0x2, 0x146, 0x149, 0x3, 0x2, 0x2, 0x2, 
    0x147, 0x145, 0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x3, 0x2, 0x2, 0x2, 
    0x148, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x149, 0x147, 0x3, 0x2, 0x2, 0x2, 
    0x14a, 0x140, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14b, 0x3, 0x2, 0x2, 0x2, 
    0x14b, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14d, 0x7, 0x12, 0x2, 0x2, 
    0x14d, 0x21, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x14f, 0x7, 0x1c, 0x2, 0x2, 
    0x14f, 0x150, 0x5, 0x34, 0x1b, 0x2, 0x150, 0x151, 0x5, 0x2c, 0x17, 0x2, 
    0x151, 0x152, 0x5, 0x4e, 0x28, 0x2, 0x152, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0x153, 0x154, 0x7, 0x1d, 0x2, 0x2, 0x154, 0x156, 0x5, 0xae, 0x58, 0x2, 
    0x155, 0x157, 0x5, 0x34, 0x1b, 0x2, 0x156, 0x155, 0x3, 0x2, 0x2, 0x2, 
    0x156, 0x157, 0x3, 0x2, 0x2, 0x2, 0x157, 0x158, 0x3, 0x2, 0x2, 0x2, 
    0x158, 0x159, 0x5, 0x4e, 0x28, 0x2, 0x159, 0x25, 0x3, 0x2, 0x2, 0x2, 
    0x15a, 0x160, 0x5, 0xae, 0x58, 0x2, 0x15b, 0x15d, 0x7, 0x17, 0x2, 0x2, 
    0x15c, 0x15e, 0x5, 0x7a, 0x3e, 0x2, 0x15d, 0x15c, 0x3, 0x2, 0x2, 0x2, 
    0x15d, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15f, 0x3, 0x2, 0x2, 0x2, 
    0x15f, 0x161, 0x7, 0x18, 0x2, 0x2, 0x160, 0x15b, 0x3, 0x2, 0x2, 0x2, 
    0x160, 0x161, 0x3, 0x2, 0x2, 0x2, 0x161, 0x27, 0x3, 0x2, 0x2, 0x2, 0x162, 
    0x164, 0x5, 0x14, 0xb, 0x2, 0x163, 0x162, 0x3, 0x2, 0x2, 0x2, 0x163, 
    0x164, 0x3, 0x2, 0x2, 0x2, 0x164, 0x165, 0x3, 0x2, 0x2, 0x2, 0x165, 
    0x167, 0x7, 0x1e, 0x2, 0x2, 0x166, 0x168, 0x5, 0xae, 0x58, 0x2, 0x167, 
    0x166, 0x3, 0x2, 0x2, 0x2, 0x167, 0x168, 0x3, 0x2, 0x2, 0x2, 0x168, 
    0x169, 0x3, 0x2, 0x2, 0x2, 0x169, 0x16a, 0x5, 0x34, 0x1b, 0x2, 0x16a, 
    0x16c, 0x5, 0x2c, 0x17, 0x2, 0x16b, 0x16d, 0x5, 0x2a, 0x16, 0x2, 0x16c, 
    0x16b, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x16d, 
    0x170, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x171, 0x7, 0x4, 0x2, 0x2, 0x16f, 
    0x171, 0x5, 0x4e, 0x28, 0x2, 0x170, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x170, 
    0x16f, 0x3, 0x2, 0x2, 0x2, 0x171, 0x29, 0x3, 0x2, 0x2, 0x2, 0x172, 0x173, 
    0x7, 0x1f, 0x2, 0x2, 0x173, 0x174, 0x5, 0x34, 0x1b, 0x2, 0x174, 0x2b, 
    0x3, 0x2, 0x2, 0x2, 0x175, 0x17c, 0x5, 0x26, 0x14, 0x2, 0x176, 0x17c, 
    0x5, 0x4c, 0x27, 0x2, 0x177, 0x17c, 0x7, 0x72, 0x2, 0x2, 0x178, 0x17c, 
    0x7, 0x77, 0x2, 0x2, 0x179, 0x17c, 0x7, 0x74, 0x2, 0x2, 0x17a, 0x17c, 
    0x7, 0x76, 0x2, 0x2, 0x17b, 0x175, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x176, 
    0x3, 0x2, 0x2, 0x2, 0x17b, 0x177, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x178, 
    0x3, 0x2, 0x2, 0x2, 0x17b, 0x179, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x17a, 
    0x3, 0x2, 0x2, 0x2, 0x17c, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x17b, 
    0x3, 0x2, 0x2, 0x2, 0x17d, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x2d, 0x3, 
    0x2, 0x2, 0x2, 0x17f, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x180, 0x182, 0x5, 
    0x14, 0xb, 0x2, 0x181, 0x180, 0x3, 0x2, 0x2, 0x2, 0x181, 0x182, 0x3, 
    0x2, 0x2, 0x2, 0x182, 0x183, 0x3, 0x2, 0x2, 0x2, 0x183, 0x184, 0x7, 
    0x20, 0x2, 0x2, 0x184, 0x185, 0x5, 0xae, 0x58, 0x2, 0x185, 0x187, 0x5, 
    0x38, 0x1d, 0x2, 0x186, 0x188, 0x7, 0x6e, 0x2, 0x2, 0x187, 0x186, 0x3, 
    0x2, 0x2, 0x2, 0x187, 0x188, 0x3, 0x2, 0x2, 0x2, 0x188, 0x189, 0x3, 
    0x2, 0x2, 0x2, 0x189, 0x18a, 0x7, 0x4, 0x2, 0x2, 0x18a, 0x2f, 0x3, 0x2, 
    0x2, 0x2, 0x18b, 0x18c, 0x5, 0xae, 0x58, 0x2, 0x18c, 0x31, 0x3, 0x2, 
    0x2, 0x2, 0x18d, 0x18e, 0x7, 0x21, 0x2, 0x2, 0x18e, 0x18f, 0x5, 0xae, 
    0x58, 0x2, 0x18f, 0x191, 0x7, 0x10, 0x2, 0x2, 0x190, 0x192, 0x5, 0x30, 
    0x19, 0x2, 0x191, 0x190, 0x3, 0x2, 0x2, 0x2, 0x191, 0x192, 0x3, 0x2, 
    0x2, 0x2, 0x192, 0x197, 0x3, 0x2, 0x2, 0x2, 0x193, 0x194, 0x7, 0x11, 
    0x2, 0x2, 0x194, 0x196, 0x5, 0x30, 0x19, 0x2, 0x195, 0x193, 0x3, 0x2, 
    0x2, 0x2, 0x196, 0x199, 0x3, 0x2, 0x2, 0x2, 0x197, 0x195, 0x3, 0x2, 
    0x2, 0x2, 0x197, 0x198, 0x3, 0x2, 0x2, 0x2, 0x198, 0x19a, 0x3, 0x2, 
    0x2, 0x2, 0x199, 0x197, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x19b, 0x7, 0x12, 
    0x2, 0x2, 0x19b, 0x33, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x1a5, 0x7, 0x17, 
    0x2, 0x2, 0x19d, 0x1a2, 0x5, 0x36, 0x1c, 0x2, 0x19e, 0x19f, 0x7, 0x11, 
    0x2, 0x2, 0x19f, 0x1a1, 0x5, 0x36, 0x1c, 0x2, 0x1a0, 0x19e, 0x3, 0x2, 
    0x2, 0x2, 0x1a1, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a0, 0x3, 0x2, 
    0x2, 0x2, 0x1a2, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a6, 0x3, 0x2, 
    0x2, 0x2, 0x1a4, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x19d, 0x3, 0x2, 
    0x2, 0x2, 0x1a5, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a7, 0x3, 0x2, 
    0x2, 0x2, 0x1a7, 0x1a8, 0x7, 0x18, 0x2, 0x2, 0x1a8, 0x35, 0x3, 0x2, 
    0x2, 0x2, 0x1a9, 0x1ab, 0x5, 0x42, 0x22, 0x2, 0x1aa, 0x1ac, 0x5, 0x4a, 
    0x26, 0x2, 0x1ab, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1ac, 0x3, 0x2, 
    0x2, 0x2, 0x1ac, 0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1af, 0x5, 0xae, 
    0x58, 0x2, 0x1ae, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1af, 0x3, 0x2, 
    0x2, 0x2, 0x1af, 0x37, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b9, 0x7, 0x17, 
    0x2, 0x2, 0x1b1, 0x1b6, 0x5, 0x3a, 0x1e, 0x2, 0x1b2, 0x1b3, 0x7, 0x11, 
    0x2, 0x2, 0x1b3, 0x1b5, 0x5, 0x3a, 0x1e, 0x2, 0x1b4, 0x1b2, 0x3, 0x2, 
    0x2, 0x2, 0x1b5, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b4, 0x3, 0x2, 
    0x2, 0x2, 0x1b6, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1ba, 0x3, 0x2, 
    0x2, 0x2, 0x1b8, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1b1, 0x3, 0x2, 
    0x2, 0x2, 0x1b9, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1bb, 0x3, 0x2, 
    0x2, 0x2, 0x1bb, 0x1bc, 0x7, 0x18, 0x2, 0x2, 0x1bc, 0x39, 0x3, 0x2, 
    0x2, 0x2, 0x1bd, 0x1bf, 0x5, 0x42, 0x22, 0x2, 0x1be, 0x1c0, 0x7, 0x73, 
    0x2, 0x2, 0x1bf, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1c0, 0x3, 0x2, 
    0x2, 0x2, 0x1c0, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1c3, 0x5, 0xae, 
    0x58, 0x2, 0x1c2, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c3, 0x3, 0x2, 
    0x2, 0x2, 0x1c3, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1cd, 0x7, 0x17, 
    0x2, 0x2, 0x1c5, 0x1ca, 0x5, 0x3e, 0x20, 0x2, 0x1c6, 0x1c7, 0x7, 0x11, 
    0x2, 0x2, 0x1c7, 0x1c9, 0x5, 0x3e, 0x20, 0x2, 0x1c8, 0x1c6, 0x3, 0x2, 
    0x2, 0x2, 0x1c9, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1c8, 0x3, 0x2, 
    0x2, 0x2, 0x1ca, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1ce, 0x3, 0x2, 
    0x2, 0x2, 0x1cc, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1c5, 0x3, 0x2, 
    0x2, 0x2, 0x1cd, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1cf, 0x3, 0x2, 
    0x2, 0x2, 0x1cf, 0x1d0, 0x7, 0x18, 0x2, 0x2, 0x1d0, 0x3d, 0x3, 0x2, 
    0x2, 0x2, 0x1d1, 0x1d3, 0x5, 0x42, 0x22, 0x2, 0x1d2, 0x1d4, 0x5, 0x4a, 
    0x26, 0x2, 0x1d3, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d4, 0x3, 0x2, 
    0x2, 0x2, 0x1d4, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d7, 0x5, 0x42, 
    0x22, 0x2, 0x1d6, 0x1d8, 0x5, 0x4a, 0x26, 0x2, 0x1d7, 0x1d6, 0x3, 0x2, 
    0x2, 0x2, 0x1d7, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1d9, 0x3, 0x2, 
    0x2, 0x2, 0x1d9, 0x1da, 0x5, 0xae, 0x58, 0x2, 0x1da, 0x41, 0x3, 0x2, 
    0x2, 0x2, 0x1db, 0x1dc, 0x8, 0x22, 0x1, 0x2, 0x1dc, 0x1e3, 0x5, 0x74, 
    0x3b, 0x2, 0x1dd, 0x1e3, 0x5, 0x44, 0x23, 0x2, 0x1de, 0x1e3, 0x5, 0x46, 
    0x24, 0x2, 0x1df, 0x1e3, 0x5, 0x48, 0x25, 0x2, 0x1e0, 0x1e1, 0x7, 0x24, 
    0x2, 0x2, 0x1e1, 0x1e3, 0x7, 0x75, 0x2, 0x2, 0x1e2, 0x1db, 0x3, 0x2, 
    0x2, 0x2, 0x1e2, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1de, 0x3, 0x2, 
    0x2, 0x2, 0x1e2, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e0, 0x3, 0x2, 
    0x2, 0x2, 0x1e3, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e5, 0xc, 0x5, 
    0x2, 0x2, 0x1e5, 0x1e7, 0x7, 0x22, 0x2, 0x2, 0x1e6, 0x1e8, 0x5, 0x76, 
    0x3c, 0x2, 0x1e7, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e8, 0x3, 0x2, 
    0x2, 0x2, 0x1e8, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1eb, 0x7, 0x23, 
    0x2, 0x2, 0x1ea, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1ee, 0x3, 0x2, 
    0x2, 0x2, 0x1ec, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ed, 0x3, 0x2, 
    0x2, 0x2, 0x1ed, 0x43, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1ec, 0x3, 0x2, 0x2, 
    0x2, 0x1ef, 0x1f4, 0x5, 0xae, 0x58, 0x2, 0x1f0, 0x1f1, 0x7, 0x25, 0x2, 
    0x2, 0x1f1, 0x1f3, 0x5, 0xae, 0x58, 0x2, 0x1f2, 0x1f0, 0x3, 0x2, 0x2, 
    0x2, 0x1f3, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f2, 0x3, 0x2, 0x2, 
    0x2, 0x1f4, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x45, 0x3, 0x2, 0x2, 0x2, 
    0x1f6, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f8, 0x7, 0x26, 0x2, 0x2, 
    0x1f8, 0x1f9, 0x7, 0x17, 0x2, 0x2, 0x1f9, 0x1fa, 0x5, 0x74, 0x3b, 0x2, 
    0x1fa, 0x1fb, 0x7, 0x27, 0x2, 0x2, 0x1fb, 0x1fc, 0x5, 0x42, 0x22, 0x2, 
    0x1fc, 0x1fd, 0x7, 0x18, 0x2, 0x2, 0x1fd, 0x47, 0x3, 0x2, 0x2, 0x2, 
    0x1fe, 0x1ff, 0x7, 0x1e, 0x2, 0x2, 0x1ff, 0x205, 0x5, 0x3c, 0x1f, 0x2, 
    0x200, 0x204, 0x7, 0x74, 0x2, 0x2, 0x201, 0x204, 0x7, 0x72, 0x2, 0x2, 
    0x202, 0x204, 0x5, 0x4c, 0x27, 0x2, 0x203, 0x200, 0x3, 0x2, 0x2, 0x2, 
    0x203, 0x201, 0x3, 0x2, 0x2, 0x2, 0x203, 0x202, 0x3, 0x2, 0x2, 0x2, 
    0x204, 0x207, 0x3, 0x2, 0x2, 0x2, 0x205, 0x203, 0x3, 0x2, 0x2, 0x2, 
    0x205, 0x206, 0x3, 0x2, 0x2, 0x2, 0x206, 0x20a, 0x3, 0x2, 0x2, 0x2, 
    0x207, 0x205, 0x3, 0x2, 0x2, 0x2, 0x208, 0x209, 0x7, 0x1f, 0x2, 0x2, 
    0x209, 0x20b, 0x5, 0x3c, 0x1f, 0x2, 0x20a, 0x208, 0x3, 0x2, 0x2, 0x2, 
    0x20a, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x49, 0x3, 0x2, 0x2, 0x2, 0x20c, 
    0x20d, 0x9, 0x6, 0x2, 0x2, 0x20d, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x20f, 
    0x9, 0x7, 0x2, 0x2, 0x20f, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x210, 0x214, 0x7, 
    0x10, 0x2, 0x2, 0x211, 0x213, 0x5, 0x50, 0x29, 0x2, 0x212, 0x211, 0x3, 
    0x2, 0x2, 0x2, 0x213, 0x216, 0x3, 0x2, 0x2, 0x2, 0x214, 0x212, 0x3, 
    0x2, 0x2, 0x2, 0x214, 0x215, 0x3, 0x2, 0x2, 0x2, 0x215, 0x217, 0x3, 
    0x2, 0x2, 0x2, 0x216, 0x214, 0x3, 0x2, 0x2, 0x2, 0x217, 0x218, 0x7, 
    0x12, 0x2, 0x2, 0x218, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x219, 0x227, 0x5, 
    0x54, 0x2b, 0x2, 0x21a, 0x227, 0x5, 0x5a, 0x2e, 0x2, 0x21b, 0x227, 0x5, 
    0x5e, 0x30, 0x2, 0x21c, 0x227, 0x5, 0x4e, 0x28, 0x2, 0x21d, 0x227, 0x5, 
    0x60, 0x31, 0x2, 0x21e, 0x227, 0x5, 0x62, 0x32, 0x2, 0x21f, 0x227, 0x5, 
    0x64, 0x33, 0x2, 0x220, 0x227, 0x5, 0x66, 0x34, 0x2, 0x221, 0x227, 0x5, 
    0x68, 0x35, 0x2, 0x222, 0x227, 0x5, 0x6a, 0x36, 0x2, 0x223, 0x227, 0x5, 
    0x6c, 0x37, 0x2, 0x224, 0x227, 0x5, 0x56, 0x2c, 0x2, 0x225, 0x227, 0x5, 
    0x5c, 0x2f, 0x2, 0x226, 0x219, 0x3, 0x2, 0x2, 0x2, 0x226, 0x21a, 0x3, 
    0x2, 0x2, 0x2, 0x226, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x226, 0x21c, 0x3, 
    0x2, 0x2, 0x2, 0x226, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x226, 0x21e, 0x3, 
    0x2, 0x2, 0x2, 0x226, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x226, 0x220, 0x3, 
    0x2, 0x2, 0x2, 0x226, 0x221, 0x3, 0x2, 0x2, 0x2, 0x226, 0x222, 0x3, 
    0x2, 0x2, 0x2, 0x226, 0x223, 0x3, 0x2, 0x2, 0x2, 0x226, 0x224, 0x3, 
    0x2, 0x2, 0x2, 0x226, 0x225, 0x3, 0x2, 0x2, 0x2, 0x227, 0x51, 0x3, 0x2, 
    0x2, 0x2, 0x228, 0x229, 0x5, 0x76, 0x3c, 0x2, 0x229, 0x22a, 0x7, 0x4, 
    0x2, 0x2, 0x22a, 0x53, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x22c, 0x7, 0x2b, 
    0x2, 0x2, 0x22c, 0x22d, 0x7, 0x17, 0x2, 0x2, 0x22d, 0x22e, 0x5, 0x76, 
    0x3c, 0x2, 0x22e, 0x22f, 0x7, 0x18, 0x2, 0x2, 0x22f, 0x232, 0x5, 0x50, 
    0x29, 0x2, 0x230, 0x231, 0x7, 0x2c, 0x2, 0x2, 0x231, 0x233, 0x5, 0x50, 
    0x29, 0x2, 0x232, 0x230, 0x3, 0x2, 0x2, 0x2, 0x232, 0x233, 0x3, 0x2, 
    0x2, 0x2, 0x233, 0x55, 0x3, 0x2, 0x2, 0x2, 0x234, 0x235, 0x7, 0x2d, 
    0x2, 0x2, 0x235, 0x237, 0x5, 0x76, 0x3c, 0x2, 0x236, 0x238, 0x5, 0x2a, 
    0x16, 0x2, 0x237, 0x236, 0x3, 0x2, 0x2, 0x2, 0x237, 0x238, 0x3, 0x2, 
    0x2, 0x2, 0x238, 0x239, 0x3, 0x2, 0x2, 0x2, 0x239, 0x23b, 0x5, 0x4e, 
    0x28, 0x2, 0x23a, 0x23c, 0x5, 0x58, 0x2d, 0x2, 0x23b, 0x23a, 0x3, 0x2, 
    0x2, 0x2, 0x23c, 0x23d, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x23b, 0x3, 0x2, 
    0x2, 0x2, 0x23d, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x57, 0x3, 0x2, 0x2, 
    0x2, 0x23f, 0x244, 0x7, 0x2e, 0x2, 0x2, 0x240, 0x242, 0x5, 0xae, 0x58, 
    0x2, 0x241, 0x240, 0x3, 0x2, 0x2, 0x2, 0x241, 0x242, 0x3, 0x2, 0x2, 
    0x2, 0x242, 0x243, 0x3, 0x2, 0x2, 0x2, 0x243, 0x245, 0x5, 0x34, 0x1b, 
    0x2, 0x244, 0x241, 0x3, 0x2, 0x2, 0x2, 0x244, 0x245, 0x3, 0x2, 0x2, 
    0x2, 0x245, 0x246, 0x3, 0x2, 0x2, 0x2, 0x246, 0x247, 0x5, 0x4e, 0x28, 
    0x2, 0x247, 0x59, 0x3, 0x2, 0x2, 0x2, 0x248, 0x249, 0x7, 0x2f, 0x2, 
    0x2, 0x249, 0x24a, 0x7, 0x17, 0x2, 0x2, 0x24a, 0x24b, 0x5, 0x76, 0x3c, 
    0x2, 0x24b, 0x24c, 0x7, 0x18, 0x2, 0x2, 0x24c, 0x24d, 0x5, 0x50, 0x29, 
    0x2, 0x24d, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x251, 0x5, 0x6e, 0x38, 
    0x2, 0x24f, 0x251, 0x5, 0x52, 0x2a, 0x2, 0x250, 0x24e, 0x3, 0x2, 0x2, 
    0x2, 0x250, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x251, 0x5d, 0x3, 0x2, 0x2, 0x2, 
    0x252, 0x253, 0x7, 0x1a, 0x2, 0x2, 0x253, 0x256, 0x7, 0x17, 0x2, 0x2, 
    0x254, 0x257, 0x5, 0x5c, 0x2f, 0x2, 0x255, 0x257, 0x7, 0x4, 0x2, 0x2, 
    0x256, 0x254, 0x3, 0x2, 0x2, 0x2, 0x256, 0x255, 0x3, 0x2, 0x2, 0x2, 
    0x257, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x258, 0x25b, 0x5, 0x52, 0x2a, 0x2, 
    0x259, 0x25b, 0x7, 0x4, 0x2, 0x2, 0x25a, 0x258, 0x3, 0x2, 0x2, 0x2, 
    0x25a, 0x259, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x25d, 0x3, 0x2, 0x2, 0x2, 
    0x25c, 0x25e, 0x5, 0x76, 0x3c, 0x2, 0x25d, 0x25c, 0x3, 0x2, 0x2, 0x2, 
    0x25d, 0x25e, 0x3, 0x2, 0x2, 0x2, 0x25e, 0x25f, 0x3, 0x2, 0x2, 0x2, 
    0x25f, 0x260, 0x7, 0x18, 0x2, 0x2, 0x260, 0x261, 0x5, 0x50, 0x29, 0x2, 
    0x261, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x262, 0x264, 0x7, 0x30, 0x2, 0x2, 
    0x263, 0x265, 0x7, 0x7c, 0x2, 0x2, 0x264, 0x263, 0x3, 0x2, 0x2, 0x2, 
    0x264, 0x265, 0x3, 0x2, 0x2, 0x2, 0x265, 0x266, 0x3, 0x2, 0x2, 0x2, 
    0x266, 0x267, 0x5, 0x84, 0x43, 0x2, 0x267, 0x61, 0x3, 0x2, 0x2, 0x2, 
    0x268, 0x269, 0x7, 0x31, 0x2, 0x2, 0x269, 0x26a, 0x5, 0x50, 0x29, 0x2, 
    0x26a, 0x26b, 0x7, 0x2f, 0x2, 0x2, 0x26b, 0x26c, 0x7, 0x17, 0x2, 0x2, 
    0x26c, 0x26d, 0x5, 0x76, 0x3c, 0x2, 0x26d, 0x26e, 0x7, 0x18, 0x2, 0x2, 
    0x26e, 0x26f, 0x7, 0x4, 0x2, 0x2, 0x26f, 0x63, 0x3, 0x2, 0x2, 0x2, 0x270, 
    0x271, 0x7, 0x71, 0x2, 0x2, 0x271, 0x272, 0x7, 0x4, 0x2, 0x2, 0x272, 
    0x65, 0x3, 0x2, 0x2, 0x2, 0x273, 0x274, 0x7, 0x6f, 0x2, 0x2, 0x274, 
    0x275, 0x7, 0x4, 0x2, 0x2, 0x275, 0x67, 0x3, 0x2, 0x2, 0x2, 0x276, 0x278, 
    0x7, 0x32, 0x2, 0x2, 0x277, 0x279, 0x5, 0x76, 0x3c, 0x2, 0x278, 0x277, 
    0x3, 0x2, 0x2, 0x2, 0x278, 0x279, 0x3, 0x2, 0x2, 0x2, 0x279, 0x27a, 
    0x3, 0x2, 0x2, 0x2, 0x27a, 0x27b, 0x7, 0x4, 0x2, 0x2, 0x27b, 0x69, 0x3, 
    0x2, 0x2, 0x2, 0x27c, 0x27d, 0x7, 0x33, 0x2, 0x2, 0x27d, 0x27e, 0x7, 
    0x4, 0x2, 0x2, 0x27e, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x280, 0x7, 0x34, 
    0x2, 0x2, 0x280, 0x281, 0x5, 0x82, 0x42, 0x2, 0x281, 0x282, 0x7, 0x4, 
    0x2, 0x2, 0x282, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x283, 0x284, 0x7, 0x35, 
    0x2, 0x2, 0x284, 0x28b, 0x5, 0x72, 0x3a, 0x2, 0x285, 0x28b, 0x5, 0x40, 
    0x21, 0x2, 0x286, 0x287, 0x7, 0x17, 0x2, 0x2, 0x287, 0x288, 0x5, 0x70, 
    0x39, 0x2, 0x288, 0x289, 0x7, 0x18, 0x2, 0x2, 0x289, 0x28b, 0x3, 0x2, 
    0x2, 0x2, 0x28a, 0x283, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x285, 0x3, 0x2, 
    0x2, 0x2, 0x28a, 0x286, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x28e, 0x3, 0x2, 
    0x2, 0x2, 0x28c, 0x28d, 0x7, 0xb, 0x2, 0x2, 0x28d, 0x28f, 0x5, 0x76, 
    0x3c, 0x2, 0x28e, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x28f, 0x3, 0x2, 
    0x2, 0x2, 0x28f, 0x290, 0x3, 0x2, 0x2, 0x2, 0x290, 0x291, 0x7, 0x4, 
    0x2, 0x2, 0x291, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x292, 0x294, 0x5, 0x40, 
    0x21, 0x2, 0x293, 0x292, 0x3, 0x2, 0x2, 0x2, 0x293, 0x294, 0x3, 0x2, 
    0x2, 0x2, 0x294, 0x29b, 0x3, 0x2, 0x2, 0x2, 0x295, 0x297, 0x7, 0x11, 
    0x2, 0x2, 0x296, 0x298, 0x5, 0x40, 0x21, 0x2, 0x297, 0x296, 0x3, 0x2, 
    0x2, 0x2, 0x297, 0x298, 0x3, 0x2, 0x2, 0x2, 0x298, 0x29a, 0x3, 0x2, 
    0x2, 0x2, 0x299, 0x295, 0x3, 0x2, 0x2, 0x2, 0x29a, 0x29d, 0x3, 0x2, 
    0x2, 0x2, 0x29b, 0x299, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x29c, 0x3, 0x2, 
    0x2, 0x2, 0x29c, 0x71, 0x3, 0x2, 0x2, 0x2, 0x29d, 0x29b, 0x3, 0x2, 0x2, 
    0x2, 0x29e, 0x2a5, 0x7, 0x17, 0x2, 0x2, 0x29f, 0x2a1, 0x5, 0xae, 0x58, 
    0x2, 0x2a0, 0x29f, 0x3, 0x2, 0x2, 0x2, 0x2a0, 0x2a1, 0x3, 0x2, 0x2, 
    0x2, 0x2a1, 0x2a2, 0x3, 0x2, 0x2, 0x2, 0x2a2, 0x2a4, 0x7, 0x11, 0x2, 
    0x2, 0x2a3, 0x2a0, 0x3, 0x2, 0x2, 0x2, 0x2a4, 0x2a7, 0x3, 0x2, 0x2, 
    0x2, 0x2a5, 0x2a3, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x2a6, 0x3, 0x2, 0x2, 
    0x2, 0x2a6, 0x2a9, 0x3, 0x2, 0x2, 0x2, 0x2a7, 0x2a5, 0x3, 0x2, 0x2, 
    0x2, 0x2a8, 0x2aa, 0x5, 0xae, 0x58, 0x2, 0x2a9, 0x2a8, 0x3, 0x2, 0x2, 
    0x2, 0x2a9, 0x2aa, 0x3, 0x2, 0x2, 0x2, 0x2aa, 0x2ab, 0x3, 0x2, 0x2, 
    0x2, 0x2ab, 0x2ac, 0x7, 0x18, 0x2, 0x2, 0x2ac, 0x73, 0x3, 0x2, 0x2, 
    0x2, 0x2ad, 0x2ae, 0x9, 0x8, 0x2, 0x2, 0x2ae, 0x75, 0x3, 0x2, 0x2, 0x2, 
    0x2af, 0x2b0, 0x8, 0x3c, 0x1, 0x2, 0x2b0, 0x2b1, 0x7, 0x3b, 0x2, 0x2, 
    0x2b1, 0x2c2, 0x5, 0x42, 0x22, 0x2, 0x2b2, 0x2b3, 0x7, 0x17, 0x2, 0x2, 
    0x2b3, 0x2b4, 0x5, 0x76, 0x3c, 0x2, 0x2b4, 0x2b5, 0x7, 0x18, 0x2, 0x2, 
    0x2b5, 0x2c2, 0x3, 0x2, 0x2, 0x2, 0x2b6, 0x2b7, 0x9, 0x9, 0x2, 0x2, 
    0x2b7, 0x2c2, 0x5, 0x76, 0x3c, 0x15, 0x2b8, 0x2b9, 0x9, 0xa, 0x2, 0x2, 
    0x2b9, 0x2c2, 0x5, 0x76, 0x3c, 0x14, 0x2ba, 0x2bb, 0x9, 0xb, 0x2, 0x2, 
    0x2bb, 0x2c2, 0x5, 0x76, 0x3c, 0x13, 0x2bc, 0x2bd, 0x7, 0x40, 0x2, 0x2, 
    0x2bd, 0x2c2, 0x5, 0x76, 0x3c, 0x12, 0x2be, 0x2bf, 0x7, 0x6, 0x2, 0x2, 
    0x2bf, 0x2c2, 0x5, 0x76, 0x3c, 0x11, 0x2c0, 0x2c2, 0x5, 0x78, 0x3d, 
    0x2, 0x2c1, 0x2af, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2b2, 0x3, 0x2, 0x2, 
    0x2, 0x2c1, 0x2b6, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2b8, 0x3, 0x2, 0x2, 
    0x2, 0x2c1, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2bc, 0x3, 0x2, 0x2, 
    0x2, 0x2c1, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2c0, 0x3, 0x2, 0x2, 
    0x2, 0x2c2, 0x2fe, 0x3, 0x2, 0x2, 0x2, 0x2c3, 0x2c4, 0xc, 0x10, 0x2, 
    0x2, 0x2c4, 0x2c5, 0x7, 0x41, 0x2, 0x2, 0x2c5, 0x2fd, 0x5, 0x76, 0x3c, 
    0x11, 0x2c6, 0x2c7, 0xc, 0xf, 0x2, 0x2, 0x2c7, 0x2c8, 0x9, 0xc, 0x2, 
    0x2, 0x2c8, 0x2fd, 0x5, 0x76, 0x3c, 0x10, 0x2c9, 0x2ca, 0xc, 0xe, 0x2, 
    0x2, 0x2ca, 0x2cb, 0x9, 0xa, 0x2, 0x2, 0x2cb, 0x2fd, 0x5, 0x76, 0x3c, 
    0xf, 0x2cc, 0x2cd, 0xc, 0xd, 0x2, 0x2, 0x2cd, 0x2ce, 0x9, 0xd, 0x2, 
    0x2, 0x2ce, 0x2fd, 0x5, 0x76, 0x3c, 0xe, 0x2cf, 0x2d0, 0xc, 0xc, 0x2, 
    0x2, 0x2d0, 0x2d1, 0x7, 0x46, 0x2, 0x2, 0x2d1, 0x2fd, 0x5, 0x76, 0x3c, 
    0xd, 0x2d2, 0x2d3, 0xc, 0xb, 0x2, 0x2, 0x2d3, 0x2d4, 0x7, 0x5, 0x2, 
    0x2, 0x2d4, 0x2fd, 0x5, 0x76, 0x3c, 0xc, 0x2d5, 0x2d6, 0xc, 0xa, 0x2, 
    0x2, 0x2d6, 0x2d7, 0x7, 0x47, 0x2, 0x2, 0x2d7, 0x2fd, 0x5, 0x76, 0x3c, 
    0xb, 0x2d8, 0x2d9, 0xc, 0x9, 0x2, 0x2, 0x2d9, 0x2da, 0x9, 0xe, 0x2, 
    0x2, 0x2da, 0x2fd, 0x5, 0x76, 0x3c, 0xa, 0x2db, 0x2dc, 0xc, 0x8, 0x2, 
    0x2, 0x2dc, 0x2dd, 0x9, 0xf, 0x2, 0x2, 0x2dd, 0x2fd, 0x5, 0x76, 0x3c, 
    0x9, 0x2de, 0x2df, 0xc, 0x7, 0x2, 0x2, 0x2df, 0x2e0, 0x7, 0x4a, 0x2, 
    0x2, 0x2e0, 0x2fd, 0x5, 0x76, 0x3c, 0x8, 0x2e1, 0x2e2, 0xc, 0x6, 0x2, 
    0x2, 0x2e2, 0x2e3, 0x7, 0x4b, 0x2, 0x2, 0x2e3, 0x2fd, 0x5, 0x76, 0x3c, 
    0x7, 0x2e4, 0x2e5, 0xc, 0x5, 0x2, 0x2, 0x2e5, 0x2e6, 0x7, 0x4c, 0x2, 
    0x2, 0x2e6, 0x2e7, 0x5, 0x76, 0x3c, 0x2, 0x2e7, 0x2e8, 0x7, 0x4d, 0x2, 
    0x2, 0x2e8, 0x2e9, 0x5, 0x76, 0x3c, 0x6, 0x2e9, 0x2fd, 0x3, 0x2, 0x2, 
    0x2, 0x2ea, 0x2eb, 0xc, 0x4, 0x2, 0x2, 0x2eb, 0x2ec, 0x9, 0x10, 0x2, 
    0x2, 0x2ec, 0x2fd, 0x5, 0x76, 0x3c, 0x5, 0x2ed, 0x2ee, 0xc, 0x1b, 0x2, 
    0x2, 0x2ee, 0x2fd, 0x9, 0x9, 0x2, 0x2, 0x2ef, 0x2f0, 0xc, 0x19, 0x2, 
    0x2, 0x2f0, 0x2f1, 0x7, 0x22, 0x2, 0x2, 0x2f1, 0x2f2, 0x5, 0x76, 0x3c, 
    0x2, 0x2f2, 0x2f3, 0x7, 0x23, 0x2, 0x2, 0x2f3, 0x2fd, 0x3, 0x2, 0x2, 
    0x2, 0x2f4, 0x2f5, 0xc, 0x18, 0x2, 0x2, 0x2f5, 0x2f6, 0x7, 0x17, 0x2, 
    0x2, 0x2f6, 0x2f7, 0x5, 0x80, 0x41, 0x2, 0x2f7, 0x2f8, 0x7, 0x18, 0x2, 
    0x2, 0x2f8, 0x2fd, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2fa, 0xc, 0x17, 0x2, 
    0x2, 0x2fa, 0x2fb, 0x7, 0x25, 0x2, 0x2, 0x2fb, 0x2fd, 0x5, 0xae, 0x58, 
    0x2, 0x2fc, 0x2c3, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2c6, 0x3, 0x2, 0x2, 
    0x2, 0x2fc, 0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2cc, 0x3, 0x2, 0x2, 
    0x2, 0x2fc, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2d2, 0x3, 0x2, 0x2, 
    0x2, 0x2fc, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2d8, 0x3, 0x2, 0x2, 
    0x2, 0x2fc, 0x2db, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2de, 0x3, 0x2, 0x2, 
    0x2, 0x2fc, 0x2e1, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2e4, 0x3, 0x2, 0x2, 
    0x2, 0x2fc, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2ed, 0x3, 0x2, 0x2, 
    0x2, 0x2fc, 0x2ef, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2f4, 0x3, 0x2, 0x2, 
    0x2, 0x2fc, 0x2f9, 0x3, 0x2, 0x2, 0x2, 0x2fd, 0x300, 0x3, 0x2, 0x2, 
    0x2, 0x2fe, 0x2fc, 0x3, 0x2, 0x2, 0x2, 0x2fe, 0x2ff, 0x3, 0x2, 0x2, 
    0x2, 0x2ff, 0x77, 0x3, 0x2, 0x2, 0x2, 0x300, 0x2fe, 0x3, 0x2, 0x2, 0x2, 
    0x301, 0x312, 0x7, 0x67, 0x2, 0x2, 0x302, 0x312, 0x5, 0xac, 0x57, 0x2, 
    0x303, 0x312, 0x7, 0x6c, 0x2, 0x2, 0x304, 0x312, 0x7, 0x7c, 0x2, 0x2, 
    0x305, 0x308, 0x5, 0xae, 0x58, 0x2, 0x306, 0x307, 0x7, 0x22, 0x2, 0x2, 
    0x307, 0x309, 0x7, 0x23, 0x2, 0x2, 0x308, 0x306, 0x3, 0x2, 0x2, 0x2, 
    0x308, 0x309, 0x3, 0x2, 0x2, 0x2, 0x309, 0x312, 0x3, 0x2, 0x2, 0x2, 
    0x30a, 0x312, 0x7, 0x79, 0x2, 0x2, 0x30b, 0x312, 0x5, 0xa8, 0x55, 0x2, 
    0x30c, 0x30f, 0x5, 0xaa, 0x56, 0x2, 0x30d, 0x30e, 0x7, 0x22, 0x2, 0x2, 
    0x30e, 0x310, 0x7, 0x23, 0x2, 0x2, 0x30f, 0x30d, 0x3, 0x2, 0x2, 0x2, 
    0x30f, 0x310, 0x3, 0x2, 0x2, 0x2, 0x310, 0x312, 0x3, 0x2, 0x2, 0x2, 
    0x311, 0x301, 0x3, 0x2, 0x2, 0x2, 0x311, 0x302, 0x3, 0x2, 0x2, 0x2, 
    0x311, 0x303, 0x3, 0x2, 0x2, 0x2, 0x311, 0x304, 0x3, 0x2, 0x2, 0x2, 
    0x311, 0x305, 0x3, 0x2, 0x2, 0x2, 0x311, 0x30a, 0x3, 0x2, 0x2, 0x2, 
    0x311, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x311, 0x30c, 0x3, 0x2, 0x2, 0x2, 
    0x312, 0x79, 0x3, 0x2, 0x2, 0x2, 0x313, 0x318, 0x5, 0x76, 0x3c, 0x2, 
    0x314, 0x315, 0x7, 0x11, 0x2, 0x2, 0x315, 0x317, 0x5, 0x76, 0x3c, 0x2, 
    0x316, 0x314, 0x3, 0x2, 0x2, 0x2, 0x317, 0x31a, 0x3, 0x2, 0x2, 0x2, 
    0x318, 0x316, 0x3, 0x2, 0x2, 0x2, 0x318, 0x319, 0x3, 0x2, 0x2, 0x2, 
    0x319, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x31a, 0x318, 0x3, 0x2, 0x2, 0x2, 0x31b, 
    0x320, 0x5, 0x7e, 0x40, 0x2, 0x31c, 0x31d, 0x7, 0x11, 0x2, 0x2, 0x31d, 
    0x31f, 0x5, 0x7e, 0x40, 0x2, 0x31e, 0x31c, 0x3, 0x2, 0x2, 0x2, 0x31f, 
    0x322, 0x3, 0x2, 0x2, 0x2, 0x320, 0x31e, 0x3, 0x2, 0x2, 0x2, 0x320, 
    0x321, 0x3, 0x2, 0x2, 0x2, 0x321, 0x324, 0x3, 0x2, 0x2, 0x2, 0x322, 
    0x320, 0x3, 0x2, 0x2, 0x2, 0x323, 0x325, 0x7, 0x11, 0x2, 0x2, 0x324, 
    0x323, 0x3, 0x2, 0x2, 0x2, 0x324, 0x325, 0x3, 0x2, 0x2, 0x2, 0x325, 
    0x7d, 0x3, 0x2, 0x2, 0x2, 0x326, 0x327, 0x5, 0xae, 0x58, 0x2, 0x327, 
    0x328, 0x7, 0x4d, 0x2, 0x2, 0x328, 0x329, 0x5, 0x76, 0x3c, 0x2, 0x329, 
    0x7f, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x32c, 0x7, 0x10, 0x2, 0x2, 0x32b, 
    0x32d, 0x5, 0x7c, 0x3f, 0x2, 0x32c, 0x32b, 0x3, 0x2, 0x2, 0x2, 0x32c, 
    0x32d, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x32e, 
    0x333, 0x7, 0x12, 0x2, 0x2, 0x32f, 0x331, 0x5, 0x7a, 0x3e, 0x2, 0x330, 
    0x32f, 0x3, 0x2, 0x2, 0x2, 0x330, 0x331, 0x3, 0x2, 0x2, 0x2, 0x331, 
    0x333, 0x3, 0x2, 0x2, 0x2, 0x332, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x332, 
    0x330, 0x3, 0x2, 0x2, 0x2, 0x333, 0x81, 0x3, 0x2, 0x2, 0x2, 0x334, 0x335, 
    0x5, 0x76, 0x3c, 0x2, 0x335, 0x336, 0x7, 0x17, 0x2, 0x2, 0x336, 0x337, 
    0x5, 0x80, 0x41, 0x2, 0x337, 0x338, 0x7, 0x18, 0x2, 0x2, 0x338, 0x83, 
    0x3, 0x2, 0x2, 0x2, 0x339, 0x33a, 0x7, 0x10, 0x2, 0x2, 0x33a, 0x33b, 
    0x5, 0x86, 0x44, 0x2, 0x33b, 0x33c, 0x7, 0x12, 0x2, 0x2, 0x33c, 0x85, 
    0x3, 0x2, 0x2, 0x2, 0x33d, 0x34f, 0x5, 0xae, 0x58, 0x2, 0x33e, 0x34f, 
    0x5, 0x84, 0x43, 0x2, 0x33f, 0x34f, 0x5, 0x88, 0x45, 0x2, 0x340, 0x34f, 
    0x5, 0x8c, 0x47, 0x2, 0x341, 0x34f, 0x5, 0x8e, 0x48, 0x2, 0x342, 0x34f, 
    0x5, 0x94, 0x4b, 0x2, 0x343, 0x34f, 0x5, 0x96, 0x4c, 0x2, 0x344, 0x34f, 
    0x5, 0x98, 0x4d, 0x2, 0x345, 0x34f, 0x5, 0x9c, 0x4f, 0x2, 0x346, 0x34f, 
    0x5, 0xa0, 0x51, 0x2, 0x347, 0x34f, 0x5, 0xa2, 0x52, 0x2, 0x348, 0x34f, 
    0x7, 0x6f, 0x2, 0x2, 0x349, 0x34f, 0x7, 0x71, 0x2, 0x2, 0x34a, 0x34f, 
    0x5, 0xa6, 0x54, 0x2, 0x34b, 0x34f, 0x5, 0xac, 0x57, 0x2, 0x34c, 0x34f, 
    0x7, 0x7c, 0x2, 0x2, 0x34d, 0x34f, 0x7, 0x6c, 0x2, 0x2, 0x34e, 0x33d, 
    0x3, 0x2, 0x2, 0x2, 0x34e, 0x33e, 0x3, 0x2, 0x2, 0x2, 0x34e, 0x33f, 
    0x3, 0x2, 0x2, 0x2, 0x34e, 0x340, 0x3, 0x2, 0x2, 0x2, 0x34e, 0x341, 
    0x3, 0x2, 0x2, 0x2, 0x34e, 0x342, 0x3, 0x2, 0x2, 0x2, 0x34e, 0x343, 
    0x3, 0x2, 0x2, 0x2, 0x34e, 0x344, 0x3, 0x2, 0x2, 0x2, 0x34e, 0x345, 
    0x3, 0x2, 0x2, 0x2, 0x34e, 0x346, 0x3, 0x2, 0x2, 0x2, 0x34e, 0x347, 
    0x3, 0x2, 0x2, 0x2, 0x34e, 0x348, 0x3, 0x2, 0x2, 0x2, 0x34e, 0x349, 
    0x3, 0x2, 0x2, 0x2, 0x34e, 0x34a, 0x3, 0x2, 0x2, 0x2, 0x34e, 0x34b, 
    0x3, 0x2, 0x2, 0x2, 0x34e, 0x34c, 0x3, 0x2, 0x2, 0x2, 0x34e, 0x34d, 
    0x3, 0x2, 0x2, 0x2, 0x34f, 0x87, 0x3, 0x2, 0x2, 0x2, 0x350, 0x354, 0x5, 
    0x8a, 0x46, 0x2, 0x351, 0x354, 0x5, 0xa4, 0x53, 0x2, 0x352, 0x354, 0x5, 
    0xae, 0x58, 0x2, 0x353, 0x350, 0x3, 0x2, 0x2, 0x2, 0x353, 0x351, 0x3, 
    0x2, 0x2, 0x2, 0x353, 0x352, 0x3, 0x2, 0x2, 0x2, 0x354, 0x89, 0x3, 0x2, 
    0x2, 0x2, 0x355, 0x356, 0x7, 0x7b, 0x2, 0x2, 0x356, 0x361, 0x7, 0x17, 
    0x2, 0x2, 0x357, 0x359, 0x5, 0x88, 0x45, 0x2, 0x358, 0x357, 0x3, 0x2, 
    0x2, 0x2, 0x358, 0x359, 0x3, 0x2, 0x2, 0x2, 0x359, 0x35e, 0x3, 0x2, 
    0x2, 0x2, 0x35a, 0x35b, 0x7, 0x11, 0x2, 0x2, 0x35b, 0x35d, 0x5, 0x88, 
    0x45, 0x2, 0x35c, 0x35a, 0x3, 0x2, 0x2, 0x2, 0x35d, 0x360, 0x3, 0x2, 
    0x2, 0x2, 0x35e, 0x35c, 0x3, 0x2, 0x2, 0x2, 0x35e, 0x35f, 0x3, 0x2, 
    0x2, 0x2, 0x35f, 0x362, 0x3, 0x2, 0x2, 0x2, 0x360, 0x35e, 0x3, 0x2, 
    0x2, 0x2, 0x361, 0x358, 0x3, 0x2, 0x2, 0x2, 0x361, 0x362, 0x3, 0x2, 
    0x2, 0x2, 0x362, 0x363, 0x3, 0x2, 0x2, 0x2, 0x363, 0x364, 0x7, 0x18, 
    0x2, 0x2, 0x364, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x365, 0x366, 0x7, 0x58, 
    0x2, 0x2, 0x366, 0x369, 0x5, 0x90, 0x49, 0x2, 0x367, 0x368, 0x7, 0x59, 
    0x2, 0x2, 0x368, 0x36a, 0x5, 0x88, 0x45, 0x2, 0x369, 0x367, 0x3, 0x2, 
    0x2, 0x2, 0x369, 0x36a, 0x3, 0x2, 0x2, 0x2, 0x36a, 0x8d, 0x3, 0x2, 0x2, 
    0x2, 0x36b, 0x36c, 0x5, 0x90, 0x49, 0x2, 0x36c, 0x36d, 0x7, 0x59, 0x2, 
    0x2, 0x36d, 0x36e, 0x5, 0x88, 0x45, 0x2, 0x36e, 0x8f, 0x3, 0x2, 0x2, 
    0x2, 0x36f, 0x375, 0x5, 0xae, 0x58, 0x2, 0x370, 0x371, 0x7, 0x17, 0x2, 
    0x2, 0x371, 0x372, 0x5, 0x92, 0x4a, 0x2, 0x372, 0x373, 0x7, 0x18, 0x2, 
    0x2, 0x373, 0x375, 0x3, 0x2, 0x2, 0x2, 0x374, 0x36f, 0x3, 0x2, 0x2, 
    0x2, 0x374, 0x370, 0x3, 0x2, 0x2, 0x2, 0x375, 0x91, 0x3, 0x2, 0x2, 0x2, 
    0x376, 0x37b, 0x5, 0xae, 0x58, 0x2, 0x377, 0x378, 0x7, 0x11, 0x2, 0x2, 
    0x378, 0x37a, 0x5, 0xae, 0x58, 0x2, 0x379, 0x377, 0x3, 0x2, 0x2, 0x2, 
    0x37a, 0x37d, 0x3, 0x2, 0x2, 0x2, 0x37b, 0x379, 0x3, 0x2, 0x2, 0x2, 
    0x37b, 0x37c, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x93, 0x3, 0x2, 0x2, 0x2, 0x37d, 
    0x37b, 0x3, 0x2, 0x2, 0x2, 0x37e, 0x37f, 0x7, 0x5a, 0x2, 0x2, 0x37f, 
    0x380, 0x5, 0xae, 0x58, 0x2, 0x380, 0x95, 0x3, 0x2, 0x2, 0x2, 0x381, 
    0x382, 0x5, 0xae, 0x58, 0x2, 0x382, 0x383, 0x7, 0x4d, 0x2, 0x2, 0x383, 
    0x97, 0x3, 0x2, 0x2, 0x2, 0x384, 0x385, 0x7, 0x5b, 0x2, 0x2, 0x385, 
    0x389, 0x5, 0x88, 0x45, 0x2, 0x386, 0x388, 0x5, 0x9a, 0x4e, 0x2, 0x387, 
    0x386, 0x3, 0x2, 0x2, 0x2, 0x388, 0x38b, 0x3, 0x2, 0x2, 0x2, 0x389, 
    0x387, 0x3, 0x2, 0x2, 0x2, 0x389, 0x38a, 0x3, 0x2, 0x2, 0x2, 0x38a, 
    0x391, 0x3, 0x2, 0x2, 0x2, 0x38b, 0x389, 0x3, 0x2, 0x2, 0x2, 0x38c, 
    0x38d, 0x7, 0x5c, 0x2, 0x2, 0x38d, 0x38f, 0x5, 0x84, 0x43, 0x2, 0x38e, 
    0x38c, 0x3, 0x2, 0x2, 0x2, 0x38e, 0x38f, 0x3, 0x2, 0x2, 0x2, 0x38f, 
    0x391, 0x3, 0x2, 0x2, 0x2, 0x390, 0x384, 0x3, 0x2, 0x2, 0x2, 0x390, 
    0x38e, 0x3, 0x2, 0x2, 0x2, 0x391, 0x99, 0x3, 0x2, 0x2, 0x2, 0x392, 0x393, 
    0x7, 0x5d, 0x2, 0x2, 0x393, 0x394, 0x5, 0xa4, 0x53, 0x2, 0x394, 0x395, 
    0x5, 0x84, 0x43, 0x2, 0x395, 0x399, 0x3, 0x2, 0x2, 0x2, 0x396, 0x397, 
    0x7, 0x5c, 0x2, 0x2, 0x397, 0x399, 0x5, 0x84, 0x43, 0x2, 0x398, 0x392, 
    0x3, 0x2, 0x2, 0x2, 0x398, 0x396, 0x3, 0x2, 0x2, 0x2, 0x399, 0x9b, 0x3, 
    0x2, 0x2, 0x2, 0x39a, 0x39b, 0x7, 0x1e, 0x2, 0x2, 0x39b, 0x39c, 0x5, 
    0xae, 0x58, 0x2, 0x39c, 0x39e, 0x7, 0x17, 0x2, 0x2, 0x39d, 0x39f, 0x5, 
    0x92, 0x4a, 0x2, 0x39e, 0x39d, 0x3, 0x2, 0x2, 0x2, 0x39e, 0x39f, 0x3, 
    0x2, 0x2, 0x2, 0x39f, 0x3a0, 0x3, 0x2, 0x2, 0x2, 0x3a0, 0x3a2, 0x7, 
    0x18, 0x2, 0x2, 0x3a1, 0x3a3, 0x5, 0x9e, 0x50, 0x2, 0x3a2, 0x3a1, 0x3, 
    0x2, 0x2, 0x2, 0x3a2, 0x3a3, 0x3, 0x2, 0x2, 0x2, 0x3a3, 0x3a4, 0x3, 
    0x2, 0x2, 0x2, 0x3a4, 0x3a5, 0x5, 0x84, 0x43, 0x2, 0x3a5, 0x9d, 0x3, 
    0x2, 0x2, 0x2, 0x3a6, 0x3a7, 0x7, 0x5e, 0x2, 0x2, 0x3a7, 0x3a8, 0x5, 
    0x92, 0x4a, 0x2, 0x3a8, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x3a9, 0x3ac, 0x7, 
    0x1a, 0x2, 0x2, 0x3aa, 0x3ad, 0x5, 0x84, 0x43, 0x2, 0x3ab, 0x3ad, 0x5, 
    0x88, 0x45, 0x2, 0x3ac, 0x3aa, 0x3, 0x2, 0x2, 0x2, 0x3ac, 0x3ab, 0x3, 
    0x2, 0x2, 0x2, 0x3ad, 0x3ae, 0x3, 0x2, 0x2, 0x2, 0x3ae, 0x3b1, 0x5, 
    0x88, 0x45, 0x2, 0x3af, 0x3b2, 0x5, 0x84, 0x43, 0x2, 0x3b0, 0x3b2, 0x5, 
    0x88, 0x45, 0x2, 0x3b1, 0x3af, 0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3b0, 0x3, 
    0x2, 0x2, 0x2, 0x3b2, 0x3b3, 0x3, 0x2, 0x2, 0x2, 0x3b3, 0x3b4, 0x5, 
    0x84, 0x43, 0x2, 0x3b4, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3b6, 0x7, 
    0x2b, 0x2, 0x2, 0x3b6, 0x3b7, 0x5, 0x88, 0x45, 0x2, 0x3b7, 0x3b8, 0x5, 
    0x84, 0x43, 0x2, 0x3b8, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3ba, 0x9, 
    0x11, 0x2, 0x2, 0x3ba, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x3bb, 0x3bc, 0x7, 
    0x30, 0x2, 0x2, 0x3bc, 0x3bd, 0x5, 0xae, 0x58, 0x2, 0x3bd, 0x3be, 0x5, 
    0x84, 0x43, 0x2, 0x3be, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x3bf, 0x3c1, 0x7, 
    0x17, 0x2, 0x2, 0x3c0, 0x3c2, 0x5, 0x76, 0x3c, 0x2, 0x3c1, 0x3c0, 0x3, 
    0x2, 0x2, 0x2, 0x3c1, 0x3c2, 0x3, 0x2, 0x2, 0x2, 0x3c2, 0x3c9, 0x3, 
    0x2, 0x2, 0x2, 0x3c3, 0x3c5, 0x7, 0x11, 0x2, 0x2, 0x3c4, 0x3c6, 0x5, 
    0x76, 0x3c, 0x2, 0x3c5, 0x3c4, 0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3c6, 0x3, 
    0x2, 0x2, 0x2, 0x3c6, 0x3c8, 0x3, 0x2, 0x2, 0x2, 0x3c7, 0x3c3, 0x3, 
    0x2, 0x2, 0x2, 0x3c8, 0x3cb, 0x3, 0x2, 0x2, 0x2, 0x3c9, 0x3c7, 0x3, 
    0x2, 0x2, 0x2, 0x3c9, 0x3ca, 0x3, 0x2, 0x2, 0x2, 0x3ca, 0x3cc, 0x3, 
    0x2, 0x2, 0x2, 0x3cb, 0x3c9, 0x3, 0x2, 0x2, 0x2, 0x3cc, 0x3da, 0x7, 
    0x18, 0x2, 0x2, 0x3cd, 0x3d6, 0x7, 0x22, 0x2, 0x2, 0x3ce, 0x3d3, 0x5, 
    0x76, 0x3c, 0x2, 0x3cf, 0x3d0, 0x7, 0x11, 0x2, 0x2, 0x3d0, 0x3d2, 0x5, 
    0x76, 0x3c, 0x2, 0x3d1, 0x3cf, 0x3, 0x2, 0x2, 0x2, 0x3d2, 0x3d5, 0x3, 
    0x2, 0x2, 0x2, 0x3d3, 0x3d1, 0x3, 0x2, 0x2, 0x2, 0x3d3, 0x3d4, 0x3, 
    0x2, 0x2, 0x2, 0x3d4, 0x3d7, 0x3, 0x2, 0x2, 0x2, 0x3d5, 0x3d3, 0x3, 
    0x2, 0x2, 0x2, 0x3d6, 0x3ce, 0x3, 0x2, 0x2, 0x2, 0x3d6, 0x3d7, 0x3, 
    0x2, 0x2, 0x2, 0x3d7, 0x3d8, 0x3, 0x2, 0x2, 0x2, 0x3d8, 0x3da, 0x7, 
    0x23, 0x2, 0x2, 0x3d9, 0x3bf, 0x3, 0x2, 0x2, 0x2, 0x3d9, 0x3cd, 0x3, 
    0x2, 0x2, 0x2, 0x3da, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x3db, 0x3de, 0x5, 0x74, 
    0x3b, 0x2, 0x3dc, 0x3de, 0x5, 0x44, 0x23, 0x2, 0x3dd, 0x3db, 0x3, 0x2, 
    0x2, 0x2, 0x3dd, 0x3dc, 0x3, 0x2, 0x2, 0x2, 0x3de, 0xab, 0x3, 0x2, 0x2, 
    0x2, 0x3df, 0x3e1, 0x9, 0x12, 0x2, 0x2, 0x3e0, 0x3e2, 0x7, 0x6b, 0x2, 
    0x2, 0x3e1, 0x3e0, 0x3, 0x2, 0x2, 0x2, 0x3e1, 0x3e2, 0x3, 0x2, 0x2, 
    0x2, 0x3e2, 0xad, 0x3, 0x2, 0x2, 0x2, 0x3e3, 0x3e4, 0x9, 0x13, 0x2, 
    0x2, 0x3e4, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x72, 0xb3, 0xb5, 0xc3, 0xc7, 
    0xcc, 0xd3, 0xd9, 0xdf, 0xe3, 0xef, 0xf7, 0xfc, 0x106, 0x109, 0x10f, 
    0x117, 0x11a, 0x124, 0x12a, 0x130, 0x139, 0x147, 0x14a, 0x156, 0x15d, 
    0x160, 0x163, 0x167, 0x16c, 0x170, 0x17b, 0x17d, 0x181, 0x187, 0x191, 
    0x197, 0x1a2, 0x1a5, 0x1ab, 0x1ae, 0x1b6, 0x1b9, 0x1bf, 0x1c2, 0x1ca, 
    0x1cd, 0x1d3, 0x1d7, 0x1e2, 0x1e7, 0x1ec, 0x1f4, 0x203, 0x205, 0x20a, 
    0x214, 0x226, 0x232, 0x237, 0x23d, 0x241, 0x244, 0x250, 0x256, 0x25a, 
    0x25d, 0x264, 0x278, 0x28a, 0x28e, 0x293, 0x297, 0x29b, 0x2a0, 0x2a5, 
    0x2a9, 0x2c1, 0x2fc, 0x2fe, 0x308, 0x30f, 0x311, 0x318, 0x320, 0x324, 
    0x32c, 0x330, 0x332, 0x34e, 0x353, 0x358, 0x35e, 0x361, 0x369, 0x374, 
    0x37b, 0x389, 0x38e, 0x390, 0x398, 0x39e, 0x3a2, 0x3ac, 0x3b1, 0x3c1, 
    0x3c5, 0x3c9, 0x3d3, 0x3d6, 0x3d9, 0x3dd, 0x3e1, 
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
