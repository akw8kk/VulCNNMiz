static void FUN1()
{
    VAR1 * VAR2;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_34_unionType VAR3;
    VAR2 = NULL;
    
    VAR2 = (VAR1 *)malloc(100*sizeof(VAR1));
    VAR3.VAR4 = VAR2;
    {
        VAR1 * VAR2 = VAR3.VAR5;
        {
            int64_t VAR6[100] = {0}; 
            {
                size_t VAR7;
                
                for (VAR7 = 0; VAR7 < 100; VAR7++)
                {
                    VAR2[VAR7] = VAR6[VAR7];
                }
                FUN2(VAR2[0]);
                free(VAR2);
            }
        }
    }
}