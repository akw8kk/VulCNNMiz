void FUN1()
{
    char * VAR1;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_67_structType VAR2;
    VAR1 = NULL;
    
    VAR1 = (char *)malloc(10*sizeof(char));
    VAR2.VAR3 = VAR1;
    FUN2(VAR2);
}