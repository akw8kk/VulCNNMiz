static void FUN1()
{
    void * VAR1;
    CWE122_Heap_Based_Buffer_Overflow__CWE135_67_structType VAR2;
    VAR1 = NULL;
    {
        char * VAR3 = (char *)malloc(50*sizeof(char));
        memset(VAR3, '', 50-1);
        VAR3[50-1] = '';
        
        VAR1 = (void *)VAR3;
    }
    VAR2.VAR4 = VAR1;
    FUN2(VAR2);
}