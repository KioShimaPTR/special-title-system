//Search:

							case 70102: // ¼±µÎ
							case 70103: // ¼±µÎ
								{
									if (GetAlignment() >= 0)
										return false;

									int delta = MIN(-GetAlignment(), item->GetValue(0));

									sys_log(0, "%s ALIGNMENT ITEM %d", GetName(), delta);

									UpdateAlignment(delta);
									item->SetCount(item->GetCount() - 1);

									if (delta / 10 > 0)
									{
										ChatPacket(CHAT_TYPE_TALKING, LC_TEXT("¸¶À½ÀÌ ¸¼¾ÆÁö´Â±º. °¡½¿À» Áş´©¸£´ø ¹«¾ğ°¡°¡ Á» °¡º­¿öÁø ´À³¦ÀÌ¾ß."));
										ChatPacket(CHAT_TYPE_INFO, LC_TEXT("¼±¾ÇÄ¡°¡ %d Áõ°¡ÇÏ¿´½À´Ï´Ù."), delta/10);
									}
								}
								break;


//Add below:

							case 2700:
								{
									if (GetTitle() == 4){
										ChatPacket(CHAT_TYPE_INFO,"Zaten aynı tagı kullanıyorsun.");
										return false;
									}
									DBManager::instance().DirectQuery("UPDATE player SET prestige = 0 WHERE id = %d", GetPlayerID());
									UpdateTitle(- GetTitle());
									UpdateTitle(4);

									item->SetCount(item->GetCount() - 1);
								}
								break;
								
							case 2701: //Seri katil
								{
									if (GetTitle() == 5){
										ChatPacket(CHAT_TYPE_INFO,"Zaten aynı tagı kullanıyorsun.");
										return false;
									}
									DBManager::instance().DirectQuery("UPDATE player SET prestige = 0 WHERE id = %d", GetPlayerID());
									UpdateTitle(- GetTitle());
									UpdateTitle(5);

									item->SetCount(item->GetCount() - 1);
								}
								break;
							case 2702: //Dövüş Ustası
								{
									if (GetTitle() == 6){
										ChatPacket(CHAT_TYPE_INFO,"Zaten aynı tagı kullanıyorsun.");
										return false;
									}
									DBManager::instance().DirectQuery("UPDATE player SET prestige = 0 WHERE id = %d", GetPlayerID());
									UpdateTitle(- GetTitle());
									UpdateTitle(6);

									item->SetCount(item->GetCount() - 1);
								}
								break;
							case 2703: //Kontrolsüz Güç
								{
									if (GetTitle() == 7){
										ChatPacket(CHAT_TYPE_INFO,"Zaten aynı tagı kullanıyorsun.");
										return false;
									}
									DBManager::instance().DirectQuery("UPDATE player SET prestige = 0 WHERE id = %d", GetPlayerID());
									UpdateTitle(- GetTitle());
									UpdateTitle(7);

									item->SetCount(item->GetCount() - 1);
								}
								break;
							case 2704: //Defineci
								{
									if (GetTitle() == 8){
										ChatPacket(CHAT_TYPE_INFO,"Zaten aynı tagı kullanıyorsun.");
										return false;
									}
									DBManager::instance().DirectQuery("UPDATE player SET prestige = 0 WHERE id = %d", GetPlayerID());
									UpdateTitle(- GetTitle());
									UpdateTitle(8);

									item->SetCount(item->GetCount() - 1);
								}
								break;
							case 2705: //Araştırmacı
								{
									if (GetTitle() == 9){
										ChatPacket(CHAT_TYPE_INFO,"Zaten aynı tagı kullanıyorsun.");
										return false;
									}
									DBManager::instance().DirectQuery("UPDATE player SET prestige = 0 WHERE id = %d", GetPlayerID());
									UpdateTitle(- GetTitle());
									UpdateTitle(9);

									item->SetCount(item->GetCount() - 1);
								}
								break;
							case 2706: //Öğrenci
								{
									if (GetTitle() == 10){
										ChatPacket(CHAT_TYPE_INFO,"Zaten aynı tagı kullanıyorsun.");
										return false;
									}
									DBManager::instance().DirectQuery("UPDATE player SET prestige = 0 WHERE id = %d", GetPlayerID());
									UpdateTitle(- GetTitle());
									UpdateTitle(10);

									item->SetCount(item->GetCount() - 1);
								}
								break;
							case 2707: //Çaylak hediye tag
								{
									if (GetTitle() == 11){
										ChatPacket(CHAT_TYPE_INFO,"Zaten aynı tagı kullanıyorsun.");
										return false;
									}
									DBManager::instance().DirectQuery("UPDATE player SET prestige = 0 WHERE id = %d", GetPlayerID());
									UpdateTitle(- GetTitle());
									UpdateTitle(11);

									item->SetCount(item->GetCount() - 1);
								}
								break;
							case 2708:
								{
									if (GetTitle() == 12){
										ChatPacket(CHAT_TYPE_INFO,"Zaten aynı tagı kullanıyorsun.");
										return false;
									}
									DBManager::instance().DirectQuery("UPDATE player SET prestige = 0 WHERE id = %d", GetPlayerID());
									UpdateTitle(- GetTitle());
									UpdateTitle(12);

									item->SetCount(item->GetCount() - 1);
								}
								break;
							case 2709:
								{
									if (GetTitle() == 13){
										ChatPacket(CHAT_TYPE_INFO,"Zaten aynı tagı kullanıyorsun.");
										return false;
									}
									DBManager::instance().DirectQuery("UPDATE player SET prestige = 0 WHERE id = %d", GetPlayerID());
									UpdateTitle(- GetTitle());
									UpdateTitle(13);

									item->SetCount(item->GetCount() - 1);
								}
								break;
							case 2710:
								{
									if (GetTitle() == 14){
										ChatPacket(CHAT_TYPE_INFO,"Zaten aynı tagı kullanıyorsun.");
										return false;
									}
									DBManager::instance().DirectQuery("UPDATE player SET prestige = 0 WHERE id = %d", GetPlayerID());
									UpdateTitle(- GetTitle());
									UpdateTitle(14);

									item->SetCount(item->GetCount() - 1);
								}
								break;
							case 2711:
								{
									if (GetTitle() == 15){
										ChatPacket(CHAT_TYPE_INFO,"Zaten aynı tagı kullanıyorsun.");
										return false;
									}
									DBManager::instance().DirectQuery("UPDATE player SET prestige = 0 WHERE id = %d", GetPlayerID());
									UpdateTitle(- GetTitle());
									UpdateTitle(15);

									item->SetCount(item->GetCount() - 1);
								}
								break;
							case 2712:
								{
									if (GetTitle() == 16){
										ChatPacket(CHAT_TYPE_INFO,"Zaten aynı tagı kullanıyorsun.");
										return false;
									}
									DBManager::instance().DirectQuery("UPDATE player SET prestige = 0 WHERE id = %d", GetPlayerID());
									UpdateTitle(- GetTitle());
									UpdateTitle(16);

									item->SetCount(item->GetCount() - 1);
								}
								break;