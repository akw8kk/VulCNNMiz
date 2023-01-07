static void FUN1()
{
    char * VAR1;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_snprintf_34_unionType VAR2;
    VAR1 = (char *)malloc(100*sizeof(char));
    
    memset(VAR1, '', 50-1); 
    VAR1[50-1] = ''; 
    VAR2.VAR3 = VAR1;
    {
        char * VAR1 = VAR2.VAR4;
        {
            char VAR5[50] = "";
            
            FUN2(VAR5, strlen(VAR1), "", VAR1);
            FUN3(VAR1);
            free(VAR1);
        }
    }
}