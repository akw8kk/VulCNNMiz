void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    if(VAR2)
    {
        
        VAR1 = 10;
    }
    if(VAR2)
    {
        {
            int VAR3;
            int VAR4[10] = { 0 };
            
            if (VAR1 >= 0)
            {
                VAR4[VAR1] = 1;
                
                for(VAR3 = 0; VAR3 < 10; VAR3++)
                {
                    FUN2(VAR4[VAR3]);
                }
            }
            else
            {
                FUN3("");
            }
        }
    }
}