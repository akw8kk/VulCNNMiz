void FUN1()
{
    int VAR1;
    int *VAR2 = &VAR1;
    int *VAR3 = &VAR1;
    
    VAR1 = -1;
    {
        int VAR1 = *VAR2;
        
        fscanf(stdin, "", &VAR1);
        *VAR2 = VAR1;
    }
    {
        int VAR1 = *VAR3;
        {
            int VAR4;
            int VAR5[10] = { 0 };
            
            if (VAR1 >= 0)
            {
                VAR5[VAR1] = 1;
                
                for(VAR4 = 0; VAR4 < 10; VAR4++)
                {
                    FUN2(VAR5[VAR4]);
                }
            }
            else
            {
                FUN3("");
            }
        }
    }
}