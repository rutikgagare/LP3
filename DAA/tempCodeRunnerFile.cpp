priority_queue<Node*, vector<Node*>, compare> pq;

    // for(auto p : freq){
    //     pq.push(new Node(p.first, p.second));
    // }

    // while(pq.size() > 1) {
    //     Node *l = pq.top(); 
    //     pq.pop();

    //     Node *r = pq.top(); 
    //     pq.pop();

    //     Node *n = new Node('\0', l->frequency + r->frequency);
    //     n->left = l;
    //     n->right = r;

    //     pq.push(n);
    // }

    // generateHuffmanCodes(pq.top(), "");

    // cout << "Huffman Codes:\n";
    
    // for(auto p : huffmanCodes){
    //     cout << p.first << " : " << p.second << endl;
    // }
    