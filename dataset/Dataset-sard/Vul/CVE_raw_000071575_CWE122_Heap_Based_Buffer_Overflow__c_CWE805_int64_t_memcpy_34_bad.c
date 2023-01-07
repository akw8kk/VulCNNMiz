void FUN1()
{
    VAR1 * VAR2;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_34_unionType VAR3;
    VAR2 = NULL;
    
    VAR2 = (VAR1 *)malloc(50*sizeof(VAR1));
    VAR3.VAR4 = VAR2;
    {
        VAR1 * VAR2 = VAR3.VAR5;
        {
            int64_t VAR6[100] = {0}; 
            
            memcpy(VAR2, VAR6, 100*sizeof(VAR1));
            FUN2(VAR2[0]);
            free(VAR2);
        }
    }
}