static void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    
    VAR1 = FUN2();
    {
        int VAR2 = VAR1;
        int VAR1 = VAR2;
        {
            int VAR3;
            int VAR4[10] = { 0 };
            
            if (VAR1 >= 0 && VAR1 < (10))
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
        }
    }
}