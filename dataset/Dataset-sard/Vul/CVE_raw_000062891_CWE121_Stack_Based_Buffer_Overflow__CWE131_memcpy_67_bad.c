void FUN1()
{
    int * VAR1;
    CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_67_structType VAR2;
    VAR1 = NULL;
    
    VAR1 = (int *)FUN2(10);
    VAR2.VAR3 = VAR1;
    FUN3(VAR2);
}