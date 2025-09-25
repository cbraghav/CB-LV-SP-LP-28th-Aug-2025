pq.empty() -> true if size == 0

    priority_queue<int> temp(pq);
    while (temp.size())
    {
        cout << temp.top() << " ";
        temp.pop();
    }