
// Generated from Solidity.g4 by ANTLR 4.7.2

#pragma once

#include <iostream>
#include <vector>
#include "antlr4-runtime.h"
#include "SolidityVisitor.h"

using namespace std;
using namespace antlr4;


/**
 * This class provides an empty implementation of SolidityVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  SoliditySecondVisitor : public SolidityVisitor {
public:
	vector<misc::Interval> intervals;
  vector<string> texts;

  virtual antlrcpp::Any visitSourceUnit(SolidityParser::SourceUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPragmaDirective(SolidityParser::PragmaDirectiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPragmaName(SolidityParser::PragmaNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPragmaValue(SolidityParser::PragmaValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVersion(SolidityParser::VersionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVersionOperator(SolidityParser::VersionOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVersionConstraint(SolidityParser::VersionConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImportDeclaration(SolidityParser::ImportDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImportDirective(SolidityParser::ImportDirectiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNatSpec(SolidityParser::NatSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContractDefinition(SolidityParser::ContractDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInheritanceSpecifier(SolidityParser::InheritanceSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContractPart(SolidityParser::ContractPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStateVariableDeclaration(SolidityParser::StateVariableDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUsingForDeclaration(SolidityParser::UsingForDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructDefinition(SolidityParser::StructDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstructorDefinition(SolidityParser::ConstructorDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModifierDefinition(SolidityParser::ModifierDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModifierInvocation(SolidityParser::ModifierInvocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDefinition(SolidityParser::FunctionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnParameters(SolidityParser::ReturnParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModifierList(SolidityParser::ModifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEventDefinition(SolidityParser::EventDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumValue(SolidityParser::EnumValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumDefinition(SolidityParser::EnumDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameterList(SolidityParser::ParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter(SolidityParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEventParameterList(SolidityParser::EventParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEventParameter(SolidityParser::EventParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionTypeParameterList(SolidityParser::FunctionTypeParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionTypeParameter(SolidityParser::FunctionTypeParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableDeclaration(SolidityParser::VariableDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeName(SolidityParser::TypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUserDefinedTypeName(SolidityParser::UserDefinedTypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMapping(SolidityParser::MappingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionTypeName(SolidityParser::FunctionTypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStorageLocation(SolidityParser::StorageLocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStateMutability(SolidityParser::StateMutabilityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(SolidityParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(SolidityParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionStatement(SolidityParser::ExpressionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStatement(SolidityParser::IfStatementContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileStatement(SolidityParser::WhileStatementContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleStatement(SolidityParser::SimpleStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForStatement(SolidityParser::ForStatementContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInlineAssemblyStatement(SolidityParser::InlineAssemblyStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDoWhileStatement(SolidityParser::DoWhileStatementContext *ctx) override {
  	intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContinueStatement(SolidityParser::ContinueStatementContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBreakStatement(SolidityParser::BreakStatementContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnStatement(SolidityParser::ReturnStatementContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitThrowStatement(SolidityParser::ThrowStatementContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmitStatement(SolidityParser::EmitStatementContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableDeclarationStatement(SolidityParser::VariableDeclarationStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableDeclarationList(SolidityParser::VariableDeclarationListContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifierList(SolidityParser::IdentifierListContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElementaryTypeName(SolidityParser::ElementaryTypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(SolidityParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryExpression(SolidityParser::PrimaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionList(SolidityParser::ExpressionListContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNameValueList(SolidityParser::NameValueListContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNameValue(SolidityParser::NameValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCallArguments(SolidityParser::FunctionCallArgumentsContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCall(SolidityParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssemblyBlock(SolidityParser::AssemblyBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssemblyItem(SolidityParser::AssemblyItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssemblyExpression(SolidityParser::AssemblyExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssemblyCall(SolidityParser::AssemblyCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssemblyLocalDefinition(SolidityParser::AssemblyLocalDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssemblyAssignment(SolidityParser::AssemblyAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssemblyIdentifierOrList(SolidityParser::AssemblyIdentifierOrListContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssemblyIdentifierList(SolidityParser::AssemblyIdentifierListContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssemblyStackAssignment(SolidityParser::AssemblyStackAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabelDefinition(SolidityParser::LabelDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssemblySwitch(SolidityParser::AssemblySwitchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssemblyCase(SolidityParser::AssemblyCaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssemblyFunctionDefinition(SolidityParser::AssemblyFunctionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssemblyFunctionReturns(SolidityParser::AssemblyFunctionReturnsContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssemblyFor(SolidityParser::AssemblyForContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssemblyIf(SolidityParser::AssemblyIfContext *ctx) override {
   	intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssemblyLiteral(SolidityParser::AssemblyLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubAssembly(SolidityParser::SubAssemblyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTupleExpression(SolidityParser::TupleExpressionContext *ctx) override {
    intervals.push_back(ctx->getSourceInterval());
    texts.push_back(ctx->start->getInputStream()->getText(misc::Interval(ctx->start->getStartIndex(),ctx->stop->getStopIndex())));
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeNameExpression(SolidityParser::TypeNameExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumberLiteral(SolidityParser::NumberLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(SolidityParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }


};

