void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[10];
    wchar_t VAR3[10+1];
    goto VAR4;
VAR4:
    
    VAR1 = VAR2;
    VAR1[0] = VAR5''; 
    {
        wchar_t VAR4[10+1] = VAR6;
        
        
        wcsncpy(VAR1, VAR4, wcslen(VAR4) + 1);
        FUN2(VAR1);
    }
}