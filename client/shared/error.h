#pragma once

namespace gtamp
{
enum error
{
	UNKNOWN_ERROR,
	EXECUTABLE_NOT_FOUND,
	INVALID_DOS_SIGNATURE,
	INVALID_NT_SIGNATURE,
	INVALID_EXECUTABLE,
	OUT_OF_MEMORY,
	LIBRARY_NOT_FOUND,
	SECTION_PROTECT_FAILED,
	EXCEPTIONS_TABLE_LOAD_FAILED
};
};