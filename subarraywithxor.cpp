int solve(int* A, int n1, int B) {
    HashMap* prefixXOR = createHashMap(100000);
    int count = 0;
    int xorSum = 0;
    insert(prefixXOR, 0, 1);
    for (int i = 0; i < n1; i++) {
        xorSum ^= A[i];
        int requiredXOR = xorSum ^ B;
        count += get(prefixXOR, requiredXOR);
        insert(prefixXOR, xorSum, 1);
    }
    freeHashMap(prefixXOR);
    return count;
}
