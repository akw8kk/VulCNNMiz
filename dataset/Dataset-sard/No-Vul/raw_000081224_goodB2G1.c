static void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[100] = VAR3"";
    VAR1 = VAR2;
    switch(6)
    {
    case 6:
    {
        
        size_t VAR4 = wcslen(VAR1);
        wchar_t * VAR5 = FUN2(VAR6);
        
        if (VAR5 != NULL)
        {
            
            wcsncat(VAR1+VAR4, VAR5, 100-VAR4-1);
        }
    }
    break;
    default:
        
        FUN3("");
        break;
    }
    switch(8)
    {
    case 7:
        
        FUN3("");
        break;
    default:
    {
        wchar_t VAR7[100] = VAR3"";
        
        FUN4(VAR7, 100-1, VAR3"", VAR1);
        FUN5(VAR7);
    }
    break;
    }
}