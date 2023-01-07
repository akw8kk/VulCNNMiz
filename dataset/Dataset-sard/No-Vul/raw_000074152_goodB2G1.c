static void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    if(FUN2())
    {
        
        VAR1 = -5;
    }
    if(FUN3())
    {
        
        FUN4("");
    }
    else
    {
        {
            int VAR2;
            int VAR3[10] = { 0 };
            
            if (VAR1 >= 0 && VAR1 < (10))
            {
                VAR3[VAR1] = 1;
                
                for(VAR2 = 0; VAR2 < 10; VAR2++)
                {
                    FUN5(VAR3[VAR2]);
                }
            }
            else
            {
                FUN4("");
            }
        }
    }
}