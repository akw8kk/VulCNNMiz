static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2 = (wchar_t *)FUN2((10)*sizeof(wchar_t));
    wchar_t * VAR3 = (wchar_t *)FUN2((10+1)*sizeof(wchar_t));
    if(5==5)
    {
        
        VAR1 = VAR3;
        VAR1[0] = VAR4''; 
    }
    {
        wchar_t VAR5[10+1] = VAR6;
        
        wcscpy(VAR1, VAR5);
        FUN3(VAR1);
    }
}