// Day 18: Queues & Stacks

List<char> charStack = new List<char>();
    List<char> charQueue = new List<char>();
    
    void pushCharacter(char ch) {
        charStack.Add(ch);
    }
    
    void enqueueCharacter(char ch) {
        charQueue.Add(ch);
    }
    
    char popCharacter() {
        char returnChar = charStack[charStack.Count - 1];
        charStack.RemoveAt(charStack.Count - 1);
        return returnChar;        
    }
    
    char dequeueCharacter() {
        char returnChar = charQueue[0];
        charQueue.RemoveAt(0);
        return returnChar;       
    }