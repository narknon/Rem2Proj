#include "VariableStatement.h"

FVariableStatement::FVariableStatement() {
    this->TypeA = EStatementValue::Constant;
    this->Operation = EStatementOp::GreaterThan;
    this->TypeB = EStatementValue::Constant;
    this->Expiration = 0.00f;
}

