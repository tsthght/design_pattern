#include "chain_of_responsibility.hpp"

int main(int argc, char ** argv) {
	Node1 *node1 = new Node1(NULL, strdup("root"));
	Node2 *node2 = new Node2(node1, strdup("node"));
	node2->DoWork("code", 500);	
	node2->DoWork("pay", 1500);
	return 0;
}
