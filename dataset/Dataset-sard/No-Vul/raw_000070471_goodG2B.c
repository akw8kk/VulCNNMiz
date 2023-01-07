static void FUN1()
{
    int VAR1;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_34_unionType VAR2;
    
    VAR1 = -1;
    
    VAR1 = 7;
    VAR2.VAR3 = VAR1;
    {
        int VAR1 = VAR2.VAR4;
        {
            int VAR5;
            int * VAR6 = (int *)malloc(10 * sizeof(int));
            
            for (VAR5 = 0; VAR5 < 10; VAR5++)
            {
                VAR6[VAR5] = 0;
            }
            
            if (VAR1 >= 0)
            {
                VAR6[VAR1] = 1;
                
                for(VAR5 = 0; VAR5 < 10; VAR5++)
                {
                    FUN2(VAR6[VAR5]);
                }
            }
            else
            {
                FUN3("");
            }
            free(VAR6);
        }
    }
}