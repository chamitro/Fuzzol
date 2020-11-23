
// Generated from Solidity.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "SolidityParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by SolidityParser.
 */
class  SolidityVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SolidityParser.
   */
    virtual antlrcpp::Any visitSourceUnit(SolidityParser::SourceUnitContext *context) = 0;

    virtual antlrcpp::Any visitPragmaDirective(SolidityParser::PragmaDirectiveContext *context) = 0;

    virtual antlrcpp::Any visitPragmaName(SolidityParser::PragmaNameContext *context) = 0;

    virtual antlrcpp::Any visitPragmaValue(SolidityParser::PragmaValueContext *context) = 0;

    virtual antlrcpp::Any visitVersion(SolidityParser::VersionContext *context) = 0;

    virtual antlrcpp::Any visitVersionOperator(SolidityParser::VersionOperatorContext *context) = 0;

    virtual antlrcpp::Any visitVersionConstraint(SolidityParser::VersionConstraintContext *context) = 0;

    virtual antlrcpp::Any visitImportDeclaration(SolidityParser::ImportDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitImportDirective(SolidityParser::ImportDirectiveContext *context) = 0;

    virtual antlrcpp::Any visitNatSpec(SolidityParser::NatSpecContext *context) = 0;

    virtual antlrcpp::Any visitContractDefinition(SolidityParser::ContractDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitInheritanceSpecifier(SolidityParser::InheritanceSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitContractPart(SolidityParser::ContractPartContext *context) = 0;

    virtual antlrcpp::Any visitStateVariableDeclaration(SolidityParser::StateVariableDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitUsingForDeclaration(SolidityParser::UsingForDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStructDefinition(SolidityParser::StructDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitConstructorDefinition(SolidityParser::ConstructorDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitModifierDefinition(SolidityParser::ModifierDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitModifierInvocation(SolidityParser::ModifierInvocationContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDefinition(SolidityParser::FunctionDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitReturnParameters(SolidityParser::ReturnParametersContext *context) = 0;

    virtual antlrcpp::Any visitModifierList(SolidityParser::ModifierListContext *context) = 0;

    virtual antlrcpp::Any visitEventDefinition(SolidityParser::EventDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitEnumValue(SolidityParser::EnumValueContext *context) = 0;

    virtual antlrcpp::Any visitEnumDefinition(SolidityParser::EnumDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitParameterList(SolidityParser::ParameterListContext *context) = 0;

    virtual antlrcpp::Any visitParameter(SolidityParser::ParameterContext *context) = 0;

    virtual antlrcpp::Any visitEventParameterList(SolidityParser::EventParameterListContext *context) = 0;

    virtual antlrcpp::Any visitEventParameter(SolidityParser::EventParameterContext *context) = 0;

    virtual antlrcpp::Any visitFunctionTypeParameterList(SolidityParser::FunctionTypeParameterListContext *context) = 0;

    virtual antlrcpp::Any visitFunctionTypeParameter(SolidityParser::FunctionTypeParameterContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclaration(SolidityParser::VariableDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitTypeName(SolidityParser::TypeNameContext *context) = 0;

    virtual antlrcpp::Any visitUserDefinedTypeName(SolidityParser::UserDefinedTypeNameContext *context) = 0;

    virtual antlrcpp::Any visitMapping(SolidityParser::MappingContext *context) = 0;

    virtual antlrcpp::Any visitFunctionTypeName(SolidityParser::FunctionTypeNameContext *context) = 0;

    virtual antlrcpp::Any visitStorageLocation(SolidityParser::StorageLocationContext *context) = 0;

    virtual antlrcpp::Any visitStateMutability(SolidityParser::StateMutabilityContext *context) = 0;

    virtual antlrcpp::Any visitBlock(SolidityParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitStatement(SolidityParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitExpressionStatement(SolidityParser::ExpressionStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfStatement(SolidityParser::IfStatementContext *context) = 0;

    virtual antlrcpp::Any visitTryStatement(SolidityParser::TryStatementContext *context) = 0;

    virtual antlrcpp::Any visitCatchClause(SolidityParser::CatchClauseContext *context) = 0;

    virtual antlrcpp::Any visitWhileStatement(SolidityParser::WhileStatementContext *context) = 0;

    virtual antlrcpp::Any visitSimpleStatement(SolidityParser::SimpleStatementContext *context) = 0;

    virtual antlrcpp::Any visitForStatement(SolidityParser::ForStatementContext *context) = 0;

    virtual antlrcpp::Any visitInlineAssemblyStatement(SolidityParser::InlineAssemblyStatementContext *context) = 0;

    virtual antlrcpp::Any visitDoWhileStatement(SolidityParser::DoWhileStatementContext *context) = 0;

    virtual antlrcpp::Any visitContinueStatement(SolidityParser::ContinueStatementContext *context) = 0;

    virtual antlrcpp::Any visitBreakStatement(SolidityParser::BreakStatementContext *context) = 0;

    virtual antlrcpp::Any visitReturnStatement(SolidityParser::ReturnStatementContext *context) = 0;

    virtual antlrcpp::Any visitThrowStatement(SolidityParser::ThrowStatementContext *context) = 0;

    virtual antlrcpp::Any visitEmitStatement(SolidityParser::EmitStatementContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclarationStatement(SolidityParser::VariableDeclarationStatementContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclarationList(SolidityParser::VariableDeclarationListContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierList(SolidityParser::IdentifierListContext *context) = 0;

    virtual antlrcpp::Any visitElementaryTypeName(SolidityParser::ElementaryTypeNameContext *context) = 0;

    virtual antlrcpp::Any visitExpression(SolidityParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryExpression(SolidityParser::PrimaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitExpressionList(SolidityParser::ExpressionListContext *context) = 0;

    virtual antlrcpp::Any visitNameValueList(SolidityParser::NameValueListContext *context) = 0;

    virtual antlrcpp::Any visitNameValue(SolidityParser::NameValueContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCallArguments(SolidityParser::FunctionCallArgumentsContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCall(SolidityParser::FunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitAssemblyBlock(SolidityParser::AssemblyBlockContext *context) = 0;

    virtual antlrcpp::Any visitAssemblyItem(SolidityParser::AssemblyItemContext *context) = 0;

    virtual antlrcpp::Any visitAssemblyExpression(SolidityParser::AssemblyExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssemblyCall(SolidityParser::AssemblyCallContext *context) = 0;

    virtual antlrcpp::Any visitAssemblyLocalDefinition(SolidityParser::AssemblyLocalDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitAssemblyAssignment(SolidityParser::AssemblyAssignmentContext *context) = 0;

    virtual antlrcpp::Any visitAssemblyIdentifierOrList(SolidityParser::AssemblyIdentifierOrListContext *context) = 0;

    virtual antlrcpp::Any visitAssemblyIdentifierList(SolidityParser::AssemblyIdentifierListContext *context) = 0;

    virtual antlrcpp::Any visitAssemblyStackAssignment(SolidityParser::AssemblyStackAssignmentContext *context) = 0;

    virtual antlrcpp::Any visitLabelDefinition(SolidityParser::LabelDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitAssemblySwitch(SolidityParser::AssemblySwitchContext *context) = 0;

    virtual antlrcpp::Any visitAssemblyCase(SolidityParser::AssemblyCaseContext *context) = 0;

    virtual antlrcpp::Any visitAssemblyFunctionDefinition(SolidityParser::AssemblyFunctionDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitAssemblyFunctionReturns(SolidityParser::AssemblyFunctionReturnsContext *context) = 0;

    virtual antlrcpp::Any visitAssemblyFor(SolidityParser::AssemblyForContext *context) = 0;

    virtual antlrcpp::Any visitAssemblyIf(SolidityParser::AssemblyIfContext *context) = 0;

    virtual antlrcpp::Any visitAssemblyLiteral(SolidityParser::AssemblyLiteralContext *context) = 0;

    virtual antlrcpp::Any visitSubAssembly(SolidityParser::SubAssemblyContext *context) = 0;

    virtual antlrcpp::Any visitTupleExpression(SolidityParser::TupleExpressionContext *context) = 0;

    virtual antlrcpp::Any visitTypeNameExpression(SolidityParser::TypeNameExpressionContext *context) = 0;

    virtual antlrcpp::Any visitNumberLiteral(SolidityParser::NumberLiteralContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(SolidityParser::IdentifierContext *context) = 0;


};

