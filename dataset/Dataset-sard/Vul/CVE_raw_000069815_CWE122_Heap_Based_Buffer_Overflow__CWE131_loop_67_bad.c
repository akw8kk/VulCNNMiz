void FUN1()
{
    int * VAR1;
    CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_67_structType VAR2;
    VAR1 = NULL;
    
    VAR1 = (int *)malloc(10);
    VAR2.VAR3 = VAR1;
    FUN2(VAR2);
}