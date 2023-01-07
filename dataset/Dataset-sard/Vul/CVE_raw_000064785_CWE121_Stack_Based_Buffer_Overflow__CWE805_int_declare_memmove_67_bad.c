void FUN1()
{
    int * VAR1;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_67_structType VAR2;
    int VAR3[50];
    int VAR4[100];
    
    VAR1 = VAR3;
    VAR2.VAR5 = VAR1;
    FUN2(VAR2);
}