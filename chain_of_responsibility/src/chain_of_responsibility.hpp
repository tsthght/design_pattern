#ifndef __CHAIN_OF_RESPONSIBILITY_H__
#define __CHAIN_OF_RESPONSIBILITY_H__
#include <iostream>
#include <string>
using namespace std;

class AbstractNode {
protected:
	AbstractNode *ancestor;
	virtual ~AbstractNode() {if(node_name) free(node_name);}
	char *node_name;
public:
	AbstractNode(AbstractNode *node, char * name):ancestor(node), node_name(name){}
	void SetAncestor(AbstractNode *node) {ancestor = node;}
	virtual void DoWork(char * a, int b) {}
};
class Node1:public AbstractNode {
public:
	Node1(AbstractNode *node, char * name):AbstractNode(node, name) {}
	void DoWork(char * a, int b);
};
void Node1::DoWork(char * a, int b) {
	cout<<"Node1 Done "<<a<<endl;
}
class Node2:public AbstractNode {
public:
	Node2(AbstractNode *node, char * name):AbstractNode(node, name) {}
	void DoWork(char * a, int b);	
};
void Node2::DoWork(char * a, int b) {
	if(b < 1000) {
		cout<<"Node2 Done "<<a<<endl;
	} else {
		ancestor->DoWork(a, b);
	}
}

#endif
