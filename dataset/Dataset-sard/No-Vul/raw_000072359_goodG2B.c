static void FUN1()
{
    char * VAR1;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memmove_67_structType VAR2;
    VAR1 = (char *)malloc(100*sizeof(char));
    
    memset(VAR1, '', 50-1); 
    VAR1[50-1] = ''; 
    VAR2.VAR3 = VAR1;
    FUN2(VAR2);
}