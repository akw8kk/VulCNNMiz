static void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    switch(6)
    {
    case 6:
        
        fscanf(stdin, "", &VAR1);
        break;
    default:
        
        FUN2("");
        break;
    }
    switch(7)
    {
    case 7:
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
    default:
        
        FUN2("");
        break;
    }
}