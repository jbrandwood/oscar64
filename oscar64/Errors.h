#pragma once

class Location
{
public:
	const char* mFileName;
	int			mLine, mColumn;

	Location() : mFileName(nullptr), mLine(0), mColumn(0) {}
};

enum ErrorID
{
	EINFO_GENERIC = 1000,
	
	EWARN_GENERIC = 2000,
	EWARN_CONSTANT_TRUNCATED,
	EWARN_UNKNOWN_PRAGMA,
	EWARN_INDEX_OUT_OF_BOUNDS,
	EWARN_SYNTAX,

	EERR_GENERIC = 3000,
	EERR_FILE_NOT_FOUND,
	EERR_RUNTIME_CODE,
	EERR_UNIMPLEMENTED,
	EERR_COMMAND_LINE,
	EERR_OUT_OF_MEMORY,
	EERR_OBJECT_NOT_FOUND,
	EERR_SYNTAX,
	EERR_EXECUTION_FAILED,
	EERR_CONSTANT_INITIALIZER,
	EERR_CONSTANT_TYPE,
	EERR_VARIABLE_TYPE,
	EERR_INVALID_VALUE,
	EERR_INCOMPATIBLE_TYPES,
	EERR_INCOMPATIBLE_OPERATOR,
	EERR_CONST_ASSIGN,
	EERR_NOT_AN_LVALUE,
	EERR_INVALID_INDEX,
	EERR_WRONG_PARAMETER,
	EERR_INVALID_RETURN,
	EERR_INVALID_BREAK,
	EERR_INVALID_CONTINUE,
	EERR_DUPLICATE_DEFAULT,
	EERR_UNDEFINED_OBJECT,
	EERR_DUPLICATE_DEFINITION,
	EERR_NOT_A_TYPE,
	EERR_DECLARATION_DIFFERS,
	EERR_INVALID_IDENTIFIER,
	EERR_ASM_INVALD_OPERAND,
	EERR_ASM_INVALID_INSTRUCTION,
	EERR_ASM_INVALID_MODE,
	EERR_PRAGMA_PARAMETER,
	ERRR_PREPROCESSOR,
	ERRR_INVALID_CASE,

	EERR_INVALID_PREPROCESSOR,
};

class Errors
{
public:
	Errors(void);

	int		mErrorCount;

	void Error(const Location& loc, ErrorID eid, const char* msg, const char* info = nullptr);
};
