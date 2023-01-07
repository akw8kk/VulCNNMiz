static void FUN1()
{
    int * VAR1;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_34_unionType VAR2;
    VAR1 = NULL;
    
    VAR1 = (int *)malloc(100*sizeof(int));
    VAR2.VAR3 = VAR1;
    {
        int * VAR1 = VAR2.VAR4;
        {
            int VAR5[100] = {0}; 
            
            memcpy(VAR1, VAR5, 100*sizeof(int));
            FUN2(VAR1[0]);
            free(VAR1);
        }
    }
}