from openai import OpenAI
import streamlit as st
# steamlit convert code into UI

st.title("Pizza order Bot")

client = OpenAI(api_key="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")

pizza_menu = """
        pepperoni pizza 12.95 , 10.00 , 7.00 \
        chesse 10.95 , 9.00 , 6.58 \
"""

GREET=""
MESSAGES= [ {'role':'system', 'content':f"""
        You are OrderBot , an automated service to collect orders for a pizza restuartent
"""}]

if "message" not in st.session_state:
    st.session_state.message = []
    with st.chat_messgae("assistant"):
        stream =client.chat.completions.create(
            model=st.session_state["openai_model"],
            message=MESSAGES
            temperature=0,
            stream=True,
        )
        response =st.write_stream(stream)
    MESSAGES.append(('role':'assistant','content':f"{response}"))
    GREET = response

for message in st.session_state.message:
    with st.chat_message(message["role"]):
        st.markdown(message["content"])

