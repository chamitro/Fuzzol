
// Generated from Solidity.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
using namespace antlr4;




class  SolidityParser : public antlr4::Parser {
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
    T__86 = 87, T__87 = 88, T__88 = 89, T__89 = 90, NatSpecSingleLine = 91, 
    NatSpecMultiLine = 92, Int = 93, Uint = 94, Byte = 95, Fixed = 96, Ufixed = 97, 
    VersionLiteral = 98, BooleanLiteral = 99, DecimalNumber = 100, HexNumber = 101, 
    NumberUnit = 102, HexLiteral = 103, ReservedKeyword = 104, AnonymousKeyword = 105, 
    BreakKeyword = 106, ConstantKeyword = 107, ContinueKeyword = 108, ExternalKeyword = 109, 
    IndexedKeyword = 110, InternalKeyword = 111, PayableKeyword = 112, PrivateKeyword = 113, 
    PublicKeyword = 114, PureKeyword = 115, TypeKeyword = 116, ViewKeyword = 117, 
    Identifier = 118, StringLiteral = 119, WS = 120, COMMENT = 121, LINE_COMMENT = 122,
		LineTerminator = 123, WhiteSpaces = 124, MultiLineComment = 125
  };

  enum {
    RuleSourceUnit = 0, RulePragmaDirective = 1, RulePragmaName = 2, RulePragmaValue = 3, 
    RuleVersion = 4, RuleVersionOperator = 5, RuleVersionConstraint = 6, 
    RuleImportDeclaration = 7, RuleImportDirective = 8, RuleNatSpec = 9, 
    RuleContractDefinition = 10, RuleInheritanceSpecifier = 11, RuleContractPart = 12, 
    RuleStateVariableDeclaration = 13, RuleUsingForDeclaration = 14, RuleStructDefinition = 15, 
    RuleConstructorDefinition = 16, RuleModifierDefinition = 17, RuleModifierInvocation = 18, 
    RuleFunctionDefinition = 19, RuleReturnParameters = 20, RuleModifierList = 21, 
    RuleEventDefinition = 22, RuleEnumValue = 23, RuleEnumDefinition = 24, 
    RuleParameterList = 25, RuleParameter = 26, RuleEventParameterList = 27, 
    RuleEventParameter = 28, RuleFunctionTypeParameterList = 29, RuleFunctionTypeParameter = 30, 
    RuleVariableDeclaration = 31, RuleTypeName = 32, RuleUserDefinedTypeName = 33, 
    RuleMapping = 34, RuleFunctionTypeName = 35, RuleStorageLocation = 36, 
    RuleStateMutability = 37, RuleBlock = 38, RuleStatement = 39, RuleExpressionStatement = 40, 
    RuleIfStatement = 41, RuleWhileStatement = 42, RuleSimpleStatement = 43, 
    RuleForStatement = 44, RuleInlineAssemblyStatement = 45, RuleDoWhileStatement = 46, 
    RuleContinueStatement = 47, RuleBreakStatement = 48, RuleReturnStatement = 49, 
    RuleThrowStatement = 50, RuleEmitStatement = 51, RuleVariableDeclarationStatement = 52, 
    RuleVariableDeclarationList = 53, RuleIdentifierList = 54, RuleElementaryTypeName = 55, 
    RuleExpression = 56, RulePrimaryExpression = 57, RuleExpressionList = 58, 
    RuleNameValueList = 59, RuleNameValue = 60, RuleFunctionCallArguments = 61, 
    RuleFunctionCall = 62, RuleAssemblyBlock = 63, RuleAssemblyItem = 64, 
    RuleAssemblyExpression = 65, RuleAssemblyCall = 66, RuleAssemblyLocalDefinition = 67, 
    RuleAssemblyAssignment = 68, RuleAssemblyIdentifierOrList = 69, RuleAssemblyIdentifierList = 70, 
    RuleAssemblyStackAssignment = 71, RuleLabelDefinition = 72, RuleAssemblySwitch = 73, 
    RuleAssemblyCase = 74, RuleAssemblyFunctionDefinition = 75, RuleAssemblyFunctionReturns = 76, 
    RuleAssemblyFor = 77, RuleAssemblyIf = 78, RuleAssemblyLiteral = 79, 
    RuleSubAssembly = 80, RuleTupleExpression = 81, RuleTypeNameExpression = 82, 
    RuleNumberLiteral = 83, RuleIdentifier = 84
  };

  SolidityParser(antlr4::TokenStream *input);
  ~SolidityParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

      bool here(size_t type) {

          // Get the token ahead of the current index.
          size_t possibleIndexEosToken = this->getCurrentToken()->getTokenIndex() - 1;
          Token *ahead = _input->get(possibleIndexEosToken);

          // Check if the token resides on the Hidden channel and if it's of the
          // provided type.
          return (ahead->getChannel() == Lexer::HIDDEN) && (ahead->getType() == type);
      }

      bool lineTerminatorAhead() {

          // Get the token ahead of the current index.
          size_t possibleIndexEosToken = this->getCurrentToken()->getTokenIndex() - 1;
          Token *ahead = _input->get(possibleIndexEosToken);

          if (ahead->getChannel() != Lexer::HIDDEN) {
              // We're only interested in tokens on the Hidden channel.
              return false;
          }

          if (ahead->getType() == LineTerminator) {
              // There is definitely a line terminator ahead.
              return true;
          }

          if (ahead->getType() == WhiteSpaces) {
              // Get the token ahead of the current whitespaces.
              possibleIndexEosToken = this->getCurrentToken()->getTokenIndex()- 2;
              ahead = _input->get(possibleIndexEosToken);
          }

          // Get the token's text and type.
          std::string text = ahead->getText();
          size_t type = ahead->getType();

          // Check if the token is, or contains a line terminator.
          return (type == MultiLineComment && (text.find("\r") || text.find("\n"))) ||
                  (type == LineTerminator);
      }                       


  class SourceUnitContext;
  class PragmaDirectiveContext;
  class PragmaNameContext;
  class PragmaValueContext;
  class VersionContext;
  class VersionOperatorContext;
  class VersionConstraintContext;
  class ImportDeclarationContext;
  class ImportDirectiveContext;
  class NatSpecContext;
  class ContractDefinitionContext;
  class InheritanceSpecifierContext;
  class ContractPartContext;
  class StateVariableDeclarationContext;
  class UsingForDeclarationContext;
  class StructDefinitionContext;
  class ConstructorDefinitionContext;
  class ModifierDefinitionContext;
  class ModifierInvocationContext;
  class FunctionDefinitionContext;
  class ReturnParametersContext;
  class ModifierListContext;
  class EventDefinitionContext;
  class EnumValueContext;
  class EnumDefinitionContext;
  class ParameterListContext;
  class ParameterContext;
  class EventParameterListContext;
  class EventParameterContext;
  class FunctionTypeParameterListContext;
  class FunctionTypeParameterContext;
  class VariableDeclarationContext;
  class TypeNameContext;
  class UserDefinedTypeNameContext;
  class MappingContext;
  class FunctionTypeNameContext;
  class StorageLocationContext;
  class StateMutabilityContext;
  class BlockContext;
  class StatementContext;
  class ExpressionStatementContext;
  class IfStatementContext;
  class WhileStatementContext;
  class SimpleStatementContext;
  class ForStatementContext;
  class InlineAssemblyStatementContext;
  class DoWhileStatementContext;
  class ContinueStatementContext;
  class BreakStatementContext;
  class ReturnStatementContext;
  class ThrowStatementContext;
  class EmitStatementContext;
  class VariableDeclarationStatementContext;
  class VariableDeclarationListContext;
  class IdentifierListContext;
  class ElementaryTypeNameContext;
  class ExpressionContext;
  class PrimaryExpressionContext;
  class ExpressionListContext;
  class NameValueListContext;
  class NameValueContext;
  class FunctionCallArgumentsContext;
  class FunctionCallContext;
  class AssemblyBlockContext;
  class AssemblyItemContext;
  class AssemblyExpressionContext;
  class AssemblyCallContext;
  class AssemblyLocalDefinitionContext;
  class AssemblyAssignmentContext;
  class AssemblyIdentifierOrListContext;
  class AssemblyIdentifierListContext;
  class AssemblyStackAssignmentContext;
  class LabelDefinitionContext;
  class AssemblySwitchContext;
  class AssemblyCaseContext;
  class AssemblyFunctionDefinitionContext;
  class AssemblyFunctionReturnsContext;
  class AssemblyForContext;
  class AssemblyIfContext;
  class AssemblyLiteralContext;
  class SubAssemblyContext;
  class TupleExpressionContext;
  class TypeNameExpressionContext;
  class NumberLiteralContext;
  class IdentifierContext; 

  class  SourceUnitContext : public antlr4::ParserRuleContext {
  public:
    SourceUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<PragmaDirectiveContext *> pragmaDirective();
    PragmaDirectiveContext* pragmaDirective(size_t i);
    std::vector<ImportDirectiveContext *> importDirective();
    ImportDirectiveContext* importDirective(size_t i);
    std::vector<ContractDefinitionContext *> contractDefinition();
    ContractDefinitionContext* contractDefinition(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SourceUnitContext* sourceUnit();

  class  PragmaDirectiveContext : public antlr4::ParserRuleContext {
  public:
    PragmaDirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PragmaNameContext *pragmaName();
    PragmaValueContext *pragmaValue();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PragmaDirectiveContext* pragmaDirective();

  class  PragmaNameContext : public antlr4::ParserRuleContext {
  public:
    PragmaNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PragmaNameContext* pragmaName();

  class  PragmaValueContext : public antlr4::ParserRuleContext {
  public:
    PragmaValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VersionContext *version();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PragmaValueContext* pragmaValue();

  class  VersionContext : public antlr4::ParserRuleContext {
  public:
    VersionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VersionConstraintContext *> versionConstraint();
    VersionConstraintContext* versionConstraint(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VersionContext* version();

  class  VersionOperatorContext : public antlr4::ParserRuleContext {
  public:
    VersionOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VersionOperatorContext* versionOperator();

  class  VersionConstraintContext : public antlr4::ParserRuleContext {
  public:
    VersionConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VersionLiteral();
    VersionOperatorContext *versionOperator();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VersionConstraintContext* versionConstraint();

  class  ImportDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ImportDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImportDeclarationContext* importDeclaration();

  class  ImportDirectiveContext : public antlr4::ParserRuleContext {
  public:
    ImportDirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *StringLiteral();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<ImportDeclarationContext *> importDeclaration();
    ImportDeclarationContext* importDeclaration(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImportDirectiveContext* importDirective();

  class  NatSpecContext : public antlr4::ParserRuleContext {
  public:
    NatSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NatSpecSingleLine();
    antlr4::tree::TerminalNode *NatSpecMultiLine();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NatSpecContext* natSpec();

  class  ContractDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ContractDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    NatSpecContext *natSpec();
    std::vector<InheritanceSpecifierContext *> inheritanceSpecifier();
    InheritanceSpecifierContext* inheritanceSpecifier(size_t i);
    std::vector<ContractPartContext *> contractPart();
    ContractPartContext* contractPart(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ContractDefinitionContext* contractDefinition();

  class  InheritanceSpecifierContext : public antlr4::ParserRuleContext {
  public:
    InheritanceSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UserDefinedTypeNameContext *userDefinedTypeName();
    ExpressionListContext *expressionList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InheritanceSpecifierContext* inheritanceSpecifier();

  class  ContractPartContext : public antlr4::ParserRuleContext {
  public:
    ContractPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StateVariableDeclarationContext *stateVariableDeclaration();
    UsingForDeclarationContext *usingForDeclaration();
    StructDefinitionContext *structDefinition();
    ConstructorDefinitionContext *constructorDefinition();
    ModifierDefinitionContext *modifierDefinition();
    FunctionDefinitionContext *functionDefinition();
    EventDefinitionContext *eventDefinition();
    EnumDefinitionContext *enumDefinition();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ContractPartContext* contractPart();

  class  StateVariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    StateVariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    IdentifierContext *identifier();
    ExpressionContext *expression();
    std::vector<antlr4::tree::TerminalNode *> PublicKeyword();
    antlr4::tree::TerminalNode* PublicKeyword(size_t i);
    std::vector<antlr4::tree::TerminalNode *> InternalKeyword();
    antlr4::tree::TerminalNode* InternalKeyword(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PrivateKeyword();
    antlr4::tree::TerminalNode* PrivateKeyword(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ConstantKeyword();
    antlr4::tree::TerminalNode* ConstantKeyword(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StateVariableDeclarationContext* stateVariableDeclaration();

  class  UsingForDeclarationContext : public antlr4::ParserRuleContext {
  public:
    UsingForDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    TypeNameContext *typeName();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UsingForDeclarationContext* usingForDeclaration();

  class  StructDefinitionContext : public antlr4::ParserRuleContext {
  public:
    StructDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<VariableDeclarationContext *> variableDeclaration();
    VariableDeclarationContext* variableDeclaration(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructDefinitionContext* structDefinition();

  class  ConstructorDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ConstructorDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterListContext *parameterList();
    ModifierListContext *modifierList();
    BlockContext *block();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstructorDefinitionContext* constructorDefinition();

  class  ModifierDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ModifierDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    BlockContext *block();
    ParameterListContext *parameterList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModifierDefinitionContext* modifierDefinition();

  class  ModifierInvocationContext : public antlr4::ParserRuleContext {
  public:
    ModifierInvocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    ExpressionListContext *expressionList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModifierInvocationContext* modifierInvocation();

  class  FunctionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    FunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterListContext *parameterList();
    ModifierListContext *modifierList();
    BlockContext *block();
    NatSpecContext *natSpec();
    IdentifierContext *identifier();
    ReturnParametersContext *returnParameters();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDefinitionContext* functionDefinition();

  class  ReturnParametersContext : public antlr4::ParserRuleContext {
  public:
    ReturnParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterListContext *parameterList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnParametersContext* returnParameters();

  class  ModifierListContext : public antlr4::ParserRuleContext {
  public:
    ModifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ModifierInvocationContext *> modifierInvocation();
    ModifierInvocationContext* modifierInvocation(size_t i);
    std::vector<StateMutabilityContext *> stateMutability();
    StateMutabilityContext* stateMutability(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ExternalKeyword();
    antlr4::tree::TerminalNode* ExternalKeyword(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PublicKeyword();
    antlr4::tree::TerminalNode* PublicKeyword(size_t i);
    std::vector<antlr4::tree::TerminalNode *> InternalKeyword();
    antlr4::tree::TerminalNode* InternalKeyword(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PrivateKeyword();
    antlr4::tree::TerminalNode* PrivateKeyword(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModifierListContext* modifierList();

  class  EventDefinitionContext : public antlr4::ParserRuleContext {
  public:
    EventDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    EventParameterListContext *eventParameterList();
    NatSpecContext *natSpec();
    antlr4::tree::TerminalNode *AnonymousKeyword();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EventDefinitionContext* eventDefinition();

  class  EnumValueContext : public antlr4::ParserRuleContext {
  public:
    EnumValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumValueContext* enumValue();

  class  EnumDefinitionContext : public antlr4::ParserRuleContext {
  public:
    EnumDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<EnumValueContext *> enumValue();
    EnumValueContext* enumValue(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumDefinitionContext* enumDefinition();

  class  ParameterListContext : public antlr4::ParserRuleContext {
  public:
    ParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterListContext* parameterList();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    StorageLocationContext *storageLocation();
    IdentifierContext *identifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterContext* parameter();

  class  EventParameterListContext : public antlr4::ParserRuleContext {
  public:
    EventParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EventParameterContext *> eventParameter();
    EventParameterContext* eventParameter(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EventParameterListContext* eventParameterList();

  class  EventParameterContext : public antlr4::ParserRuleContext {
  public:
    EventParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    antlr4::tree::TerminalNode *IndexedKeyword();
    IdentifierContext *identifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EventParameterContext* eventParameter();

  class  FunctionTypeParameterListContext : public antlr4::ParserRuleContext {
  public:
    FunctionTypeParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FunctionTypeParameterContext *> functionTypeParameter();
    FunctionTypeParameterContext* functionTypeParameter(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionTypeParameterListContext* functionTypeParameterList();

  class  FunctionTypeParameterContext : public antlr4::ParserRuleContext {
  public:
    FunctionTypeParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    StorageLocationContext *storageLocation();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionTypeParameterContext* functionTypeParameter();

  class  VariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    IdentifierContext *identifier();
    StorageLocationContext *storageLocation();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDeclarationContext* variableDeclaration();

  class  TypeNameContext : public antlr4::ParserRuleContext {
  public:
    TypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ElementaryTypeNameContext *elementaryTypeName();
    UserDefinedTypeNameContext *userDefinedTypeName();
    MappingContext *mapping();
    FunctionTypeNameContext *functionTypeName();
    antlr4::tree::TerminalNode *PayableKeyword();
    TypeNameContext *typeName();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeNameContext* typeName();
  TypeNameContext* typeName(int precedence);
  class  UserDefinedTypeNameContext : public antlr4::ParserRuleContext {
  public:
    UserDefinedTypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserDefinedTypeNameContext* userDefinedTypeName();

  class  MappingContext : public antlr4::ParserRuleContext {
  public:
    MappingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ElementaryTypeNameContext *elementaryTypeName();
    TypeNameContext *typeName();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MappingContext* mapping();

  class  FunctionTypeNameContext : public antlr4::ParserRuleContext {
  public:
    FunctionTypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FunctionTypeParameterListContext *> functionTypeParameterList();
    FunctionTypeParameterListContext* functionTypeParameterList(size_t i);
    std::vector<antlr4::tree::TerminalNode *> InternalKeyword();
    antlr4::tree::TerminalNode* InternalKeyword(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ExternalKeyword();
    antlr4::tree::TerminalNode* ExternalKeyword(size_t i);
    std::vector<StateMutabilityContext *> stateMutability();
    StateMutabilityContext* stateMutability(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionTypeNameContext* functionTypeName();

  class  StorageLocationContext : public antlr4::ParserRuleContext {
  public:
    StorageLocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StorageLocationContext* storageLocation();

  class  StateMutabilityContext : public antlr4::ParserRuleContext {
  public:
    StateMutabilityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PureKeyword();
    antlr4::tree::TerminalNode *ConstantKeyword();
    antlr4::tree::TerminalNode *ViewKeyword();
    antlr4::tree::TerminalNode *PayableKeyword();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StateMutabilityContext* stateMutability();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfStatementContext *ifStatement();
    WhileStatementContext *whileStatement();
    ForStatementContext *forStatement();
    BlockContext *block();
    InlineAssemblyStatementContext *inlineAssemblyStatement();
    DoWhileStatementContext *doWhileStatement();
    ContinueStatementContext *continueStatement();
    BreakStatementContext *breakStatement();
    ReturnStatementContext *returnStatement();
    ThrowStatementContext *throwStatement();
    EmitStatementContext *emitStatement();
    SimpleStatementContext *simpleStatement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  ExpressionStatementContext : public antlr4::ParserRuleContext {
  public:
    ExpressionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionStatementContext* expressionStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatementContext* ifStatement();

  class  WhileStatementContext : public antlr4::ParserRuleContext {
  public:
    WhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    StatementContext *statement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileStatementContext* whileStatement();

  class  SimpleStatementContext : public antlr4::ParserRuleContext {
  public:
    SimpleStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableDeclarationStatementContext *variableDeclarationStatement();
    ExpressionStatementContext *expressionStatement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleStatementContext* simpleStatement();

  class  ForStatementContext : public antlr4::ParserRuleContext {
  public:
    ForStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    SimpleStatementContext *simpleStatement();
    ExpressionStatementContext *expressionStatement();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForStatementContext* forStatement();

  class  InlineAssemblyStatementContext : public antlr4::ParserRuleContext {
  public:
    InlineAssemblyStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssemblyBlockContext *assemblyBlock();
    antlr4::tree::TerminalNode *StringLiteral();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InlineAssemblyStatementContext* inlineAssemblyStatement();

  class  DoWhileStatementContext : public antlr4::ParserRuleContext {
  public:
    DoWhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DoWhileStatementContext* doWhileStatement();

  class  ContinueStatementContext : public antlr4::ParserRuleContext {
  public:
    ContinueStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ContinueKeyword();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ContinueStatementContext* continueStatement();

  class  BreakStatementContext : public antlr4::ParserRuleContext {
  public:
    BreakStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BreakKeyword();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BreakStatementContext* breakStatement();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  ThrowStatementContext : public antlr4::ParserRuleContext {
  public:
    ThrowStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThrowStatementContext* throwStatement();

  class  EmitStatementContext : public antlr4::ParserRuleContext {
  public:
    EmitStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionCallContext *functionCall();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EmitStatementContext* emitStatement();

  class  VariableDeclarationStatementContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierListContext *identifierList();
    VariableDeclarationContext *variableDeclaration();
    VariableDeclarationListContext *variableDeclarationList();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDeclarationStatementContext* variableDeclarationStatement();

  class  VariableDeclarationListContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VariableDeclarationContext *> variableDeclaration();
    VariableDeclarationContext* variableDeclaration(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDeclarationListContext* variableDeclarationList();

  class  IdentifierListContext : public antlr4::ParserRuleContext {
  public:
    IdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierListContext* identifierList();

  class  ElementaryTypeNameContext : public antlr4::ParserRuleContext {
  public:
    ElementaryTypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Int();
    antlr4::tree::TerminalNode *Uint();
    antlr4::tree::TerminalNode *Byte();
    antlr4::tree::TerminalNode *Fixed();
    antlr4::tree::TerminalNode *Ufixed();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElementaryTypeNameContext* elementaryTypeName();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    PrimaryExpressionContext *primaryExpression();
    FunctionCallArgumentsContext *functionCallArguments();
    IdentifierContext *identifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  PrimaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrimaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BooleanLiteral();
    NumberLiteralContext *numberLiteral();
    antlr4::tree::TerminalNode *HexLiteral();
    antlr4::tree::TerminalNode *StringLiteral();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *TypeKeyword();
    TupleExpressionContext *tupleExpression();
    TypeNameExpressionContext *typeNameExpression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryExpressionContext* primaryExpression();

  class  ExpressionListContext : public antlr4::ParserRuleContext {
  public:
    ExpressionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionListContext* expressionList();

  class  NameValueListContext : public antlr4::ParserRuleContext {
  public:
    NameValueListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NameValueContext *> nameValue();
    NameValueContext* nameValue(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NameValueListContext* nameValueList();

  class  NameValueContext : public antlr4::ParserRuleContext {
  public:
    NameValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NameValueContext* nameValue();

  class  FunctionCallArgumentsContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameValueListContext *nameValueList();
    ExpressionListContext *expressionList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionCallArgumentsContext* functionCallArguments();

  class  FunctionCallContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    FunctionCallArgumentsContext *functionCallArguments();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionCallContext* functionCall();

  class  AssemblyBlockContext : public antlr4::ParserRuleContext {
  public:
    AssemblyBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AssemblyItemContext *> assemblyItem();
    AssemblyItemContext* assemblyItem(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblyBlockContext* assemblyBlock();

  class  AssemblyItemContext : public antlr4::ParserRuleContext {
  public:
    AssemblyItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    AssemblyBlockContext *assemblyBlock();
    AssemblyExpressionContext *assemblyExpression();
    AssemblyLocalDefinitionContext *assemblyLocalDefinition();
    AssemblyAssignmentContext *assemblyAssignment();
    AssemblyStackAssignmentContext *assemblyStackAssignment();
    LabelDefinitionContext *labelDefinition();
    AssemblySwitchContext *assemblySwitch();
    AssemblyFunctionDefinitionContext *assemblyFunctionDefinition();
    AssemblyForContext *assemblyFor();
    AssemblyIfContext *assemblyIf();
    antlr4::tree::TerminalNode *BreakKeyword();
    antlr4::tree::TerminalNode *ContinueKeyword();
    SubAssemblyContext *subAssembly();
    NumberLiteralContext *numberLiteral();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *HexLiteral();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblyItemContext* assemblyItem();

  class  AssemblyExpressionContext : public antlr4::ParserRuleContext {
  public:
    AssemblyExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssemblyCallContext *assemblyCall();
    AssemblyLiteralContext *assemblyLiteral();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblyExpressionContext* assemblyExpression();

  class  AssemblyCallContext : public antlr4::ParserRuleContext {
  public:
    AssemblyCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<AssemblyExpressionContext *> assemblyExpression();
    AssemblyExpressionContext* assemblyExpression(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblyCallContext* assemblyCall();

  class  AssemblyLocalDefinitionContext : public antlr4::ParserRuleContext {
  public:
    AssemblyLocalDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssemblyIdentifierOrListContext *assemblyIdentifierOrList();
    AssemblyExpressionContext *assemblyExpression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblyLocalDefinitionContext* assemblyLocalDefinition();

  class  AssemblyAssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssemblyAssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssemblyIdentifierOrListContext *assemblyIdentifierOrList();
    AssemblyExpressionContext *assemblyExpression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblyAssignmentContext* assemblyAssignment();

  class  AssemblyIdentifierOrListContext : public antlr4::ParserRuleContext {
  public:
    AssemblyIdentifierOrListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    AssemblyIdentifierListContext *assemblyIdentifierList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblyIdentifierOrListContext* assemblyIdentifierOrList();

  class  AssemblyIdentifierListContext : public antlr4::ParserRuleContext {
  public:
    AssemblyIdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblyIdentifierListContext* assemblyIdentifierList();

  class  AssemblyStackAssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssemblyStackAssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblyStackAssignmentContext* assemblyStackAssignment();

  class  LabelDefinitionContext : public antlr4::ParserRuleContext {
  public:
    LabelDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelDefinitionContext* labelDefinition();

  class  AssemblySwitchContext : public antlr4::ParserRuleContext {
  public:
    AssemblySwitchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssemblyExpressionContext *assemblyExpression();
    std::vector<AssemblyCaseContext *> assemblyCase();
    AssemblyCaseContext* assemblyCase(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblySwitchContext* assemblySwitch();

  class  AssemblyCaseContext : public antlr4::ParserRuleContext {
  public:
    AssemblyCaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssemblyLiteralContext *assemblyLiteral();
    AssemblyBlockContext *assemblyBlock();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblyCaseContext* assemblyCase();

  class  AssemblyFunctionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    AssemblyFunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    AssemblyBlockContext *assemblyBlock();
    AssemblyIdentifierListContext *assemblyIdentifierList();
    AssemblyFunctionReturnsContext *assemblyFunctionReturns();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblyFunctionDefinitionContext* assemblyFunctionDefinition();

  class  AssemblyFunctionReturnsContext : public antlr4::ParserRuleContext {
  public:
    AssemblyFunctionReturnsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssemblyIdentifierListContext *assemblyIdentifierList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblyFunctionReturnsContext* assemblyFunctionReturns();

  class  AssemblyForContext : public antlr4::ParserRuleContext {
  public:
    AssemblyForContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AssemblyExpressionContext *> assemblyExpression();
    AssemblyExpressionContext* assemblyExpression(size_t i);
    std::vector<AssemblyBlockContext *> assemblyBlock();
    AssemblyBlockContext* assemblyBlock(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblyForContext* assemblyFor();

  class  AssemblyIfContext : public antlr4::ParserRuleContext {
  public:
    AssemblyIfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssemblyExpressionContext *assemblyExpression();
    AssemblyBlockContext *assemblyBlock();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblyIfContext* assemblyIf();

  class  AssemblyLiteralContext : public antlr4::ParserRuleContext {
  public:
    AssemblyLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *DecimalNumber();
    antlr4::tree::TerminalNode *HexNumber();
    antlr4::tree::TerminalNode *HexLiteral();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblyLiteralContext* assemblyLiteral();

  class  SubAssemblyContext : public antlr4::ParserRuleContext {
  public:
    SubAssemblyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    AssemblyBlockContext *assemblyBlock();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubAssemblyContext* subAssembly();

  class  TupleExpressionContext : public antlr4::ParserRuleContext {
  public:
    TupleExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TupleExpressionContext* tupleExpression();

  class  TypeNameExpressionContext : public antlr4::ParserRuleContext {
  public:
    TypeNameExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ElementaryTypeNameContext *elementaryTypeName();
    UserDefinedTypeNameContext *userDefinedTypeName();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeNameExpressionContext* typeNameExpression();

  class  NumberLiteralContext : public antlr4::ParserRuleContext {
  public:
    NumberLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DecimalNumber();
    antlr4::tree::TerminalNode *HexNumber();
    antlr4::tree::TerminalNode *NumberUnit();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberLiteralContext* numberLiteral();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool typeNameSempred(TypeNameContext *_localctx, size_t predicateIndex);
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

