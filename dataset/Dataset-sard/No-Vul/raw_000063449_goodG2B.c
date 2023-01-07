static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2 = (wchar_t *)FUN2((10)*sizeof(wchar_t));
    wchar_t * VAR3 = (wchar_t *)FUN2((10+1)*sizeof(wchar_t));
    goto VAR4;
VAR4:
    
    VAR1 = VAR3;
    VAR1[0] = VAR5''; 
    {
        wchar_t VAR4[10+1] = VAR6;
        
        wcscpy(VAR1, VAR4);
        FUN3(VAR1);
    }
}