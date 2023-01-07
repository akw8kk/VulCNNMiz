void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    if(VAR2==5)
    {
        
        VAR1 = FUN2();
    }
    if(VAR2==5)
    {
        {
            int VAR3;
            int * VAR4 = (int *)malloc(10 * sizeof(int));
            
            for (VAR3 = 0; VAR3 < 10; VAR3++)
            {
                VAR4[VAR3] = 0;
            }
            
            if (VAR1 >= 0)
            {
                VAR4[VAR1] = 1;
                
                for(VAR3 = 0; VAR3 < 10; VAR3++)
                {
                    FUN3(VAR4[VAR3]);
                }
            }
            else
            {
                FUN4("");
            }
            free(VAR4);
        }
    }
}