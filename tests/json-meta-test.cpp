#pragma once

#include <json_tools.h>

const char remove_empty_siblings[] = R"json([
[],
{
	"this has a member" : true
}
[]
])json";

void remove_empty_siblings_test()
{
	JT::ParseContext pc(remove_empty_siblings);
	JT::JsonTokens tokens;
	pc.parseTo(tokens);
	std::vector<JT::JsonMeta> meta = JT::metaForTokens(tokens);
}
int main()
{
	remove_empty_siblings_test();
	return 0;
}