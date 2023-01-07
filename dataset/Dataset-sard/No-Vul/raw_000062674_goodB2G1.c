static void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    switch(6)
    {
    case 6:
        
        VAR1 = 10;
        break;
    default:
        
        FUN2("");
        break;
    }
    switch(8)
    {
    case 7:
        
        FUN2("");
        break;
    default:
    {
        int VAR2;
        int VAR3[10] = { 0 };
        
        if (VAR1 >= 0 && VAR1 < (10))
        {
            VAR3[VAR1] = 1;
            
            for(VAR2 = 0; VAR2 < 10; VAR2++)
            {
                FUN3(VAR3[VAR2]);
            }
        }
        else
        {
            FUN2("");
        }
    }
    break;
    }
}