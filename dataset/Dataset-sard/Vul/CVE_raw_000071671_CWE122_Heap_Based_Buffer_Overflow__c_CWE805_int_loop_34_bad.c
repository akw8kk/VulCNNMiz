void FUN1()
{
    int * VAR1;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_34_unionType VAR2;
    VAR1 = NULL;
    
    VAR1 = (int *)malloc(50*sizeof(int));
    VAR2.VAR3 = VAR1;
    {
        int * VAR1 = VAR2.VAR4;
        {
            int VAR5[100] = {0}; 
            {
                size_t VAR6;
                
                for (VAR6 = 0; VAR6 < 100; VAR6++)
                {
                    VAR1[VAR6] = VAR5[VAR6];
                }
                FUN2(VAR1[0]);
                free(VAR1);
            }
        }
    }
}