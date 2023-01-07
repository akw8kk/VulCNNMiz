static void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    if(FUN2())
    {
        
        FUN3("");
    }
    else
    {
        
        VAR1 = 7;
    }
    if(FUN4())
    {
        {
            int VAR2;
            int VAR3[10] = { 0 };
            
            if (VAR1 < 10)
            {
                VAR3[VAR1] = 1;
                
                for(VAR2 = 0; VAR2 < 10; VAR2++)
                {
                    FUN5(VAR3[VAR2]);
                }
            }
            else
            {
                FUN3("");
            }
        }
    }
}