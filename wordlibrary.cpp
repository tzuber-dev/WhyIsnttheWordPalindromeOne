//library - implementation file

#include "word.h"

bool is_palindrome(const std::string& s) {
	int direc1 = 0;
	int direc2 = s.size() - 1;

	while (direc1 < direc2) {
		char direc1character = s[direc1];
		char direc2character = s[direc2];

		if (direc1character >= 'A' && direc1character <= 'Z') {
			direc1character = direc1character - 'A' + 'a';
		}

		if (direc2character >= 'A' && direc2character <= 'Z') {
			direc2character = direc2character - 'A' + 'a';
		}
		if (direc1character != direc2character) {
			return false;
		}
		direc1++;
		direc2--;

	}

	return true;
}