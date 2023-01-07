static void FUN1()
{
    int * VAR1;
    int VAR2[50];
    int VAR3[100];
    
    VAR1 = VAR3;
    {
        int * VAR4 = VAR1;
        int * VAR1 = VAR4;
        {
            int VAR5[100] = {0}; 
            {
                size_t VAR6;
                
                for (VAR6 = 0; VAR6 < 100; VAR6++)
                {
                    VAR1[VAR6] = VAR5[VAR6];
                }
                FUN2(VAR1[0]);
            }
        }
    }
}