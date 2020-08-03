#pragma once
#ifndef SEMANTICERRORSRTUCT
#define SEMANTICERRORSRTUCT

typedef enum {
	UNDEFINED,
	REDECLERATION_VAR,
	REDECLERATION_FUNC,
	REDEFINITION,
	TYPE_MISMATCH,
	INVALID_ARRAY_INDEX_TYPE,
	REDECLERATION_PARAMS,
	FUNC_FULL_DEF_MISMATCH,
	FUNC_ASSINGMENT_ERROR,
	FUNCTION_ID,
	INCORRECT_RETURN_TYPE,
	ERROR_TYPE_ASSIGNMENT,
	INCORRECT_ARRAY_ASSIGNMENT,
	UNIMPLEMENT_PRE_DEFINITION_FUNC,
	GENERIC_MSG,
	RETURN_STMT_ERROR
} eSemanticErrors;

#endif