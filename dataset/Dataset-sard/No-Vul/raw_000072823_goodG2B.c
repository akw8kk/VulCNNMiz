static void FUN1()
{
    char * VAR1;
    CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_34_unionType VAR2;
    VAR1 = NULL;
    
    VAR1 = (char *)malloc(100*sizeof(char));
    VAR1[0] = ''; 
    VAR2.VAR3 = VAR1;
    {
        char * VAR1 = VAR2.VAR4;
        {
            char VAR5[100];
            memset(VAR5, '', 100-1); 
            VAR5[100-1] = ''; 
            
            strcat(VAR1, VAR5);
            FUN2(VAR1);
            free(VAR1);
        }
    }
}