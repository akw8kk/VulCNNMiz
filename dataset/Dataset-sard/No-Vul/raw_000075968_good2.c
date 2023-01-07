static void FUN1()
{
    if(FUN2())
    {
        {
            wchar_t VAR1[150], VAR2[100];
            
            wmemset(VAR1, VAR3'', 149);
            VAR1[149] = VAR3'';
            memcpy(VAR2, VAR1, 99*sizeof(wchar_t));
            VAR2[99] = VAR3''; 
            FUN3(VAR2);
        }
    }
}