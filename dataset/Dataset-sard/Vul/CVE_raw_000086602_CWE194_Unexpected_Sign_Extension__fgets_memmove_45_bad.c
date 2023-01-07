void FUN1()
{
    short VAR1;
    
    VAR1 = 0;
    {
        char VAR2[VAR3] = "";
        
        if (fgets(VAR2, VAR3, stdin) != NULL)
        {
            
            VAR1 = (short)FUN2(VAR2);
        }
        else
        {
            FUN3("");
        }
    }
    VAR4 = VAR1;
    FUN4();
}